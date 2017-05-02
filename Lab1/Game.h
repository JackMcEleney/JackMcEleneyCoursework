#pragma once
#include <SDL\SDL.h>
#include <GL/glew.h>
#include "Window.h" 
#include "GameShader.h"
#include "ObjectMeshes.h"
#include "ObjectTextures.h"
#include "Position.h"

enum class GameState{PLAY, EXIT};

class Game
{
public:
	Game();
	~Game();

	void run();

private:

	void initializeSystems();
	void processInput();
	void gameLoop();
	void drawGame();

	Window _gameWindow;
	GameState _gameState;
	Meshes meshes1;
	Meshes meshes2;
	Meshes meshes3;
	Cam myCam;

	float counter;


};

