#include "Game.h"
#include <iostream>

void Game::Init()
{
	cout << "[GAME] Init..." << endl;

	mainScene.Init();


	Emmiter* emisor = new Emmiter();


	this->mainScene.AddGameObject(emisor);


	Teapot* teapot1 = new Teapot();

		teapot1->SetPosition(Vector3D(1.0, 0.0, -3.0));
		teapot1->SetColor(Color(1.0, 0.0, 0.0, 1.0));
		teapot1->SetOrientationSpeed(Vector3D(0.03, 0.03, 0.03));
		teapot1->SetSpeed(Vector3D(0.003, 0.0, 0.001));

	this->mainScene.AddGameObject(teapot1);

	Cube* cube1 = new Cube();

		cube1->SetPosition(Vector3D(-1.0, 0.0, -3.0));
		cube1->SetColor(Color(0.8f, 0.7f, 0.6f, 0.4f));

	this->mainScene.AddGameObject(cube1);

	Sphere* sphere1 = new Sphere();

		sphere1->SetPosition(Vector3D(-1.0, 1.0, -3.0));
		sphere1->SetColor(Color(1.0f, 0.0f, 0.0f, 1.0f));
		sphere1->SetOrientationSpeed(Vector3D(0, 0.0, 0.0));
		sphere1->SetSpeed(Vector3D(0.003, 0.0, 0.001));

	this->mainScene.AddGameObject(sphere1);

	Torus* torus1 = new Torus();

		torus1->SetPosition(Vector3D(-1.0, -1.0, -3.0));
		torus1->SetColor(Color(0.4f, 0.4f, 0.9f, 0.8f));
		torus1->SetOrientationSpeed(Vector3D(0.0, 0.2, 0.0));

	this->mainScene.AddGameObject(torus1);

	Cylinder* cylinder1 = new Cylinder();

	cylinder1->SetPosition(Vector3D(1.0, -1.0, -3.0));
	cylinder1->SetOrientation(Vector3D(90.0, 0.0, 0.0));
	cylinder1->SetColor(Color(0.6f, 0.1f, 0.7f, 0.8f));

	this->mainScene.AddGameObject(cylinder1);

}

void Game::Render()
{
	this->mainScene.Render();
}

void Game::Update()
{
	this->mainScene.Update();
}

void Game::ProcessKeyPressed(unsigned char key, int px, int py)
{
	this->display1.ProcessKeyPressed(key, px, py);
}

void Game::ProcessMouseClicked(int button, int state, int x, int y)
{
	cout << "[GAME] Click:" << button << endl;
}

void Game::ProcessMouseMovement(int x, int y)
{
	cout << "[GAME] Movement:" << x << ", " << y << endl;
}
