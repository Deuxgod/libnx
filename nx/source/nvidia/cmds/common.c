#include <switch.h>
#include <string.h>

void vnCmdsInit(Vn* vn, NvGpu* parent)
{
    vn->parent = parent;

    VnCmd(vn,
        NvIncr(0, NvCmdCommon_BindObject, NvClassNumber_3D),
        NvIncr(1, NvCmdCommon_BindObject, NvClassNumber_Compute),
        NvIncr(2, NvCmdCommon_BindObject, NvClassNumber_Kepler),
        NvIncr(3, NvCmdCommon_BindObject, NvClassNumber_2D),
        NvIncr(4, NvCmdCommon_BindObject, NvClassNumber_DMA));
}