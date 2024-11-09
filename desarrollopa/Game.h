#pragma once
#include "Teapot.h"
#include "Cube.h"
#include "Sphere.h"
#include "Display.h"
#include "Torus.h"
#include "Cylinder.h"
#include "Scene.h"
#include "Solid.h"
#include "Emmiter.h"

using namespace std;

class Game
{
private:

	Emmiter emisor;
	Teapot teapot;
	Display display1;
	Cube cube1;
	Sphere sphere1;
	Torus torus1;
	Cylinder cylinder1;

	Scene mainScene;

public:

	Game() {}

	void Init();
	void Render();
	void Update();
	void ProcessKeyPressed(unsigned char key, int px, int py);
	void ProcessMouseMovement(int x, int y);
	void ProcessMouseClicked(int button, int state, int x, int y);
	
};

