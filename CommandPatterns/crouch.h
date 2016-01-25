#pragma once
#include "Command.h"
class Crouch : public Command
{
public:
	Crouch(void);
	~Crouch(void);
	virtual void excute();
	void doCrouch();
};

