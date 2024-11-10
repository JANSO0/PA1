#pragma once
#include <iostream>
#include <vector>
#include <chrono>
#include "Solid.h"
#include "EmmiterConfiguration.h"



using namespace std;
using namespace std::chrono;

class Emmiter : public Solid 
{
private:
	vector<Solid*> refparticulas;
	EmmiterConfiguration configuracion;
	
	int contador = 0;

	//TIEMPO//
	milliseconds initialMilliseconds;
	long lastUpdateTime;
	
	
public:
	Emmiter(EmmiterConfiguration conf) :configuracion(conf)
	{
		srand(static_cast<unsigned int>(std::time(nullptr)));
		this->initialMilliseconds = duration_cast<milliseconds>(system_clock::now().time_since_epoch());
		this->lastUpdateTime = 0;
	}

	// Constructor predeterminado sin configuración
	Emmiter() : configuracion() {
		srand(static_cast<unsigned int>(std::time(nullptr)));
		this->initialMilliseconds = duration_cast<milliseconds>(system_clock::now().time_since_epoch());
		this->lastUpdateTime = 0;
	}  // Esto llamará al constructor predeterminado de EmmiterConfiguration


	inline vector<Solid*> GetRefparticulas() { return this->refparticulas; }

	void Render();
	void Update();
	Solid* Clone();

	Vector3D VectorAleatorio();
	Vector3D VectorSAleatorio();
	Vector3D VectorOAleatorio();
	Vector3D VectorOSAleatorio();

	Color ColorAleatorio();
};

