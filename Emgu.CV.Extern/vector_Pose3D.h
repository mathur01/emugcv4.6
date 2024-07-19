//----------------------------------------------------------------------------
//
//  Copyright (C) 2004-2022 by EMGU Corporation. All rights reserved.
//
//  Vector of Pose3D
//
//  This file is automatically generated, do not modify.
//----------------------------------------------------------------------------


#pragma once
#ifndef EMGU_VECTOR_Pose3D_H
#define EMGU_VECTOR_Pose3D_H

#include "vectors_c.h"

#include "surface_matching_c.h"

#if defined(HAVE_OPENCV_SURFACE_MATCHING)

//----------------------------------------------------------------------------
//
//  Vector of Pose3D
//
//----------------------------------------------------------------------------
CVAPI(std::vector< std::vector< cv::ppf_match_3d::Pose3D > >*) VectorOfPose3DCreate();

CVAPI(std::vector< std::vector< cv::ppf_match_3d::Pose3D > >*) VectorOfPose3DCreateSize(int size);

CVAPI(int) VectorOfPose3DGetSize(std::vector< std::vector< cv::ppf_match_3d::Pose3D > >* v);

CVAPI(void) VectorOfPose3DPush(std::vector< std::vector< cv::ppf_match_3d::Pose3D > >* v, std::vector< cv::ppf_match_3d::Pose3D >* value);

//CVAPI(void) VectorOfPose3DPushMulti(std::vector< std::vector< cv::ppf_match_3d::Pose3D > >* v, std::vector< cv::ppf_match_3d::Pose3D >* values, int count);

CVAPI(void) VectorOfPose3DPushVector(std::vector< std::vector< cv::ppf_match_3d::Pose3D > >* v, std::vector< std::vector< cv::ppf_match_3d::Pose3D > >* other);

CVAPI(std::vector< cv::ppf_match_3d::Pose3D >*) VectorOfPose3DGetStartAddress(std::vector< std::vector< cv::ppf_match_3d::Pose3D > >* v);

CVAPI(void) VectorOfPose3DClear(std::vector< std::vector< cv::ppf_match_3d::Pose3D > >* v);

CVAPI(void) VectorOfPose3DRelease(std::vector< std::vector< cv::ppf_match_3d::Pose3D > >** v);

CVAPI(void) VectorOfPose3DCopyData(std::vector< std::vector< cv::ppf_match_3d::Pose3D > >* v,  std::vector< cv::ppf_match_3d::Pose3D >* data);

CVAPI(std::vector< cv::ppf_match_3d::Pose3D >*) VectorOfPose3DGetStartAddress(std::vector< std::vector< cv::ppf_match_3d::Pose3D > >* v);

CVAPI(int64_t) VectorOfPose3DGetMemorySize(std::vector< std::vector< cv::ppf_match_3d::Pose3D > >* v);

CVAPI(void) VectorOfPose3DGetItemPtr(std::vector<  std::vector< cv::ppf_match_3d::Pose3D > >* vec, int index,  std::vector< cv::ppf_match_3d::Pose3D >** element);

#if false
CVAPI(cv::_InputArray*) cveInputArrayFromVectorOfPose3D(std::vector< std::vector< cv::ppf_match_3d::Pose3D > >* vec);

CVAPI(cv::_OutputArray*) cveOutputArrayFromVectorOfPose3D(std::vector< std::vector< cv::ppf_match_3d::Pose3D > >* vec);

CVAPI(cv::_InputOutputArray*) cveInputOutputArrayFromVectorOfPose3D(std::vector< std::vector< cv::ppf_match_3d::Pose3D > >* vec);
#endif

CVAPI(int) VectorOfPose3DSizeOfItemInBytes();

#else

CVAPI(void *) VectorOfPose3DCreate();

CVAPI(void *) VectorOfPose3DCreateSize(int size);

CVAPI(int) VectorOfPose3DGetSize(void* v);

CVAPI(void) VectorOfPose3DPush(void* v, void* value);

//CVAPI(void) VectorOfPose3DPushMulti(std::vector< std::vector< cv::ppf_match_3d::Pose3D > >* v, std::vector< cv::ppf_match_3d::Pose3D >* values, int count);

CVAPI(void) VectorOfPose3DPushVector(void* v, void* other);

CVAPI(void) VectorOfPose3DClear(void* v);

CVAPI(void) VectorOfPose3DRelease(void** v);

CVAPI(void) VectorOfPose3DCopyData(void* v, void* data);

CVAPI(void*) VectorOfPose3DGetStartAddress(void* v);

CVAPI(void) VectorOfPose3DGetItemPtr(void* vec, int index,  void** element);

#if false
CVAPI(cv::_InputArray*) cveInputArrayFromVectorOfPose3D(void* vec);

CVAPI(cv::_OutputArray*) cveOutputArrayFromVectorOfPose3D(void* vec);

CVAPI(cv::_InputOutputArray*) cveInputOutputArrayFromVectorOfPose3D(void* vec);
#endif

CVAPI(int) VectorOfPose3DSizeOfItemInBytes();

static inline CV_NORETURN void throw_no_vector() { CV_Error(cv::Error::StsBadFunc, "The library is compiled without VectorOfPose3D support"); }

#endif

#endif