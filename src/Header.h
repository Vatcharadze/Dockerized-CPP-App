#pragma once
#include <iostream>

using namespace std;

class Minecraft {
private:
	string username;
	int health;
	int hungerbar;
	bool isOP;
	bool isINGAME;
public:
	Minecraft(string u="player12345",int h=10, int hb=10, bool isOP=false,bool isINGAME=false) {
		username = u;
		health = h;
		hungerbar = hb;
		this->isOP = isOP;
		this->isINGAME = isINGAME;
	}
	
	void setOPStatus(bool status) {
		isOP = status;
	}

	void SetUsername(string u) {
		username = u;
	}

	void JoinGame() {
		cout << username << " has joined the game." << endl;
		isINGAME = true;
	}

	void LeaveGame() {
		cout << username << " has left the game." << endl;
		isINGAME = false;
	}

	void Fight(string enemy="Zombie") {
		cout << username << " is fighting " << enemy << "!" << endl;
		if (isOP) {
			health = 10;
			hungerbar = 10;
			cout << "You Have OP Status, You Can't Be Damaged Or Hungry." << endl;
		}
		else {
			health -= 2;
			hungerbar -= 1;
			if (health < 0) health = 0;
			if (hungerbar < 0) hungerbar = 0;
		}
	}

	void Check_Health() {
		cout << username << "'s health: " << health << endl;
	}

	void Check_Hunger() {
		cout << username << "'s hunger bar: " << hungerbar << endl;
	}

	void Eat() {
		if (hungerbar < 10) {
			hungerbar++;
			cout << username << " has eaten food. Hunger bar is now " << hungerbar << "." << endl;
		}
		else {
			cout << username << "'s hunger bar is full." << endl;
		}
		Check_Hunger();
	}

	void Kill(string other) {
		cout << username << " Killed "<< other << endl;
	}

};
