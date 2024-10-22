#pragma once
#include "project/Math/Arithmetic.h"


class Math
{
public:

	
	static Vector2 Add(const Vector2& v1, const Vector2& v2);
	
	
	static Vector2 Subtract(const Vector2& v1, const Vector2& v2);
	

	static Vector2 Multiply(float s, const Vector2& v2);
	
	
	static float Dot(const Vector2& v1, const Vector2& v2);
	
	
	static float Length(const Vector2& v);
	
	
	static Matrix3x3 Add(const Matrix3x3& m1, const Matrix3x3& m2);
	
	
	static Matrix3x3 Subtract(const Matrix3x3& m1, const Matrix3x3& m2);
	
	static Matrix3x3 Multiply(const Matrix3x3& m1, const Matrix3x3& m2);
	
	static Matrix3x3 MakeScaleMatrix(const Vector2& scale);
	
	static Matrix3x3 MakeRotateMatrix(float theta);

	static Matrix3x3 MakeTranslateMatrix(const Vector2& translate);
	
	static Matrix3x3 AffineMatrix(const Affine&affine);
	
	static Matrix3x3 OrthoGraphicMatrix(const LeftAndSize<float>& ortho);
	
	static Matrix3x3 ViewportMatrix(const Viewport<float>& viewport);
	
	static bool IsCollision(const GameObject& obj1, const GameObject& obj2);
};

