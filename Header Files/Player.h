#pragma once
#include <SFML/Graphics.hpp>
#include "Entity.h"

using namespace sf;

class player: public Entity
{
	// All the private variables can only be accessed internally
private:
	bool m_LeftPressed;
	bool m_RightPressed;
	bool m_UpPressed;
	bool m_DownPressed;

	float m_Speed;

	// Public functions
public:
	player();
	player(float startX, float startY);
	Sprite getSprite();
	FloatRect getPosition();
	RectangleShape getShape();

	void moveLeft();
	void moveRight();
	void moveUp();
	void moveDown();
	void stopLeft();
	void stopRight();
	void stopUp();
	void stopDown();
		
	void update(float elapsedTime);

};

