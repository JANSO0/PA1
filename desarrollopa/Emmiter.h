#pragma once
#include <vector>
#include "Solid.h"
#include "EmmiterConfiguration.h"
using namespace std;

class Emmiter : public Solid
{
private:
	vector<Solid*> refparticulas;
public:


	void Render();
	void Update();
};

