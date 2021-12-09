#pragma once
#include <iostream>
using namespace std;



void meadow() {
	cout << "Aaawww I see, you choose the route that would be peaceful?";



	bool setting_loop = true;
	char setting_decision;
	cout << "do you want to go North(N) or South(S)";
	cin >> setting_decision;
	if (setting_decision == 'N' || setting_decision == 'n') {
		cout << "North" << endl;
		setting_loop = false;
	}
	else if (setting_decision == 'S' || setting_decision == 's') {
		cout << "South" << endl;
		setting_loop = false;
	}
	else {
		cout << "Choose Either N or S" << endl;
		setting_loop = true;
	}
}