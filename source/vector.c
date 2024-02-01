#include <glmath/glmath.h>

/*
 *  MIT License
 *  
 *  Copyright (c) 2024 Matthew Edward
 *  
 *  Permission is hereby granted, free of charge, to any person obtaining a copy
 *  of this software and associated documentation files (the "Software"), to deal
 *  in the Software without restriction, including without limitation the rights
 *  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 *  copies of the Software, and to permit persons to whom the Software is
 *  furnished to do so, subject to the following conditions:
 *  
 *  The above copyright notice and this permission notice shall be included in all
 *  copies or substantial portions of the Software.
 *  
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 *  SOFTWARE.
 */

void glmath_vec2_add(GLMvec2 *vector0, GLMvec2 *vector1, GLMvec2 *result)
{
    result->x = vector0->x + vector1->x;
    result->y = vector0->y + vector1->y;
}

void glmath_vec2_subtract(GLMvec2 *vector0, GLMvec2 *vector1, GLMvec2 *result)
{
    result->x = vector0->x - vector1->x;
    result->y = vector0->y - vector1->y;
}

void glmath_vec2_scale(GLMvec2 *vector, float scalar, GLMvec2 *result)
{
    result->x = vector->x * scalar;
    result->y = vector->y * scalar;
}

void glmath_vec2_dot(GLMvec2 *vector0, GLMvec2 *vector1, float *result)
{
    *result = vector0->x * vector1->x + vector0->y * vector1->y;
}