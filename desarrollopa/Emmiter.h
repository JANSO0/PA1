#pragma once
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



	void Render();
	void Update();
	Solid* Clone();

	Vector3D VectorAleatorio();
	Color ColorAleatorio();
};

