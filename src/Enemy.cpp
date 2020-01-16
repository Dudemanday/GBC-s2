
#include "Enemy.h"
#include "Game.h"
#include "TextureManager.h"

Enemy::Enemy()
{
	TheTextureManager::Instance()->load("../Assets/textures/island.png",
		"island", TheGame::Instance()->getRenderer());

	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("island");
	setWidth(size.x);
	setHeight(size.y);
	setVelocity(glm::vec2(0, 5));
	_reset();
	setIsColliding(false);
	setType(GameObjectType::ISLAND);
}

Enemy::~Enemy()
{
}

void Enemy::draw()
{
}

void Enemy::update()
{
}

void Enemy::clean()
{
}

void Enemy::m_move()
{
}

void Enemy::m_checkBounds()
{
}
