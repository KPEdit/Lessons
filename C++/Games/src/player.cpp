#include <iostream>
#include "player.h"

void Player::lvl_up(){
	Player::lvl++;
}
void Player::setArmor(){
	cin >> Player::armor;
}
void Player::setDamage(){
	cin >> Player::damage;
}
void Player::setHp(){
	cin >> Player::hp;
}
void Player::setMp(){
	cin >> Player::mp;
}
void Player::setName(){
	getline(cin, Player::name);
}
