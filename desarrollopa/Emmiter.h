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
	Emmiter()
	{
		this->initialMilliseconds = duration_cast<milliseconds>(system_clock::now().time_since_epoch());
		this->lastUpdateTime = 0;
	}

	void Render();
	void Update();
};

