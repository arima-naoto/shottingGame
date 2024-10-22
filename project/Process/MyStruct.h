#pragma once
#include "Novice.h"
#define _USE_MATH_DEFINES
#include "cmath"
#include "cassert"

struct Vector2 {
	float_t x;
	float_t y;
};

struct Matrix3x3 {
	float_t m[3][3];
};

struct Affine {
	Vector2 scale;
	float theta;
	Vector2 translate;
};

template<typename Ty_>
struct LeftAndSize {
	Ty_ left;
	Ty_ top;
	Ty_ right;
	Ty_ bottom;
};

template<typename Ty_>
struct Viewport {
	Ty_ left;
	Ty_ top;
	Ty_ wigth;
	Ty_ height;
};

struct GameObject {
	Vector2 pos;
	float radius;
};

