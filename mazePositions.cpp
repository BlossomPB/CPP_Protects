/*
	Isaac Nevarez
	Add-on Source File
	for maze position definitions


    string pos1(string direction) {
    string nextPos;
    if (direction == "North") {
        nextPos = "pos2";
    }
    else if (direction == "East") {
        nextPos = "pos3";
    }
    else if (direction == "West") {
        nextPos = "pos4";
    }
    else {
        nextPos = "pos1";
    }
    return nextPos;
}


*/

#include <iostream>
#include <string>
#include "mazePostions.h"

using namespace std;

void introWords() {
    cout << "Welcome to the maze game";
    cout << "\nPlease enter you name: ";
}


// Var (easter egg condition)
bool foundCrystal;



string pos1(string direction) {
    string nextPos;
    if (direction == "North") {
        nextPos = "pos2";
    }
    else if (direction == "East") {
        nextPos = "pos3";
    }
    else if (direction == "West") {
        nextPos = "pos4";
    }
    else {
        nextPos = "pos1";
    }
    return nextPos;
}



string pos2(string direction) {
    string nextPos;
    if (direction == "East") {
        nextPos = "pos3";
    }
    else if (direction == "South") {
        nextPos = "pos1";
    }
    else if (direction == "West") {
        nextPos = "pos5";
    }
    return nextPos;
}

string pos3(string direction) {
    string nextPos;
    if (direction == "North") {
        nextPos = "pos2";
    }
    else if (direction == "South") {
        cout << "\nYou found a Secret Crystal!";
        foundCrystal = true;
        nextPos = "pos3";
    }
    else if (direction == "West") {
        nextPos = "pos1";
    }
    return nextPos;
}

string pos4(string direction) {
    string nextPos;
    if (direction == "North") {
        nextPos = "pos5";
    }
    else if (direction == "East") {
        nextPos = "pos1";
    }
    else if (direction == "South") {
        cout << "You reached a Dead End!";
        nextPos = "pos4";
    }
    else if (direction == "West") {
        cout << "You reached a Dead End!";
        nextPos = "pos4";
    }
    return nextPos;
}

string pos5(string direction) {
    string nextPos;
    if (direction == "East") {
        nextPos = "pos2";
    }
    else if (direction == "South") {
        nextPos = "pos4";
    }
    else if (direction == "West") {
        nextPos = "end";
    }
    return nextPos;
}
