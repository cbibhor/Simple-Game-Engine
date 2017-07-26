#pragma once
#include <SFML/Graphics.hpp>
#include "player.h"
#include "Enemy.h"
#include "Sound.h"

using namespace sf;

class Engine
{
private:
	
	RenderWindow m_Window;
	int windowWidth;
	int windowHeight;
	int timeDelay;
	
	Sprite m_BackgroundSprite;
	Texture m_BackgroundTexture;
	
	player* m_Player;
	Enemy* m_Enemy;
	SoundClass* m_Sound;

	bool isCollision;
	sf::Text message;
	
	void input();
	void update(float dtAsSeconds);
	void draw();
	
public:
	// The Engine constructor
	Engine();

	// start will call all the private functions
	void start();

};
