#ifndef PLAYER_H
#define PLAYER_H

#include "Input.h"
#include "PlayerFSM.h"

class Player
{
public:
	Player();
	~Player();

	PlayerFSM m_state;
	//AnimatedSprite m_animated_sprite;
	void handleInput(Input);
	void update();
};

#endif // !PLAYER_H