#include "View.h"

void World::Initialize(const Affine&affine) {

	
	affine_ = affine;

	worldMatrix_ = {};
}

void World::MakeWorldMatrix(const Affine&affine){
	worldMatrix_ = AffineMatrix(affine);
}

void Camera::Initialize(const Affine& affine) {
	affine_ = affine;

	cameraMatrix_ = {};

	ortho_ = {
		.left = -640.0f,
		.top = 360.0f,
		.right = 640.0f,
		.bottom = -360.0f
	};

	float kWindowWidth = 1280.0f;
	float kWindowHeight = 720.0f;

	viewport_ = {
		.left = 0,
		.top = 0,
		.wigth = kWindowWidth,
		.height = kWindowHeight
	};
}

void Camera::Create_CameraMatrix(const Affine &affine) {
	cameraMatrix_ = AffineMatrix(affine);
}

Matrix3x3 Camera::Create_OrthoGraphicMatrix() {
	Matrix3x3 orthoGraphic = OrthoGraphicMatrix(ortho_);

	return orthoGraphic;
}
