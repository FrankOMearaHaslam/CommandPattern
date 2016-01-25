#pragma once
#include "Command.h"
class Lean : public Command
{
public:
	Lean(void);
	~Lean(void);
	virtual void excute();
	void doLean();
};

