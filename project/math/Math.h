#pragma once
#include "project/Math/Arithmetic.h"

/// <summary>
/// 数学クラス
/// </summary>
class Math
{
public://メンバ関数

	//加算
	static Vector2 Add(const Vector2& v1, const Vector2& v2);
	
	//減算
	static Vector2 Subtract(const Vector2& v1, const Vector2& v2);
	
	//乗算
	static Vector2 Multiply(float s, const Vector2& v2);
	
	//内積
	static float Dot(const Vector2& v1, const Vector2& v2);
	
	//ノルム
	static float Length(const Vector2& v);
	
	//加算
	static Matrix3x3 Add(const Matrix3x3& m1, const Matrix3x3& m2);
	
	//減算
	static Matrix3x3 Subtract(const Matrix3x3& m1, const Matrix3x3& m2);
	
	//乗算
	static Matrix3x3 Multiply(const Matrix3x3& m1, const Matrix3x3& m2);
	
	//拡大縮小行列
	static Matrix3x3 MakeScaleMatrix(const Vector2& scale);
	
	//回転行列
	static Matrix3x3 MakeRotateMatrix(float theta);
	
	//平行移動行列
	static Matrix3x3 MakeTranslateMatrix(const Vector2& translate);
	
	//アフィン行列
	static Matrix3x3 MakeAffineMatrix(const Affine&affine);
	
	//正射影行列
	static Matrix3x3 MakeOrthoGraphicMatrix(const LeftAndSize<float>& ortho);
	
	//ビューポート行列
	static Matrix3x3 MakeViewportMatrix(const Viewport<float>& viewport);
	
	//オブジェクト同士の衝突判定
	static bool IsCollision(const GameObject& obj1, const GameObject& obj2);
};

