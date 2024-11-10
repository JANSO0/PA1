#pragma once
#include "Solid.h"
#include "Teapot.h"
#include "Sphere.h"
#include "Cube.h"


class EmmiterConfiguration 
{
private:
	int numparticulas;
	int periodo;
	Solid* particula;

public:
	EmmiterConfiguration() : numparticulas(2), periodo(100)
	{
		this->particula = new Cube();
	}

 

	inline int GetNumParticulas() { return this->numparticulas; }
	inline int GetPeriodo() { return this->periodo; }
	inline Solid* GetParticula() { return this->particula; }

	void SetNumParticulas(int numparticulasToSet) { this->numparticulas = numparticulasToSet; }
	void SetPeriodo(int periodoToSet) { this->periodo = periodoToSet; }
	void SetParticula(Solid* particulaToSet) { this->particula = particulaToSet; }

	
};

