#include"player.h"
Player::Player() {
	this->jersey=0;
	strcpy(this->name,"not_given");
	this->no_match=0;
	this->run=0;
	this->wicket=0;
}
Player::Player(int j,char* n,int nm,int r,int w) {
	this->jersey=j;
	strcpy(this->name,n);
	this->no_match=nm;
	this->run=r;
	this->wicket=w;
}
void Player::setJersey(int j) {
	this->jersey=j;
}
void Player::setName(char* n) {
	strcpy(this->name,n);
}
void Player::setNoOfMatch(int nm) {
	this->no_match=nm;
}
void Player::setRun(int r) {
	this->run=r;
}
void Player::setWicket(int w) {
	this->wicket=w;
}
int Player::getJersey() {
	return this->jersey;
}
char* Player::getName() {
	return this->name;
}
int Player::getNoOfMatch() {
	return this->no_match;
}
int Player::getRun() {
	return this->run;
}
int Player::getWicket() {
	return this->wicket;
}


