//----------------------------------------------------------------------------
//
//  Copyright (C) 2004-2022 by EMGU Corporation. All rights reserved.
//
//  Vector of VectorOfPoint3D32F
//
//  This file is automatically generated, do not modify.
//----------------------------------------------------------------------------


#pragma once
#ifndef EMGU_VECTOR_VectorOfPoint3D32F_H
#define EMGU_VECTOR_VectorOfPoint3D32F_H

#include "vectors_c.h"



#if 1

//----------------------------------------------------------------------------
//
//  Vector of VectorOfPoint3D32F
//
//----------------------------------------------------------------------------
CVAPI(std::vector< std::vector< cv::Point3f > >*) VectorOfVectorOfPoint3D32FCreate();

CVAPI(std::vector< std::vector< cv::Point3f > >*) VectorOfVectorOfPoint3D32FCreateSize(int size);

CVAPI(int) VectorOfVectorOfPoint3D32FGetSize(std::vector< std::vector< cv::Point3f > >* v);

CVAPI(void) VectorOfVectorOfPoint3D32FPush(std::vector< std::vector< cv::Point3f > >* v, std::vector< cv::Point3f >* value);

//CVAPI(void) VectorOfVectorOfPoint3D32FPushMulti(std::vector< std::vector< cv::Point3f > >* v, std::vector< cv::Point3f >* values, int count);

CVAPI(void) VectorOfVectorOfPoint3D32FPushVector(std::vector< std::vector< cv::Point3f > >* v, std::vector< std::vector< cv::Point3f > >* other);

CVAPI(std::vector< cv::Point3f >*) VectorOfVectorOfPoint3D32FGetStartAddress(std::vector< std::vector< cv::Point3f > >* v);

CVAPI(void) VectorOfVectorOfPoint3D32FClear(std::vector< std::vector< cv::Point3f > >* v);

CVAPI(void) VectorOfVectorOfPoint3D32FRelease(std::vector< std::vector< cv::Point3f > >** v);

CVAPI(void) VectorOfVectorOfPoint3D32FCopyData(std::vector< std::vector< cv::Point3f > >* v,  std::vector< cv::Point3f >* data);

CVAPI(std::vector< cv::Point3f >*) VectorOfVectorOfPoint3D32FGetStartAddress(std::vector< std::vector< cv::Point3f > >* v);

CVAPI(int64_t) VectorOfVectorOfPoint3D32FGetMemorySize(std::vector< std::vector< cv::Point3f > >* v);

CVAPI(void) VectorOfVectorOfPoint3D32FGetItemPtr(std::vector<  std::vector< cv::Point3f > >* vec, int index,  std::vector< cv::Point3f >** element);

#if true
CVAPI(cv::_InputArray*) cveInputArrayFromVectorOfVectorOfPoint3D32F(std::vector< std::vector< cv::Point3f > >* vec);

CVAPI(cv::_OutputArray*) cveOutputArrayFromVectorOfVectorOfPoint3D32F(std::vector< std::vector< cv::Point3f > >* vec);

CVAPI(cv::_InputOutputArray*) cveInputOutputArrayFromVectorOfVectorOfPoint3D32F(std::vector< std::vector< cv::Point3f > >* vec);
#endif

CVAPI(int) VectorOfVectorOfPoint3D32FSizeOfItemInBytes();

#else

CVAPI(void *) VectorOfVectorOfPoint3D32FCreate();

CVAPI(void *) VectorOfVectorOfPoint3D32FCreateSize(int size);

CVAPI(int) VectorOfVectorOfPoint3D32FGetSize(void* v);

CVAPI(void) VectorOfVectorOfPoint3D32FPush(void* v, void* value);

//CVAPI(void) VectorOfVectorOfPoint3D32FPushMulti(std::vector< std::vector< cv::Point3f > >* v, std::vector< cv::Point3f >* values, int count);

CVAPI(void) VectorOfVectorOfPoint3D32FPushVector(void* v, void* other);

CVAPI(void) VectorOfVectorOfPoint3D32FClear(void* v);

CVAPI(void) VectorOfVectorOfPoint3D32FRelease(void** v);

CVAPI(void) VectorOfVectorOfPoint3D32FCopyData(void* v, void* data);

CVAPI(void*) VectorOfVectorOfPoint3D32FGetStartAddress(void* v);

CVAPI(void) VectorOfVectorOfPoint3D32FGetItemPtr(void* vec, int index,  void** element);

#if true
CVAPI(cv::_InputArray*) cveInputArrayFromVectorOfVectorOfPoint3D32F(void* vec);

CVAPI(cv::_OutputArray*) cveOutputArrayFromVectorOfVectorOfPoint3D32F(void* vec);

CVAPI(cv::_InputOutputArray*) cveInputOutputArrayFromVectorOfVectorOfPoint3D32F(void* vec);
#endif

CVAPI(int) VectorOfVectorOfPoint3D32FSizeOfItemInBytes();

static inline CV_NORETURN void throw_no_vector() { CV_Error(cv::Error::StsBadFunc, "The library is compiled without VectorOfVectorOfPoint3D32F support"); }

#endif

#endif
