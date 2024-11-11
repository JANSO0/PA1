#pragma once
#include "Solid.h"
#include "Teapot.h"
#include "Sphere.h"
#include "Cube.h"
#include "Torus.h"


class EmmiterConfiguration 
{
private:
	int numparticulas;
	int periodo;
	Solid* particula1;
	Solid* particula2;
	Solid* particula3;

public:
	EmmiterConfiguration() : numparticulas(3000), periodo(1)
	{
		this->particula1 = new Sphere();
		this->particula2 = new Teapot();
		this->particula3 = new Torus();
	}

 

	inline int GetNumParticulas() { return this->numparticulas; }
	inline int GetPeriodo() { return this->periodo; }
	inline Solid* GetParticula1() { return this->particula1; }
	inline Solid* GetParticula2() { return this->particula2; }
	inline Solid* GetParticula3() { return this->particula3; }

	void SetNumParticulas(int numparticulasToSet) { this->numparticulas = numparticulasToSet; }
	void SetPeriodo(int periodoToSet) { this->periodo = periodoToSet; }
	void SetParticula1(Solid* particula1ToSet) { this->particula1 = particula1ToSet; }
	void SetParticula2(Solid* particula2ToSet) { this->particula2 = particula2ToSet; }
	void SetParticula3(Solid* particula3ToSet) { this->particula3 = particula3ToSet; }

	
};

