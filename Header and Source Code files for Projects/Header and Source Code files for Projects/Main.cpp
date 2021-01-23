/*
	Kaulana Lee
	1/22/2021
	Interactive Fiction
*/

// Preprocessor Directives
#include <iostream>
#include "DieSanta.h"

//Namespace Using Directives
using namespace std;

//Function Prototypes
int getInt(int presentNumber);
string getText(string question);
void DisplayIntro();


int main() {

	DisplayIntro(); // Call for Display Intro 
	
	cout << "It was a cold Christmas night and you were doing your best to stay up. ";
	cout << "You hear thumping on your roof. What do you do?" << endl;
	string firstChoice = getText("Choose. A: Go to bed. B: Stay up. C: Load shotgun. "); // Display options for player to pick 
	cout << "You picked option " << firstChoice << "." << endl;

	// This will lead you down the path of choosing to go to bed. 
	if (firstChoice == "A") {
		cout << "\nEven though you heard the thumping, you were just too tired too care." << endl;
		cout << "\n\t*** You went to bed! *** \n" << endl;
		int sleep; // Number of hours slept
		cout << "How long do you think you will sleep? (Enter an integer): ";
		cin >> sleep; // Divides number enterted in half
		int snoozed = getInt(sleep);
		cout << "\n\t\t ><--- SIKE! --->< \n" << endl; 
		cout << "You actually slept for " << snoozed << " hours and missed Santa altogether." << endl;
	}

	// This will lead you down the path of chossing to stay up.
	else if (firstChoice == "B") {
		cout << "\nThe thumping sound startled you enough to keep you awake." << endl;
		cout << "\n\t !><! You decided to stay up like a CHAMP !><! " << endl;
		cout << "\nNow you must wait and see what happens next." << endl;
		int wait;
		cout << "\nBUT how long can you stay awake for? (Enter an integer): ";
		cin >> wait;
		int bored = getInt(wait);
		cout << "\nAfter waiting for " << bored << " hours, you got bored. You fell asleep until January." << endl;
	}

	// This will lead you down the path of choosing the load your shotgun.
	else if (firstChoice == "C") {
		cout << "\nYou are unaware of what could be making the thumping sound. So you arm yourself in case its an intruder." << endl;
		cout << "Your shotgun is now locked and loaded." << endl;
		cout << "You tell yourself Momma didn't raise no pansy!" << endl;
		int shots;
		cout << "How many shots do you have? (Enter an integer): ";
		cin >> shots;
		int remaining = getInt(shots);

		DieSanta obj_bullet; // Create an object 
		obj_bullet.Shoot = "Pump or reload to shoot again!"; // Display text 
		cout << "\n You fired your shotgun. You have " << remaining << " bullets remaining." << endl;
		std::cout << "\n" << obj_bullet.Shoot << std::endl; // Move the name 1 line below what is displayed for ob_Ninja
		cout << "Reindeers are down but its not over until the fat man is dead." << endl;
	}

	return 0;
}

// Function Defintions
int getInt(int presentNumber) {
	int number = presentNumber / 2;
	return number;
}

// This will restrict the player from entering an invalid letter
string getText(string question) {
	string text;
	cout << "Enter the letter for the option you want." << endl;
	cout << question;
	cin >> text;
	while ((text != "A") && (text != "B") && (text != "C")) {
		cout << "Please make a valid entry of a single captial letter corresponding to an option available" << endl;
		cout << "Your choice?:  ";
		cin >> text;
	}
	return text;
}

void DisplayIntro()
{
	cout << "\n\t\t **** Welcome to a Christmas Story ****" << endl;
	cout << "\t ** This is an interactive fiction Christmas story. ** \n" << endl;
}
