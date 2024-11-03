#pragma once
#include "Solid.h"

class EmmiterConfiguration : public Solid
{
private:
	int numparticulas;
	int periodo;
	Solid* particula;

public:
	EmmiterConfiguration():numparticulas(20), periodo(4), particula(), Solid() {}

	inline int GetNumParticulas() { return this->numparticulas; }
	inline int GetPeriodo() { return this->periodo; }

	void SetNumParticulas(int numparticulasToSet) { this->periodo = numparticulasToSet; }
	void SetPeriodo(int numparticulasToSet) { this->periodo = numparticulasToSet; }

	void Render();
	void Update();
	
};

