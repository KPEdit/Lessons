#include <iostream>
#include <string>
#pragma once
using namespace std;

#ifndef EVENTS_H_
#define EVENTS_H_

class Events{
public:
	string get();
	/* returns event */
	void set();
	/* gets new events from the stream	*/
	void type();
private:
	string str;
};



#endif /* EVENTS_H_ */
