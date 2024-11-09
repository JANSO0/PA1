#include "Emmiter.h"

void Emmiter::Update()
{
	milliseconds currentTime = duration_cast<milliseconds>(system_clock::now().time_since_epoch());
	if ((currentTime.count() - this->initialMilliseconds.count()) - this->lastUpdateTime > this->configuracion.GetPeriodo())
	{
		Solid* s = configuracion.GetParticula()->Clone();
		
		s->SetColor(ColorAleatorio());
		s->SetOrientation(VectorAleatorio());
		s->SetPosition(VectorAleatorio());
		s->SetOrientationSpeed(VectorAleatorio());
		s->SetSpeed(VectorAleatorio());
		

		refparticulas.push_back(s);

		this->lastUpdateTime = currentTime.count() - this->initialMilliseconds.count();
	}

}
void Emmiter::Render()
{
	this->configuracion.Render();
	for (int idx = 0; idx < this->refparticulas.size(); idx++)
	{
		this->refparticulas[idx]->Render();
	}
}

Vector3D Emmiter::VectorAleatorio()
{
	
	//Generar un valor float aleatorio entre 0 y 1
	float randomX = static_cast<float>(rand()) / RAND_MAX;
	float randomY = static_cast<float>(rand()) / RAND_MAX;


	Vector3D r(randomX, randomY, 0);

	return r;

}

Color Emmiter::ColorAleatorio()
{
	
	//Generar un valor float aleatorio entre 0 y 1
	float randomRed = static_cast<float>(rand()) / RAND_MAX;
	float randomGreen = static_cast<float>(rand()) / RAND_MAX;
	float randomBlue = static_cast<float>(rand()) / RAND_MAX;

	Color c(randomRed, randomGreen, randomBlue, 1);

	return c;

}