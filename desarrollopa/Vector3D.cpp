#include "Vector3D.h"

Vector3D Vector3D::Add(Vector3D& other)
{
	return Vector3D(
		this->GetX() + other.GetX(),
		this->GetY() + other.GetY(),
		this->GetZ() + other.GetZ());
}

Vector3D Vector3D::operator+(Vector3D& other)
{
	return this->Add(other);
}