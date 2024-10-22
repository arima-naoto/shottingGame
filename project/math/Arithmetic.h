#pragma once
#include "project/Process/MyStruct.h"

Vector2 operator+(const Vector2& v1, const Vector2& v2);

Vector2 operator-(const Vector2& v1, const Vector2& v2);

Vector2 operator*(float_t s, const Vector2& v);

Vector2 operator*(const Vector2& v, float_t s);

Vector2 operator/(float_t s, const Vector2& v);

Matrix3x3 operator+(const Matrix3x3& m1, const Matrix3x3& m2);

Matrix3x3 operator-(const Matrix3x3& m1, const Matrix3x3& m2);

Matrix3x3 operator*(const Matrix3x3& m1, const Matrix3x3& m2);

Matrix3x3 operator~(const Matrix3x3& matrix);

Vector2 operator+=(Vector2& v1, const Vector2& v2);

Vector2 operator-=(Vector2& v1, const Vector2& v2);