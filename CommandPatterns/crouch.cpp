#include "Crouch.h"


Crouch::Crouch(void)
{
}


Crouch::~Crouch(void)
{
}

void Crouch::doCrouch(){
	std::cout<<"Player Crouched"<<std::endl;
}

void Crouch::excute(){
	doCrouch();
}