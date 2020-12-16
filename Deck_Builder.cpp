// Ryan Parry
// CIT-245
// Data Structure Tool
// Deck Builder/Assembler

// libraries being used
#include <string>
#include <vector>
#include <stdio.h>
#include <iostream>


using namespace std;

//vector declarations
vector<string> deckName;
vector<int> creatureAmount{};
vector<int> artifactAmount{};
vector<int> landAmount{};
vector<int> instantAmount{};
vector<int> sorceryAmount{};
vector<int> enchantmentAmount{};
vector<int> planeswalkerAmount{};

// asks the user what they want to name the deck and how many of what type of card they want
void nameAmount(){
	//string for user input
	string dName = "";

	//integers for user input
	int creatureNum = "";
	int artifactNum = "";
	int landNum = "";
	int instantNum = "";
	int sorceryNum = "";
	int enchantmentNum = "";
	int planeswalkerNum = "";

	//introduces program and begins collecting input
	cout << "\nWelcome to the Deck Builder! Let's build!" << '\n';

	//user input for deck name
	cout << "\nWhat would you like to name the deck?" << '\n';
		cin >> dName;

	//user input for number of monsters
	cout << "\nHow many monsters do you plan to put into your deck?" << '\n';
		cin >> creatureNum;

	//user input for number of artifacts
	cout << "\nHow many artifacts do you plan to put into your deck?" << '\n';
		cin >> artifactNum;

	//user input for number of lands
	cout << "\nHow many lands do you plan to put into your deck?" << '\n';
		cin >> landNum;

	//user input for number of instants
	cout << "\nHow many instants do you plan to put into your deck?" << '\n';
		cin >> instantNum;

	//user input for number of sorceries
	cout << "\nHow many sorceries do you plan to put into your deck?" << '\n';
		cin >> sorceryNum;

	//user input for number of enchantments
	cout << "\nHow many enchantments do you plan to put into your deck?" << '\n';
		cin >> enchantmentNum;

	//user input for number of planeswalkers
	cout << "\nHow many planeswalkers do you plan to put into your deck?" << '\n';
		cin >> planeswalkerNum;
}

void deckOutput(){

	//ready to output the user's input
	cout << "\n\nHere is how your deck is looking:" << '\n';
}
