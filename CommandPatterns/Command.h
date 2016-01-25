#pragma once
#include <iostream>

class Command
{
public:
	virtual ~Command(void);
	virtual void excute() = 0;

protected:
	Command(){};
};

