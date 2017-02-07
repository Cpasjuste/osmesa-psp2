/****************************************************************************
* Copyright (C) 2016 Intel Corporation.   All Rights Reserved.
*
* Permission is hereby granted, free of charge, to any person obtaining a
* copy of this software and associated documentation files (the "Software"),
* to deal in the Software without restriction, including without limitation
* the rights to use, copy, modify, merge, publish, distribute, sublicense,
* and/or sell copies of the Software, and to permit persons to whom the
* Software is furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice (including the next
* paragraph) shall be included in all copies or substantial portions of the
* Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
* THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
* FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
* IN THE SOFTWARE.
*
* @file gen_ar_event.cpp
*
* @brief Implementation for events.  auto-generated file
* 
* DO NOT EDIT
*
******************************************************************************/
#include "common/os.h"
#include "gen_ar_event.h"
#include "gen_ar_eventhandler.h"

using namespace ArchRast;

void Start::accept(EventHandler* pHandler)
{
    pHandler->handle(*this);
}

void End::accept(EventHandler* pHandler)
{
    pHandler->handle(*this);
}

void DrawInstancedEvent::accept(EventHandler* pHandler)
{
    pHandler->handle(*this);
}

void DrawIndexedInstancedEvent::accept(EventHandler* pHandler)
{
    pHandler->handle(*this);
}

void DispatchEvent::accept(EventHandler* pHandler)
{
    pHandler->handle(*this);
}

void FrameEndEvent::accept(EventHandler* pHandler)
{
    pHandler->handle(*this);
}

void FrontendStatsEvent::accept(EventHandler* pHandler)
{
    pHandler->handle(*this);
}

void BackendStatsEvent::accept(EventHandler* pHandler)
{
    pHandler->handle(*this);
}
