#pragma once
#include "project/Math/Arithmetic.h"

/// <summary>
/// ���w�N���X
/// </summary>
class Math
{
public://�����o�֐�

	//���Z
	static Vector2 Add(const Vector2& v1, const Vector2& v2);
	
	//���Z
	static Vector2 Subtract(const Vector2& v1, const Vector2& v2);
	
	//��Z
	static Vector2 Multiply(float s, const Vector2& v2);
	
	//����
	static float Dot(const Vector2& v1, const Vector2& v2);
	
	//�m����
	static float Length(const Vector2& v);
	
	//���Z
	static Matrix3x3 Add(const Matrix3x3& m1, const Matrix3x3& m2);
	
	//���Z
	static Matrix3x3 Subtract(const Matrix3x3& m1, const Matrix3x3& m2);
	
	//��Z
	static Matrix3x3 Multiply(const Matrix3x3& m1, const Matrix3x3& m2);
	
	//�g��k���s��
	static Matrix3x3 MakeScaleMatrix(const Vector2& scale);
	
	//��]�s��
	static Matrix3x3 MakeRotateMatrix(float theta);
	
	//���s�ړ��s��
	static Matrix3x3 MakeTranslateMatrix(const Vector2& translate);
	
	//�A�t�B���s��
	static Matrix3x3 MakeAffineMatrix(const Affine&affine);
	
	//���ˉe�s��
	static Matrix3x3 MakeOrthoGraphicMatrix(const LeftAndSize<float>& ortho);
	
	//�r���[�|�[�g�s��
	static Matrix3x3 MakeViewportMatrix(const Viewport<float>& viewport);
	
	//�I�u�W�F�N�g���m�̏Փ˔���
	static bool IsCollision(const GameObject& obj1, const GameObject& obj2);
};

