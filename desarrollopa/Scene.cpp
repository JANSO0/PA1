#include "Scene.h"

void Scene :: AddGameObject(Solid* gameObjectsToAdd)
{
	this->gameObjects.push_back(gameObjectsToAdd);
}

void Scene :: Init()
{
	this->camera.SetPosition(Vector3D(0, 0, 7));
}

void Scene :: Render()
{
	this->camera.Render();
	for (int idx = 0; idx < this->gameObjects.size(); idx++) 
	{
		this->gameObjects[idx]->Render();
	}
}

void Scene :: Update()
{
	for (int idx = 0; idx < this->gameObjects.size(); idx++)
	{
		this->gameObjects[idx]->Update();
	}
}

void Scene ::ProcessKeyPressed(unsigned char key, int px, int py) {}

void Scene ::ProcessMouseClicked(int button, int state, int x, int y) {}

void Scene ::ProcessMouseMovement(int x, int y) {}

