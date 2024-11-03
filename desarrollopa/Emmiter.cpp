#include "Emmiter.h"

void Emmiter::Update()
{
	milliseconds currentTime = duration_cast<milliseconds>(system_clock::now().time_since_epoch());
	if ((currentTime.count() - this->initialMilliseconds.count()) - this->lastUpdateTime > this->configuracion.GetPeriodo())
	{

	}
	this->lastUpdateTime = currentTime.count() - this->initialMilliseconds.count();
}
void Emmiter::Render()
{
	this->configuracion.Render();
	for (int idx = 0; idx < this->refparticulas.size(); idx++)
	{
		this->refparticulas[idx]->Render();
	}
}