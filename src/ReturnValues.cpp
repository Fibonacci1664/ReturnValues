/*
 * ReturnValues.cpp
 *
 *  Created on: 11 Jun 2019
 *      Author: Dave
 */

#include<iostream>

using namespace std;

void showMenu()
{
	cout << "1. Search" << endl;
	cout << "2. View Record" << endl;
	cout << "3. Quit" << endl;
}

int getInput()
{
	cout << "Please choose an option:> " << flush;

	int input;
	cin >> input;

	return input;
}

int main()
{
	showMenu();
	int choice = getInput();

	switch(choice)
		{
		case 1:
			cout << "Searching..." << endl;
			break;
		case 2:
			cout << "Viewing..." << endl;
			break;
		case 3:
			cout << "Quitting..." << endl;
			break;
		default:
			cout << "Oops, something went wrong!" << endl;
		}

	return 0;
}


