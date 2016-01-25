#include "InputHandler.h"


InputHandler::InputHandler(void)
{
	buttonA_ = new Fire();
	buttonB_ = new Jump();
	buttonX_ = new Crouch();
	buttonY_ = new Lean();
}


InputHandler::~InputHandler(void)
{
}

void InputHandler::handleInput(){
	char KeyStroke;
	KeyStroke =	_getch();

	if (KeyStroke == 0 || -32)
		{
			KeyStroke = _getch(); // Even though there are 2 getch() it reads one keystroke
			switch (KeyStroke)
			{
			case UP_ARROW:
				buttonA_->excute();
				break;
			case DOWN_ARROW:
				buttonB_->excute();
				break;
			case LEFT_ARROW:
				buttonX_->excute();
				break;
			case RIGHT_ARROW:
				buttonY_->excute();
				break;
			default:
				std::cout << "Some other key." << std::endl;
			}
		}
}
