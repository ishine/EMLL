/*****************************************************************************/
/* Copyright YouDao, Inc.                                                    */
/*                                                                           */
/* Licensed under the Apache License, Version 2.0 (the "License");           */
/* you may not use this file except in compliance with the License.          */
/* You may obtain a copy of the License at                                   */
/*                                                                           */
/*     http://www.apache.org/licenses/LICENSE-2.0                            */
/*                                                                           */
/* Unless required by applicable law or agreed to in writing, software       */
/* distributed under the License is distributed on an "AS IS" BASIS,         */
/* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  */
/* See the License for the specific language governing permissions and       */
/* limitations under the License.                                            */
/*****************************************************************************/


#include <stdint.h>
#include <arm_neon.h>

void bias_float(float *dst, float bias_dim0,
  const float *bias_dim1, float bias_dim1_scale,
  const float *bias_dim2, float bias_dim2_scale,
  uint32_t dim1, uint32_t dim2);

void bias_int32_t(int32_t *dst, int32_t bias_dim0,
  const int32_t *bias_dim1, int32_t bias_dim1_scale,
  const int32_t *bias_dim2, int32_t bias_dim2_scale,
  uint32_t dim1, uint32_t dim2);

void u8u32_sum(const uint8_t *src, uint32_t *dst,
  uint32_t dim1, uint32_t dim2, uint8_t direction);

void s16_sumsquare(const int16_t *dat, int32_t *sum,
  int64_t *sumsquare, uint32_t size);
