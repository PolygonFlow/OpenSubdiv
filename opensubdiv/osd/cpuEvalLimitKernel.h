//
//   Copyright 2013 Pixar
//
//   Licensed under the Apache License, Version 2.0 (the "Apache License")
//   with the following modification; you may not use this file except in
//   compliance with the Apache License and the following modification to it:
//   Section 6. Trademarks. is deleted and replaced with:
//
//   6. Trademarks. This License does not grant permission to use the trade
//      names, trademarks, service marks, or product names of the Licensor
//      and its affiliates, except as required to comply with Section 4(c) of
//      the License and to reproduce the content of the NOTICE file.
//
//   You may obtain a copy of the Apache License at
//
//       http://www.apache.org/licenses/LICENSE-2.0
//
//   Unless required by applicable law or agreed to in writing, software
//   distributed under the Apache License with the above modification is
//   distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
//   KIND, either express or implied. See the Apache License for the specific
//   language governing permissions and limitations under the Apache License.
//

#ifndef OSD_CPU_EVAL_LIMIT_KERNEL_H
#define OSD_CPU_EVAL_LIMIT_KERNEL_H

#include "../version.h"

#include "../osd/vertexDescriptor.h"

namespace OpenSubdiv {
namespace OPENSUBDIV_VERSION {

void
evalBilinear(float u, float v,
             unsigned int const * vertexIndices,
             OsdVertexBufferDescriptor const & inDesc,
             float const * inQ,
             OsdVertexBufferDescriptor const & outDesc,
             float * outQ);

void
evalBSpline(float u, float v, 
            unsigned int const * vertexIndices,
            OsdVertexBufferDescriptor const & inDesc,
            float const * inQ, 
            OsdVertexBufferDescriptor const & outDesc,
            float * outQ, 
            float * outDQU,
            float * outDQV );

void
evalBoundary(float u, float v, 
             unsigned int const * vertexIndices,
             OsdVertexBufferDescriptor const & inDesc,
             float const * inQ,
             OsdVertexBufferDescriptor const & outDesc,
             float * outQ,
             float * outDQU,
             float * outDQV );

void
evalCorner(float u, float v, 
           unsigned int const * vertexIndices,
           OsdVertexBufferDescriptor const & inDesc,
           float const * inQ,
           OsdVertexBufferDescriptor const & outDesc,
           float * outQ,
           float * outDQU,
           float * outDQV );

void
evalGregory(float u, float v,
            unsigned int const * vertexIndices,
            int const * vertexValenceBuffer,
            unsigned int const  * quadOffsetBuffer,
            int maxValence,
            OsdVertexBufferDescriptor const & inDesc,
            float const * inQ, 
            OsdVertexBufferDescriptor const & outDesc,
            float * outQ, 
            float * outDQU,
            float * outDQV );

void
evalGregoryBoundary(float u, float v,
                    unsigned int const * vertexIndices,
                    int const * vertexValenceBuffer,
                    unsigned int const  * quadOffsetBuffer,
                    int maxValence,
                    OsdVertexBufferDescriptor const & inDesc,
                    float const * inQ,
                    OsdVertexBufferDescriptor const & outDesc,
                    float * outQ,
                    float * outDQU,
                    float * outDQV );

}  // end namespace OPENSUBDIV_VERSION
using namespace OPENSUBDIV_VERSION;

}  // end namespace OpenSubdiv

#endif  /* OSD_CPU_EVAL_LIMIT_KERNEL_H */
