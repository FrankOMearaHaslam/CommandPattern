#pragma once

#include "Fire.h"
#include "Jump.h"
#include "crouch.h"
#include "Lean.h"
#include <conio.h>

#define UP_ARROW    72
#define LEFT_ARROW  75
#define DOWN_ARROW  80
#define RIGHT_ARROW 77

class InputHandler
{
public:
	InputHandler(void);
	~InputHandler(void);
	void handleInput();

private:
	Fire* buttonA_;
	Jump* buttonB_;
	Crouch* buttonX_;
	Lean* buttonY_;
};

