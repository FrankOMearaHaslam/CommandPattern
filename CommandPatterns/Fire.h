#pragma once
#include "Command.h"
class Fire : public Command
{
public:
	Fire(void);
	~Fire(void);
	virtual void excute();
	void doFire();
};

