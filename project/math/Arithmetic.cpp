#include "Arithmetic.h"

Vector2 operator+(const Vector2& v1, const Vector2& v2) {
	Vector2 result;
	result.x = v1.x + v2.x;
	result.y = v1.y + v2.y;
	return result;
}

Vector2 operator-(const Vector2& v1, const Vector2& v2) {
	Vector2 result;
	result.x = v1.x - v2.x;
	result.y = v1.y - v2.y;
	return result;
}

Vector2 operator*(float_t s, const Vector2& v) {
	Vector2 result;
	result.x = s * v.x;
	result.y = s * v.y;
	return result;
}

Vector2 operator*(const Vector2& v, float_t s) {
	return s * v;
}

Vector2 operator/(float_t s, const Vector2& v) {
	return (1.f / s) * v;
}

Matrix3x3 operator+(const Matrix3x3& m1, const Matrix3x3& m2) {
	Matrix3x3 result{};
	for (int32_t i = 0; i < 3; i++) {
		for (int32_t j = 0; j < 3; j++) {
			result.m[i][j] = m1.m[i][j] + m2.m[i][j];
		}
	}
	return result;
};

Matrix3x3 operator-(const Matrix3x3& m1, const Matrix3x3& m2) {
	Matrix3x3 result{};
	for (int32_t i = 0; i < 3; i++) {
		for (int32_t j = 0; j < 3; j++) {
			result.m[i][j] = m1.m[i][j] - m2.m[i][j];
		}
	}
	return result;
}

Matrix3x3 operator*(const Matrix3x3& m1, const Matrix3x3& m2) {
	Matrix3x3 result;
	for (int32_t i = 0; i < 3; i++) {
		for (int32_t j = 0; j < 3; j++) {
			result.m[i][j] = 0;
			for (int32_t k = 0; k < 3; k++) {
				result.m[i][j] += m1.m[i][k] * m2.m[k][i];
			}
		}
	}
	return result;
}

Matrix3x3 operator~(const Matrix3x3& matrix){
	float inverseA = (matrix.m[0][0] * matrix.m[1][1] * matrix.m[2][2]) + (matrix.m[0][1] * matrix.m[1][2] * matrix.m[2][0]) +
		(matrix.m[0][2] * matrix.m[1][0] * matrix.m[2][1]) - (matrix.m[0][2] * matrix.m[1][1] * matrix.m[2][0]) -
		(matrix.m[0][1] * matrix.m[1][0] * matrix.m[2][2]) - (matrix.m[0][0] * matrix.m[1][2] * matrix.m[2][1]);

	Matrix3x3 result;
	result.m[0][0] = (matrix.m[1][1] * matrix.m[2][2] - matrix.m[1][2] * matrix.m[2][1]);
	result.m[0][1] = -(matrix.m[0][1] * matrix.m[2][2] - matrix.m[0][2] * matrix.m[2][1]);
	result.m[0][2] = (matrix.m[0][1] * matrix.m[1][2] - matrix.m[0][2] * matrix.m[1][1]);

	result.m[1][0] = -(matrix.m[1][0] * matrix.m[2][2] - matrix.m[1][2] * matrix.m[0][2]);
	result.m[1][1] = (matrix.m[0][0] * matrix.m[2][2] - matrix.m[0][2] * matrix.m[2][0]);
	result.m[1][2] = -(matrix.m[0][0] * matrix.m[1][2] - matrix.m[0][2] * matrix.m[1][0]);

	result.m[2][0] = (matrix.m[1][0] * matrix.m[2][1] - matrix.m[1][1] * matrix.m[2][0]);
	result.m[2][1] = -(matrix.m[0][0] * matrix.m[2][1] - matrix.m[0][1] * matrix.m[2][0]);
	result.m[2][2] = (matrix.m[0][0] * matrix.m[1][1] - matrix.m[0][1] * matrix.m[1][0]);

	Matrix3x3 ResultInverse;

	ResultInverse.m[0][0] = result.m[0][0] / inverseA;
	ResultInverse.m[0][1] = result.m[0][1] / inverseA;
	ResultInverse.m[0][2] = result.m[0][2] / inverseA;

	ResultInverse.m[1][0] = result.m[1][0] / inverseA;
	ResultInverse.m[1][1] = result.m[1][1] / inverseA;
	ResultInverse.m[1][2] = result.m[1][2] / inverseA;

	ResultInverse.m[2][0] = result.m[2][0] / inverseA;
	ResultInverse.m[2][1] = result.m[2][1] / inverseA;
	ResultInverse.m[2][2] = result.m[2][2] / inverseA;

	return ResultInverse;
}

Vector2 operator+=(Vector2& v1, const Vector2& v2) {
	v1.x += v2.x;
	v1.y += v2.y;
	return v1;
}

Vector2 operator-=(Vector2& v1, const Vector2& v2) {
	v1.x -= v2.x;
	v1.y -= v2.y;
	return v1;
}