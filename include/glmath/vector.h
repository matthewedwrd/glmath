#pragma once

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

/*
 *  The 2-dimensional vector type, which allows us to store 2-dimensional
 *  values.
 *  Since we define these vector types as unions, we are allowed to access
 *  them in different ways, such as coordinates, size, or in other ways.
 */
typedef union
{
	float value[2];

	struct
	{
		float x, y;
	};

	struct
	{
		float w, h;
	};

	struct
	{
		float a, b;
	};
} GLMvec2;

/*
 *  The 3-dimensional vector type, which allows us to store 3-dimensional
 *  values.
 */
typedef union
{
	float value[3];

	struct
	{
		float x, y, z;
	};

	struct
	{
		float r, g, b;
	};
} GLMvec3;

/*
 *  The 4-dimensional vector type, which allows us to store 4-dimensional
 *  values.
 */
typedef union
{
	float value[4];

	struct
	{
		float x, y, z, w;
	};

	struct
	{
		float r, g, b, a;
	};
} GLMvec4;

/* Obtain the sum of two 2-dimensional values. */
void glmath_vec2_add(GLMvec2 *vector0, GLMvec2 *vector1, GLMvec2 *result);

/* Obtain the difference of two 2-dimensional values. */
void glmath_vec2_subtract(GLMvec2 *vector0, GLMvec2 *vector1, GLMvec2 *result);

/* Obtain the scaled version of a 2-dimensional value. */
void glmath_vec2_scale(GLMvec2 *vector, float scalar, GLMvec2 *result);

/* Obtain the dot product of two 2-dimensional values. */
void glmath_vec2_dot(GLMvec2 *vector0, GLMvec2 *vector1, float *result);