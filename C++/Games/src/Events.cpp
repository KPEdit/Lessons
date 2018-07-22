#include "Events.h"

	string Events::get(){
		return str;
	}

	void Events::set(){
		getline(cin,Events::str);
		Events::type();
	}

	void Events::type(){
		if (Events::str == "exit")
			exit(0);
		else{
			cout << "Unresolved command. Try other." << endl;
			Events::set();

		}
	}



