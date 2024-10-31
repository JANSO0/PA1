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
	EmmiterConfiguration emisor;

	//TIEMPO//
	milliseconds initialMilliseconds;
	long lastUpdateTime;

public:
	Emmiter(){}

	void Render();
	void Update();
};

