#include "stdafx.h"
#include "Enemy.h"

Enemy::Enemy(float pointX, float pointY){
	m_Texture.loadFromFile("");
	m_Sprite.setTexture(m_Texture);
	m_Position.x = pointX;
	m_Position.y = pointY;
	m_DefaultPosition.x = pointX;
	m_DefaultPosition.y = pointY;
	m_Sprite.setPosition(m_Position);
	boxCollision = new BoxCollision(pointX,pointX+30,pointY,pointY+30);
	m_Speed1 = 7;
	m_Speed2 = 20;
	m_Gravity = 0.01;
}

Sprite Enemy::getSprite(){
	return m_Sprite;
}

RectangleShape Enemy::getBoxShape(){
	return rectangleShape;
}

bool Enemy::isCollision(float arrowX, float arrowY){
	return boxCollision->isCollision(arrowX,arrowY);
}

void Enemy::update(float elapsedTime){
	//
	//
	//....Update movements here.....
	//
	//
}

void Enemy::resetEnemy(){
	m_Position.x = m_DefaultPosition.x;
	m_Position.y = m_DefaultPosition.y;
	m_Sprite.setPosition(m_Position);
	m_Speed1 = 7;
	m_Speed2 = 20;
}