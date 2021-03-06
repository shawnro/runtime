//
// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.
//

#ifndef _ICorJitCompiler
#define _ICorJitCompiler

#include "runtimedetails.h"
#include "ieememorymanager.h"

class interceptor_ICJC : public ICorJitCompiler
{

#include "icorjitcompilerimpl.h"

public:
    // Added to help us track the original icjc and be able to easily indirect to it.
    ICorJitCompiler* original_ICorJitCompiler;
};

extern interceptor_IEEMM* current_IEEMM; // we want a pointer to the memory manager to live beyond the scope of a single
                                         // compileMethodCall (jit32 expects this)

#endif
