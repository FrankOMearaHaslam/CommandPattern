#include "InputHandler.h"

void main(){
	InputHandler* itr = new InputHandler();

	std::cout<<"Press any of the arrow keys"<<std::endl;

	while(true){
		itr->handleInput();
	}
}