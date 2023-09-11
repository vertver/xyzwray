#include "stdafx.h"
#include "blender_output_scale.h"

CBlender_OutputScale::CBlender_OutputScale() { description.CLS = 0; }
CBlender_OutputScale::~CBlender_OutputScale() {}

void CBlender_OutputScale::Compile(CBlender_Compile& C)
{
    IBlender::Compile(C);
    switch (C.iElement)
    {
    case 0:
        C.r_Pass("stub_notransform_t_target", "output_scale", FALSE, FALSE, FALSE);
        C.r_dx10Texture("s_image", r2_RT_generic0);
        C.r_dx10Sampler("smp_nofilter");
        C.r_dx10Sampler("smp_rtlinear");
        C.r_End();
        break;  
    }
}