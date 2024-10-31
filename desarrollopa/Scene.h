#pragma once
#include <vector>
#include "Solid.h"
#include "Camera.h"
using namespace std;

class Scene : public Solid
{
private:
	vector<Solid*> gameObjects;
	Camera camera;
	

public:
	Scene(){}

	 void AddGameObject(Solid* gameObjectsToAdd);
	
	 void Init();
	 void Render();
	 void Update();
	 void ProcessKeyPressed(unsigned char key, int px, int py);
	 void ProcessMouseClicked(int button, int state, int x, int y);
	 void ProcessMouseMovement(int x, int y);

};

