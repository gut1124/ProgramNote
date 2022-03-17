
// 1. Pixel Data(Himage)

typedef union
{
    uint8_t *b;       /* 0..255 (BYTE_IMAGE) */
    uint8_t *z;       /* 0..255 mod 256 (CYCLIC_IMAGE) */
    uint8_t *d;       /* orientation 0..180 (DIR_IMAGE) */
    int8_t *i;        /* -128..127 (INT1_IMAGE) */
    int32_t *l;       /* 4 byte integer (LONG_IMAGE) */
    int64_t *i8;      /* 8 byte integer (INT8_IMAGE) */
    float *f;         /* 4 byte real (FLOAT_IMAGE) */
    HVFPixel *vf;     /* vector field (VF_IMAGE) */
    HComplexPixel *c; /* complex image (COMPLEX_IMAGE) */
    HInt2Pixel s;     /* 2 bytes with sign (INT2_IMAGE) */
    HUInt2Pixel u;    /* 2 bytes without sign (UINT2_IMAGE) */
} HPixelImage;
typedef struct
{
    int kind;                 /* pixel type */
    HPixelImage pixel;        /* pixel data */
    HIMGDIM width;            /* image width */
    HIMGDIM height;           /* image height */
    HImageFreeProc free_proc; /* function for deallocating image data */
    bool free;                /* free image data when deleting image */
    /* time of creation of image */
    uint16_t msec; /* milliseconds 0..999 */
    uint8_t sec;   /* seconds 0..59 */
    uint8_t min;   /* minutes 0.59 */
    uint8_t hour;  /* 0..23 */
    uint8_t day;   /* 1..31 */
    uint16_t yday; /* 1..366 */
    uint8_t mon;   /* 1..12 */
    uint16_t year; /* 19xx */
} Himage;

#define BYTE_IMAGE (int)1      /* 1 byte per pixel (0..255) */
#define INT4_IMAGE (int)2      /* Type: 4 bytes per pixel (int32_t) */
#define LONG_IMAGE (int)2      /* 4 byte per pixel (int32_t) */
#define FLOAT_IMAGE (int)4     /* 4 byte per pixel (float) */
#define DIR_IMAGE (int)8       /* edge orientation 0..180 */
#define CYCLIC_IMAGE (int)16   /* 0..255 cyclic */
#define INT1_IMAGE (int)32     /* -128..127 */
#define COMPLEX_IMAGE (int)128 /* 2 float images */
#define INT2_IMAGE (int)512    /* 2 bytes with sign */
#define UINT2_IMAGE (int)1024  /* Type: 2 bytes (unsigned short) */
#define VF_IMAGE (int)2048     /* Two float images */
#define INT8_IMAGE (int)4096   /* 8 byte per pixel (int64_t) */

// 2. Region Data(Hrlregion)

typedef struct
{
    float re; /* real image part */
    float im; /* imaginary image part */
} HComplexPixel;
typedef struct
{
    int16_t *p;      /* gray values */
    int8_t num_bits; /* number of used bits */
} HInt2Pixel;
typedef struct
{
    uint16_t *p;     /* gray values */
    int8_t num_bits; /* number of used bits */
} HUInt2Pixel;
typedef struct
{
    float *row; /* row direction */
    float *col; /* column direction */
} HVFPixel;

typedef struct
{
    HIMGCOOR l;  /* line number (row) of run */
    HIMGCOOR cb; /* column index of beginning of run */
    HIMGCOOR ce; /* column index of ending of run */
} Hrun;
typedef struct
{
    bool is_compl;       /* region is complement */
    HITEMCNT num;        /* number of runs */
    HITEMCNT num_max;    /* maximum number of runs */
    HRegFeature feature; /* already processed features */
    Hrun *rl;            /* pointer on array of run lengths */
} Hrlregion;

typedef struct
{
    union
    {
        HFeatureFlags single;
        long all; // if possible use 64 bits!
    } def;
    uint8_t shape; // SHAPE_*
    bool is_convex;
    bool is_filled;
    bool is_connected4;
    bool is_connected8;
    bool is_thin; // one pixel thin
    double circularity;
    double compactness;
    double contlength;
    double convexity;
    double phi;
    double ra, rb;   // elliptic_axis
    double ra_, rb_; // elliptic_shape
    double anisometry, bulkiness, structure_factor;
    double m11, m20, m02, ia, ib;
    double row, col;
    HIMGCNT area;
    HIMGCOOR row1, col1, row2, col2;
    double row_rect, col_rect, phi_rect, length1, length2;
    double row_circle, col_circle, radius;
    HIMGCOOR min_chord, max_chord;
    HIMGCOOR min_chord_gap, max_chord_gap;
    double rectangularity;
} HRegFeature;

// 3 XLDs(Hcont, Hpoly)

typedef enum cont_class
{
    cont_unknown, /* unknown */
    cont_no_junc, /* neither start nor end point points */
    /* are junctions */
    cont_start_junc, /* start point is a junction */
    cont_end_junc,   /* end point is a junction */
    cont_both_junc,  /* both start and end point are junctions */
    cont_closed      /* closed contour */
} Hcont_class;
typedef struct cont_attrib
{
    char *name;    /* name of the attribute */
    HSUBATTR *val; /* value of the attribute (per point) */
} Hcont_attrib;
typedef struct cont_global_attrib
{
    char *name;   /* name of the global attribute */
    HSUBATTR val; /* value of the attribute (per contour) */
} Hcont_global_attrib;
typedef struct cont_type
{
    HITEMCNT num;                /* number of points along the contour */
    HSUBCOOR *row;               /* points / row indices (y coordinates) */
    HSUBCOOR *col;               /* points / column indices (x coord.) */
    Hcont_class cont_class;      /* contour class */
    int32_t num_attrib;          /* number of additional attributes */
    Hcont_attrib *attribs;       /* additional attributes (for each point) */
    int32_t num_global;          /* number of additional global attributes */
    Hcont_global_attrib *global; /* additional attributes (per contour) */
    int32_t h;                   /* auxiliary (temporary) */
} Hcont;

typedef struct lin_seg_type
{
    HSUBCOOR row, col; /* a control point of the polygon: */
                       /* row (y) and column (x) coordinate */
    HSUBATTR length;   /* length of the line from the */
                       /* current to the next point */
    HSUBATTR phi;      /* orientation (rad) of this line */
    Hkey ref;          /* database key of the underlying */

    /* contour */
    HITEMCNT first; /* index of the first point of the */
    /* underlying contour belonging to */
    /* current side of the polygon */
    HITEMCNT last; /* index of the last contour point */
} Hline_seg;
typedef struct poly_type
{
    HITEMCNT num_line; /* number of lines */
    HITEMCNT len_line; /* maximum number of lines (size */
    /* of the array lines) */
    Hline_seg *lines; /* control points of the polygon */
} Hpoly;

// 4. Control Parameters

typedef union
{
    INT4_8 l;   /* 4/8 byte integer */
    double d;   /* 8 byte real */
    char *s;    /* string */
    Hphandle H; /* Pointer to handle */
} Hpar;
typedef struct
{
    Hpar par;
    int type;
} Hcpar;
