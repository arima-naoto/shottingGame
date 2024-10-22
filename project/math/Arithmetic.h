#pragma once
#include "project/Process/MyStruct.h"

//加算演算子(Vector2)
Vector2 operator+(const Vector2& v1, const Vector2& v2);

//減算演算子(Vector2)
Vector2 operator-(const Vector2& v1, const Vector2& v2);

//乗算演算子(Vector2)
Vector2 operator*(float_t s, const Vector2& v);

//乗算演算子(Vector2)
Vector2 operator*(const Vector2& v, float_t s);

//除算演算子(Vector2)
Vector2 operator/(float_t s, const Vector2& v);

//加算演算子(Matrix3x3)
Matrix3x3 operator+(const Matrix3x3& m1, const Matrix3x3& m2);

//減算演算子(Matrix3x3)
Matrix3x3 operator-(const Matrix3x3& m1, const Matrix3x3& m2);

//乗算演算子(Matrix3x3)
Matrix3x3 operator*(const Matrix3x3& m1, const Matrix3x3& m2);

//逆行列演算子(Matrix3x3)
Matrix3x3 operator~(const Matrix3x3& matrix);

//複合加算演算子(Vector2)
Vector2 operator+=(Vector2& v1, const Vector2& v2);

//複合加算演算子(Vector2)
Vector2 operator-=(Vector2& v1, const Vector2& v2);