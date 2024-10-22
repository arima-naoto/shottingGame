#include "Math.h"

Vector2 Math::Add(const Vector2& v1, const Vector2& v2) { return v1 + v2; }

Vector2 Math::Subtract(const Vector2& v1, const Vector2& v2) { return v1 - v2; }

Vector2 Math::Multiply(float s, const Vector2& v) { return s * v; }

float Math::Dot(const Vector2& v1, const Vector2& v2) { return v1.x * v2.x + v1.y * v2.y; }

float Math::Length(const Vector2& v) {
	float result = sqrtf(powf(v.x, 2) + powf(v.y, 2));
	return result;
}

Matrix3x3 Math::Add(const Matrix3x3& m1, const Matrix3x3& m2) { return m1 + m2; }

Matrix3x3 Math::Subtract(const Matrix3x3& m1, const Matrix3x3& m2) { return m1 - m2; }

Matrix3x3 Math::Multiply(const Matrix3x3& m1, const Matrix3x3& m2) { return m1 * m2; }

Matrix3x3 Math::MakeScaleMatrix(const Vector2& scale) {
	return {
		scale.x,0,0,
		0,scale.y,0,
		0,0,1
	};
}

Matrix3x3 Math::MakeRotateMatrix(float theta) {
	return {
		cosf(theta),sinf(theta),0,
		-sinf(theta),cosf(theta),0,
		0,0,1
	};
}

Matrix3x3 Math::MakeTranslateMatrix(const Vector2& translate) {

	return {
		1,0,0,
		0,1,0,
		translate.x,translate.y,1
	};
}

Matrix3x3 Math::MakeAffineMatrix(const Affine&affine){
	return MakeScaleMatrix(affine.scale) * MakeRotateMatrix(affine.theta) * MakeTranslateMatrix(affine.translate);
}

Matrix3x3 Math::MakeOrthoGraphicMatrix(const LeftAndSize<float>& ortho) {
	return {
		2.0f / (ortho.right - ortho.left),0,0,
		0,2.0f / (ortho.top - ortho.bottom),0,
		(ortho.left + ortho.right) / (ortho.left - ortho.right),(ortho.top + ortho.bottom) / (ortho.bottom + ortho.top),0
	};
}

Matrix3x3 Math::MakeViewportMatrix(const Viewport<float>&viewport){
	return {
		viewport.wigth / 2.0f,0,0,
		0,-viewport.height / 2.0f,0,
		viewport.left + viewport.wigth / 2.0f,viewport.top + viewport.height / 2.0f,1.0f
	};
}

bool Math::IsCollision(const GameObject& obj1, const GameObject& obj2) {

	if(obj1.pos.x - obj1.radius <= obj2.pos.x + obj2.radius && obj2.pos.x - obj2.radius <= obj1.pos.x + obj1.radius &&
	   obj1.pos.y - obj1.radius <= obj2.pos.y + obj2.radius && obj2.pos.y - obj2.radius <= obj1.pos.y + obj1.radius){
	   return true;
	}

	return false;
}