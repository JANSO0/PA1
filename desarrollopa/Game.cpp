#include "Game.h"
#include <iostream>

void Game::Init()
{
	cout << "[GAME] Init..." << endl;

	mainScene.Init();


	Emmiter* emisor = new Emmiter();


	this->mainScene.AddGameObject(emisor);


	Teapot* teapot1 = new Teapot();

		teapot1->SetPosition(Vector3D(1.0, 0.0, -300));
		teapot1->SetColor(Color(1.0, 0.0, 0.0, 1.0));
		teapot1->SetOrientationSpeed(Vector3D(0.1, 0.03, 1.03));
		teapot1->SetSpeed(Vector3D(0.003, 0.0, 0.5));

	this->mainScene.AddGameObject(teapot1);

	Cube* cube1 = new Cube();

		cube1->SetPosition(Vector3D(-20.0, 0.0, -100));
		cube1->SetColor(Color(0.0f, 0.7f, 9.3f, 0.4f));
		cube1->SetOrientationSpeed(Vector3D(0.1, 0.03, 1.03));
		cube1->SetSpeed(Vector3D(0.03, 0.0, 0.0));

	this->mainScene.AddGameObject(cube1);

	/*Cube* cube2 = new Cube();

	cube1->SetPosition(Vector3D(20.0, 0.0, -100));
	cube1->SetColor(Color(10.0f, 10.7f, 19.3f, 0.7f));
	cube1->SetOrientationSpeed(Vector3D(0.1, 0.03, 1.03));
	cube1->SetSpeed(Vector3D(0.03, 0.0, 0.0));
	cube1->SetSize(4);


	this->mainScene.AddGameObject(cube2);*/

	/*Sphere* sphere1 = new Sphere();

		sphere1->SetPosition(Vector3D(0.0, -50.0, -30));
		sphere1->SetColor(Color(100.0f, 60.f, 0.f, 0.8f));
		sphere1->SetOrientationSpeed(Vector3D(0.0, 0, 0));
		sphere1->SetSpeed(Vector3D(0, 0.0, 0.0));
		sphere1->SetRadius(40);

	this->mainScene.AddGameObject(sphere1);*/

	Torus* torus1 = new Torus();

	torus1->SetPosition(Vector3D(-20.0, 0.0, -100));
	torus1->SetColor(Color(1.0f, 1.7f, 1.3f, 1.0f));
	torus1->SetOrientationSpeed(Vector3D(2.1, .03, 0.0));
	torus1->SetSpeed(Vector3D(0.03, 0.0, 0.0));

	this->mainScene.AddGameObject(torus1);

	/*Cylinder* cylinder1 = new Cylinder();

	cylinder1->SetPosition(Vector3D(1.0, -1.0, -3.0));
	cylinder1->SetOrientation(Vector3D(90.0, 0.0, 0.0));
	cylinder1->SetColor(Color(0.6f, 0.1f, 0.7f, 0.8f));

	this->mainScene.AddGameObject(cylinder1);*/

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
