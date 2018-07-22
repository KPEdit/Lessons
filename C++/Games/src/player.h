#include <string>
#include <iostream>
#include <map>
using namespace std;
#pragma once
#ifndef PLAYER_H_
#define PLAYER_H_


class Player{
public:
	void lvl_up();
	void setName();
	void setHp();
	void setMp();
	void setDamage();
	void setArmor();
protected:
	int lvl = 1;
	float hp;
	int mp;
	float damage;
	float armor;
	std::string name;
};

class Archer : Player{
public:

private:

};


#endif /* PLAYER_H_ */
