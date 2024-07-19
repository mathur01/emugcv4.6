//----------------------------------------------------------------------------
//
//  Copyright (C) 2004-2022 by EMGU Corporation. All rights reserved.
//
//  Vector of VectorOfMat
//
//  This file is automatically generated, do not modify.
//----------------------------------------------------------------------------


#pragma once
#ifndef EMGU_VECTOR_VectorOfMat_H
#define EMGU_VECTOR_VectorOfMat_H

#include "vectors_c.h"



#if 1

//----------------------------------------------------------------------------
//
//  Vector of VectorOfMat
//
//----------------------------------------------------------------------------
CVAPI(std::vector< std::vector< cv::Mat > >*) VectorOfVectorOfMatCreate();

CVAPI(std::vector< std::vector< cv::Mat > >*) VectorOfVectorOfMatCreateSize(int size);

CVAPI(int) VectorOfVectorOfMatGetSize(std::vector< std::vector< cv::Mat > >* v);

CVAPI(void) VectorOfVectorOfMatPush(std::vector< std::vector< cv::Mat > >* v, std::vector< cv::Mat >* value);

//CVAPI(void) VectorOfVectorOfMatPushMulti(std::vector< std::vector< cv::Mat > >* v, std::vector< cv::Mat >* values, int count);

CVAPI(void) VectorOfVectorOfMatPushVector(std::vector< std::vector< cv::Mat > >* v, std::vector< std::vector< cv::Mat > >* other);

CVAPI(std::vector< cv::Mat >*) VectorOfVectorOfMatGetStartAddress(std::vector< std::vector< cv::Mat > >* v);

CVAPI(void) VectorOfVectorOfMatClear(std::vector< std::vector< cv::Mat > >* v);

CVAPI(void) VectorOfVectorOfMatRelease(std::vector< std::vector< cv::Mat > >** v);

CVAPI(void) VectorOfVectorOfMatCopyData(std::vector< std::vector< cv::Mat > >* v,  std::vector< cv::Mat >* data);

CVAPI(std::vector< cv::Mat >*) VectorOfVectorOfMatGetStartAddress(std::vector< std::vector< cv::Mat > >* v);

CVAPI(int64_t) VectorOfVectorOfMatGetMemorySize(std::vector< std::vector< cv::Mat > >* v);

CVAPI(void) VectorOfVectorOfMatGetItemPtr(std::vector<  std::vector< cv::Mat > >* vec, int index,  std::vector< cv::Mat >** element);

#if false
CVAPI(cv::_InputArray*) cveInputArrayFromVectorOfVectorOfMat(std::vector< std::vector< cv::Mat > >* vec);

CVAPI(cv::_OutputArray*) cveOutputArrayFromVectorOfVectorOfMat(std::vector< std::vector< cv::Mat > >* vec);

CVAPI(cv::_InputOutputArray*) cveInputOutputArrayFromVectorOfVectorOfMat(std::vector< std::vector< cv::Mat > >* vec);
#endif

CVAPI(int) VectorOfVectorOfMatSizeOfItemInBytes();

#else

CVAPI(void *) VectorOfVectorOfMatCreate();

CVAPI(void *) VectorOfVectorOfMatCreateSize(int size);

CVAPI(int) VectorOfVectorOfMatGetSize(void* v);

CVAPI(void) VectorOfVectorOfMatPush(void* v, void* value);

//CVAPI(void) VectorOfVectorOfMatPushMulti(std::vector< std::vector< cv::Mat > >* v, std::vector< cv::Mat >* values, int count);

CVAPI(void) VectorOfVectorOfMatPushVector(void* v, void* other);

CVAPI(void) VectorOfVectorOfMatClear(void* v);

CVAPI(void) VectorOfVectorOfMatRelease(void** v);

CVAPI(void) VectorOfVectorOfMatCopyData(void* v, void* data);

CVAPI(void*) VectorOfVectorOfMatGetStartAddress(void* v);

CVAPI(void) VectorOfVectorOfMatGetItemPtr(void* vec, int index,  void** element);

#if false
CVAPI(cv::_InputArray*) cveInputArrayFromVectorOfVectorOfMat(void* vec);

CVAPI(cv::_OutputArray*) cveOutputArrayFromVectorOfVectorOfMat(void* vec);

CVAPI(cv::_InputOutputArray*) cveInputOutputArrayFromVectorOfVectorOfMat(void* vec);
#endif

CVAPI(int) VectorOfVectorOfMatSizeOfItemInBytes();

static inline CV_NORETURN void throw_no_vector() { CV_Error(cv::Error::StsBadFunc, "The library is compiled without VectorOfVectorOfMat support"); }

#endif

#endif
