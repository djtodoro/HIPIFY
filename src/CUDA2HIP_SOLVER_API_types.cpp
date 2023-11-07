/*
Copyright (c) 2015 - present Advanced Micro Devices, Inc. All rights reserved.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/

#include "CUDA2HIP.h"

// Map of all functions
const std::map<llvm::StringRef, hipCounter> CUDA_SOLVER_TYPE_NAME_MAP {
  {"cusolverStatus_t",                                      {"hipsolverStatus_t",                                    "rocblas_status",                                                CONV_LIB_FUNC, API_SOLVER, 1, HIP_EXPERIMENTAL}},
  {"cusolverDnHandle_t",                                    {"hipsolverHandle_t",                                    "rocblas_handle",                                                CONV_LIB_FUNC, API_SOLVER, 1, HIP_EXPERIMENTAL}},
};

const std::map<llvm::StringRef, cudaAPIversions> CUDA_SOLVER_TYPE_NAME_VER_MAP {
};

const std::map<llvm::StringRef, hipAPIversions> HIP_SOLVER_TYPE_NAME_VER_MAP {
  {"hipsolverStatus_t",                                     {HIP_4050, HIP_0,    HIP_0,  HIP_LATEST}},
  {"hipsolverHandle_t",                                     {HIP_4050, HIP_0,    HIP_0,  HIP_LATEST}},
};
