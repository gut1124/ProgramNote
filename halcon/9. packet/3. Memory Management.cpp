

// Temporary Data

// 在栈上开辟临时数据
Herror HAllocTmp(Hproc_handle proc_handle, void **pointer, size_t size);
Herror HFreeTmp(Hproc_handle proc_handle, void *pointer);
Herror HFreeUpToTmp(Hproc_handle proc_handle, void *pointer);
Herror HFreeAllTmp(Hproc_handle proc_handle);
Herror HAllocRLTmp(Hproc_handle proc_handle, Hrlregion **region);
Herror HAllocRLNumTmp(Hproc_handle proc_handle, Hrlregion **region, size_t size);
Herror HFreeRLTmp(Hproc_handle proc_handle, Hrlregion *region);

// 在堆上开辟数据
Herror HAllocLocal(Hproc_handle proc_handle, size_t size, void **pointer);
Herror HReallocLocal(Hproc_handle proc_handle, void *pointersize_t size, void **new_pointer);
Herror HFreeLocal(Hproc_handle proc_handle, void *pointer);
Herror HAllocRLLocal(Hproc_handle proc_handle, Hrlregion **region);
Herror HAllocRLNumLocal(Hproc_handle proc_handle, Hrlregion **region, size_t num);
Herror HReallocRLNumLocal(Hproc_handle proc_handle, Hrlregion *region, size_t num_new, Hrlregion **new_region);
Herror HFreeRLLocal(Hproc_handle proc_handle, Hrlregion *region);

// 句柄
Herror HAllocOutputHandle(Hproc_handle proc_handle, int par, Hphandle elem, H_HANDLE_TYPE HHandleInfo);

// Permanent Data

// 永久分配/释放内存(类似malloc和free)
Herror HAlloc(Hproc_handle proc_handle, size_t size, void **pointer);
Herror HRealloc(Hproc_handle proc_handle, void *pointer, size_t size, void **new_pointer);
Herror HFree(Hproc_handle proc_handle, void *pointer);
Herror HNewImage(Hproc_handle proc_handle, Himage *image, int kind, HIMGDIM width, HIMGDIM height);
Herror HNewImagePtr(Hproc_handle proc_handle, Himage *image, int kind, HIMGDIM width, HIMGDIM height, void *data, bool initImg);
Herror HAllocXLDCont(Hproc_handle proc_handle, Hcont **cont, HITEMCNT num_points);
Herror HFreeXLDCont(Hproc_handle proc_handle, Hcont *cont);

Herror HAllocRL(Hproc_handle proc_handle, Hrlregion **region);
Herror HAllocRLNum(Hproc_handle proc_handle, Hrlregion **region, size_t len);
Herror HReallocRLNum(Hproc_handle proc_handle, Hrlregion *region, size_t len, Hrlregion **new_region);
Herror HFreeRL(Hproc_handle proc_handle, Hrlregion *region);

// 名称约定
IP: Name Conventions for Procedures
IO: input/output procedure
DB: data base procedure

B: HBYTE
I4: INT4
F: float

H: Help
RL: region
XLD: XLD

C: Core







