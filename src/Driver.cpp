#include "Header.h"
#include <iostream>
#include <iomanip>
using namespace std;


int main() {

	Minecraft player1;
	
	cout <<"*** Welocome To Minecraft Terminal ***" << endl;

	
	cout << "Enter Username : "<<flush;
	string uname;
	cin >> uname;
	player1.SetUsername(uname);
	
	cout << "Do You Want OP Status "<< uname <<  " (1 for Yes / 0 for No) : "<<flush;
	int num;
	cin >> num;
	if (num == 1) {
		
		cout << "You Have Been Given OP Status!" << endl;
		player1.setOPStatus(true);
	}
	else {
		
		cout << "You Are A Regular Player." << endl;
		player1.setOPStatus(false);
	}
	
	cout << "Do You Want To Join The Game? (1 for Yes / 0 for No) : " << endl;
	int numb;
	cin >> numb;
		if (numb == 1) {
			player1.JoinGame();
while(true){
	
			cout << endl;
			cout << "*** Available Commands ***" << endl;
			cout << "1. Fight                 |" << endl;
			cout << "2. Check Health          |" << endl;
			cout << "3. Check Hunger          |" << endl;
			cout << "4. Eat                   |" << endl;
			cout << "5. Leave Game            |" << endl;
			cout << "*  *  *  *  *  *  *  *  *" << endl;
			cout << "Enter Command Number: "<<flush;
			

			int cmd;
			
			cin >> cmd;
			if (cmd == 5) { 
				cout << "Exiting The Game. Goodbye!" << endl;
				break; 
			}
			switch (cmd)
			{
			case 1:
				player1.Fight();
				break;
			case 2:
				player1.Check_Health();
				break;
			case 3:
				player1.Check_Hunger();
				break;
			case 4:
				player1.Eat();
				break;
			case 5:
				player1.LeaveGame();
				break;
			}
			
		}
	}
	else {
		cout << "Exiting The Game. Goodbye!" << endl;

	}

}
