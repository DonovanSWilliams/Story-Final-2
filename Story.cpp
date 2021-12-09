/*Final
* Jed and Donovan
* 12/2/21
* TBD: plausible program for creating a short story
* using class or stuct system for determining the outcome of the story
*/

#include <iostream>
#include "Meadow.h"
using namespace std;



void setting() {
	char setting_decision;
	bool setting_loop = true;
	int m;
	cout << "Welcome To The Choose Your Own Adventure Game (Name TBD)!" << endl;
	cout << "What Kind Of Setting Would You Like" << endl;



	while (setting_loop) {
		cout << "Dungeon (D)" << endl;
		cout << "Meadow (M)" << endl;
		cout << "Alien space ship (A)" << endl;
		cout << "choose: ";



		cin >> setting_decision;
		if (setting_decision == 'D' || setting_decision == 'd') {
			cout << "Choosing Dungeon" << endl;
			setting_loop = false;
		}
		else if (setting_decision == 'M' || setting_decision == 'm') {
			cout << "Choosing Meadow" << endl;



			setting_loop = false;
		}
		else if (setting_decision == 'A' || setting_decision == 'a') {
			cout << "Choosing Alien Space-Ship" << endl;
			setting_loop = false;
		}
		else {
			cout << "Choose Either D, M, or A" << endl;
			setting_loop = true;
		}
	}
}





int main() {
	setting();
}