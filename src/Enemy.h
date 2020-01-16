#pragma once
#ifndef __Game__
#define __Game__

class Enemy
{
public:
	Enemy();
	~Enemy();

	void draw() override;
	void update() override;
	void clean() override;
private:
	void m_move();
	void m_checkBounds();
};

#endif /* defined _ENEMY_ */
