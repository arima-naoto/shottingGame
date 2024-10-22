#pragma once
#include "project/math/Math.h"

class World : public Math {
public:

	void Initialize(const Affine&affine);

	void MakeWorldMatrix(const Affine &affine);

private:

	Affine affine_;
	Matrix3x3 worldMatrix_;

};

class Camera : public Math {
public:
	void Initialize(const Affine& affine);
	void Create_CameraMatrix(const Affine& affine);
	Matrix3x3 Create_OrthoGraphicMatrix();
	Matrix3x3 Create_ViewportMatrix();

private:

	Affine affine_;

	Matrix3x3 cameraMatrix_;

	LeftAndSize<float> ortho_;
	Viewport<float> viewport_;
};