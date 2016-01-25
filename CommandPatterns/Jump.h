#pragma once
#include "Command.h"
class Jump : public Command
{
public:
	Jump(void);
	~Jump(void);
	virtual void excute();
	void doJump();
};

