#pragma once
#include <SFML/Graphics.hpp>
#include "Entity.h"
#include "BoxCollision.h"

using namespace sf;

class Enemy: public Entity
{
private:
	BoxCollision* boxCollision;
	Vector2f m_DefaultPosition;

	float m_Gravity;
	float m_Speed1;
	float m_Speed2;

public:
	Enemy(float pointX, float pointY);
	Sprite getSprite();
	RectangleShape getBoxShape();
	bool isCollision(float pointX, float pointY);
	void update(float elapsedTime);
	void resetEnemy();
};