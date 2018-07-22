#include "Events.h"
#include "player.h"
#include <ostream>

int main(){
//	Engine
	Events *e = new Events;
	std::cout << "===============================\n"
			<< "Welcome to the console game #1!\n"
			<< "    I think You enjoy it :)\n"
			<< "==============================="
			<< endl;
	while (true){
		e->set();
	}
	delete e;
	return 0;
}
