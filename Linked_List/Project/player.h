using namespace std;
#include<iostream>
#include<string.h>

class Player
{
	char name[20];
	int no_match,run,wicket,jersey;
	public:
		Player();
		Player(int,char*,int,int,int);
		void setJersey(int);
		void setName(char*);
		void setNoOfMatch(int);
		void setRun(int);
		void setWicket(int);
		int getJersey();
		char* getName();
		int getNoOfMatch();
		int getRun();
		int getWicket();
};

