typedef struct NvGpu {
    NvAddressSpace addr_space;
    NvChannel gpu_channel;
    NvGpfifo gpfifo;
    NvZcullContext zcull_ctx;
    Nv3dContext _3d_ctx;
} NvGpu;

Result nvgpuCreate(NvGpu* g);
void   nvgpuClose(NvGpu* g);