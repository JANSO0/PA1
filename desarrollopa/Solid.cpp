#include "Solid.h"

void Solid::Update()
{
	/*this->orientation = this->orientation + this->orientationSpeed ;

	this->position = this->position + this->speed;*/

    // Actualizar la posici�n de la part�cula basada en su velocidad
    this->position.SetX(this->position.GetX() + this->speed.GetX());
    this->position.SetY(this->position.GetY() + this->speed.GetY());
    this->position.SetZ(this->position.GetZ() + this->speed.GetZ());

    // Tambi�n podemos actualizar la orientaci�n si es necesario (rotaci�n)
    this->orientation.SetX(this->orientation.GetX() + this->orientationSpeed.GetX());
    this->orientation.SetY(this->orientation.GetY() + this->orientationSpeed.GetY());
    this->orientation.SetZ(this->orientation.GetZ() + this->orientationSpeed.GetZ());

	//this->SetOrientation(this->GetOrientation() + this->GetOrientationSpeed());


}

