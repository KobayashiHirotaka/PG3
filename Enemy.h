#pragma once
#include <stdio.h>
#include <stdlib.h>

class Enemy 
{
public:
	
	enum class Phase 
	{
		kMeleeAttack,
		kShootingAttack,
		kLeave,
	};

	void Update();

	void MeleeAttack();

	void ShootingAttack();

	void Leave();

private:
	static void (Enemy::* spFuncTable[])();

	Phase phase_ = Phase::kMeleeAttack;
};
