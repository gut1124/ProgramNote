
// 1. Basic Access to Iconic Input Objects
// HGetObj : 获取对象
// HGetComp : 获取图像组件(图像矩阵, 通道, 区域...)

Herror HPNumOfChannels(Hproc_handle proc_handle, int par_num, INT4_8 obj_num, int *chn_num);

// HGetRL : 获取region
// HGetImage : 获取图像
// HGetXLD : 获取XLD

// 4. 创建对象并写入输出对象参数

HCrObj(Hproc_handle proc_handle, int par_num, Hkey *obj_key);
HCopyObj(Hproc_handle proc_handle, Hkey obj_key, int par_num, Hkey *obj_key);
HPutDRL(Hproc_handle proc_handle, Hkey obj_key, Hrlregion *region, Hkey *rl_key);
HPutImage(Hproc_handle proc_handle, Himage *image, bool copy, Hkey *obj_key);

//默认参数
HDefObj(Hproc_handle proc_handle, Hkey obj_key, Hkey comp_key, int comp);
HPutDImage(Hproc_handle proc_handle, Hkey obj_key, int comp, Himage *image, bool copy, Hkey *image_key);
Herror HCrImage(Hproc_handle proc_handle, Hkey image_key_in, int index, int type, HIMGDIM width, height, Hkey *image_key_out, Himage *image_out);
HCrXLD(Hproc_handle proc_handle, int par_num, XLD *xld, int xld_type, Hkey *used_xlds, int num_used_xlds, DBFreeProc free_proc, Hkey *obj_key);

// 5. 读写控制参数

HGetPElemL(Hproc_handle proc_handle, int par, int convert, INT4_8 const *restrict *elem, INT4_8 *num);
HGetPElemD(Hproc_handle proc_handle, int par, int convert, double const *restrict *elem, INT4_8 *num);
HGetPElemS(Hproc_handle proc_handle, int par, int convert, char const *const *restrict *elem, INT4_8 *num);
HGetPPar(Hproc_handle proc_handle, int par, Hcpar *restrict *val, INT4_8 *num);
HGetPElem(Hproc_handle proc_handle, int par, void const *restrict *elem, INT4_8 *num, int *type);

HGetElemL(Hproc_handle proc_handle, int par, int convert, int memtype, INT4_8 *restrict *elem, INT4_8 *num);
HGetElemD(Hproc_handle proc_handle, int par, int convert, int memtype, double *restrict *elem, INT4_8 *num);
HGetElemS(Hproc_handle proc_handle, int par, int convert, int memtype, char *restrict *restrict *elem, INT4_8 *num);

HCopyElemL(Hproc_handle proc_handle, int par, int convert, INT4_8 *restrict elem, INT4_8 *num);
HCopyElemD(Hproc_handle proc_handle, int par, int convert, double *restrict elem, INT4_8 *num);
HGetCPar(Hproc_handle proc_handle, int par, int type, Hcpar *val, INT4_8 min, INT4_8 max, INT4_8 *num);

HPutPElem(Hproc_handle proc_handle, int par, void *val, INT4_8 num, int type);
HPutPPar(Hproc_handle proc_handle, int par, Hcpar *val, INT4_8 num);
/* --- writing output parameters by copy */
HPutElem(Hproc_handle proc_handle, int parnr, void const *val, INT4_8 num, int type);
HPutElemH(Hproc_handle proc_handle, int par, void const *elem, INT4_8 num, H_HANDLE_TYPE *HHandleInfo);
HPutCPar(Hproc_handle proc_handle, int par, Hcpar const *val, INT4_8 num);