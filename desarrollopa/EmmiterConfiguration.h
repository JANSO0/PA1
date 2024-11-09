#pragma once
#include "Solid.h"

class EmmiterConfiguration 
{
private:
	int numparticulas;
	int periodo;
	Solid* particula;

public:
	EmmiterConfiguration(int numparticulas, int periodo, Solid* particula) :
		numparticulas(numparticulas), periodo(periodo), particula(particula) {}

	inline int GetNumParticulas() { return this->numparticulas; }
	inline int GetPeriodo() { return this->periodo; }
	inline Solid* GetParticula() { return this->particula; }

	void SetNumParticulas(int numparticulasToSet) { this->periodo = numparticulasToSet; }
	void SetPeriodo(int numparticulasToSet) { this->periodo = numparticulasToSet; }
	void SetParticula(Solid* particulaToSet) { this->particula = particulaToSet; }

	void Render();
	
};

