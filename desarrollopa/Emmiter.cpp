#include "Emmiter.h"



void Emmiter::Update()
{
	milliseconds currentTime = duration_cast<milliseconds>(system_clock::now().time_since_epoch());


	if ((currentTime.count() - this->initialMilliseconds.count()) - this->lastUpdateTime > this->configuracion.GetPeriodo() && contador < configuracion.GetNumParticulas())
	{
		
			Solid* s = configuracion.GetParticula1()->Clone();
			Solid* w = configuracion.GetParticula2()->Clone();

			s->SetColor(ColorAleatorio());
			s->SetOrientation(VectorOAleatorio());
			s->SetPosition(VectorAleatorio());
			s->SetSpeed(VectorOSAleatorio());
			s->SetOrientationSpeed(VectorOSAleatorio());
			
			w->SetColor(ColorAleatorio());
			w->SetOrientation(VectorOSAleatorio());
			w->SetPosition(VectorAleatorio());
			w->SetSpeed(VectorOSAleatorio());
			w->SetOrientationSpeed(VectorOSAleatorio());


			refparticulas.push_back(s);
			refparticulas.push_back(w);

			contador++;

			this->lastUpdateTime = currentTime.count() - this->initialMilliseconds.count();
		}
	// Actualizar las partículas ya generadas
	for (auto& part : refparticulas)
	{
		part->Update();  // Sin pasar deltaTime, ya que no lo estás usando
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
	

	float randomX = (static_cast<float>(rand()) / RAND_MAX * 10.0f) - 5.0f;
	float randomY = (static_cast<float>(rand()) / RAND_MAX * 10.0f) - 5.0f;


	Vector3D r(randomX, randomY, 0);

	return r;

}

Vector3D Emmiter::VectorOAleatorio()
{


	float randomX = (static_cast<float>(rand()) / RAND_MAX*100);
	float randomY = (static_cast<float>(rand()) / RAND_MAX *100);
	float randomZ = (static_cast<float>(rand()) / RAND_MAX*100) ;


	Vector3D O(randomX, randomY, randomZ);

	return O;

}

Vector3D Emmiter::VectorSAleatorio()
{

	//Generar un valor float aleatorio entre 0 y 1
	float randomX = (static_cast<float>(rand()) / (RAND_MAX * 1000));
	float randomY = (static_cast<float>(rand()) / (RAND_MAX * 1000));
	float randomZ = (static_cast<float>(rand()) / (RAND_MAX * 1000));


	Vector3D S(randomX, randomY, randomZ);

	return S;

}

Vector3D Emmiter::VectorOSAleatorio()
{

	//Generar un valor float aleatorio entre 0 y 1
	float randomX = (static_cast<float>(rand()) / (RAND_MAX * 10));
	float randomY = (static_cast<float>(rand()) / (RAND_MAX * 10));
	float randomZ = (static_cast<float>(rand()) / (RAND_MAX * 10));


	Vector3D os(randomX, randomY, randomZ);

	return os;

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