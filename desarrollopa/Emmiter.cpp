#include "Emmiter.h"

void Emmiter::Update()
{
	milliseconds currentTime = duration_cast<milliseconds>(system_clock::now().time_since_epoch());

	int contador = 0;

	if (contador < configuracion.GetNumParticulas()) {

	if ((currentTime.count() - this->initialMilliseconds.count()) - this->lastUpdateTime > this->configuracion.GetPeriodo())
	{
		
			Solid* s = configuracion.GetParticula()->Clone();

			s->SetColor(ColorAleatorio());
			s->SetOrientation(VectorOAleatorio());
			s->SetPosition(VectorAleatorio());
			s->SetSpeed(VectorAleatorio());
			


			refparticulas.push_back(s);

			contador++;

			this->lastUpdateTime = currentTime.count() - this->initialMilliseconds.count();
		}
	}
	
}
void Emmiter::Render()
{
	//this->configuracion.Render();
	for (int idx = 0; idx < this->refparticulas.size(); idx++)
	{
		this->refparticulas[idx]->Render();
	}
}


Solid* Emmiter::Clone()
{
	return new Emmiter(*this);
}


Vector3D Emmiter::VectorAleatorio()
{
	
	//Generar un valor float aleatorio entre 0 y 1
	float randomX = (static_cast<float>(rand()) / RAND_MAX * 10.0f) - 5.0f;
	float randomY = (static_cast<float>(rand()) / RAND_MAX * 10.0f) - 5.0f;


	Vector3D r(randomX, randomY, 0);

	return r;

}

Vector3D Emmiter::VectorOAleatorio()
{

	//Generar un valor float aleatorio entre 0 y 1
	float randomX = (static_cast<float>(rand()) / RAND_MAX*100);
	float randomY = (static_cast<float>(rand()) / RAND_MAX *100);
	float randomZ = (static_cast<float>(rand()) / RAND_MAX*100) ;


	Vector3D O(randomX, randomY, randomZ);

	return O;

}
Vector3D Emmiter::VectorSAleatorio()
{

	//Generar un valor float aleatorio entre 0 y 1
	float randomX = (static_cast<float>(rand()) / (RAND_MAX*100));
	float randomY = (static_cast<float>(rand()) / (RAND_MAX * 100));
	float randomZ = (static_cast<float>(rand()) / (RAND_MAX * 100));


	Vector3D S(randomX, randomY, randomZ);

	return S;

}

Color Emmiter::ColorAleatorio()
{
	
	//Generar un valor float aleatorio entre 0 y 1
	float randomRed = (static_cast<float>(rand()) / RAND_MAX * 10.0f) - 5.0f;
	float randomGreen = (static_cast<float>(rand()) / RAND_MAX * 10.0f) - 5.0f;
	float randomBlue = (static_cast<float>(rand()) / RAND_MAX * 10.0f) - 5.0f;

	Color c(randomRed, randomGreen, randomBlue, 1);

	return c;

}