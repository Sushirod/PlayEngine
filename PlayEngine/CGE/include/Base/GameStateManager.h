#pragma once
#include "../Export.h"
#include "GameState.h"
#include "PEPlatform.h"
#include <stack>

class GameState;

class PLAYENGINE GameStateManager
{
private:
	std::stack<GameState*> states;
	Platform* platform;
	GameStateManager();
	~GameStateManager();
	static GameStateManager* ptr;
public:
	static GameStateManager* GetPtr();
	void GameLoop();
	void SetState(GameState* state);
	void RealaseState();
};