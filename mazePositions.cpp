/*
    Isaac Nevarez
    Add-on Source File
    for maze position definitions

*/

#include <iostream>
#include <string>
#include "mazePositions.h"

using namespace std;

void introWords() {
    cout << "Welcome to the maze game";
    cout << "\nPlease enter you name: ";
}


enum class cardnalDirection {
        north,
        North,
        east,
        East,
        south,
        South,
        west,
        West
};


// Vars
bool foundCrystal;
bool directionValid;
string newStructVar;

string doPos1(string currPos, cardnalDirection dir) {
   // string loweredDirec = direction;
    ///cardnal calledDri; 
    
    switch (dir) {
    case cardnalDirection::East:

        break;
    
    default:
        break;
    }

    if (dir == cardnal::East)
        directionValid = true;
    }
    else {
        directionValid = false;
    }

    if (directionValid == true) {
        newStructVar = loweredDirec + "Pos";
        return currPos.newStructVar;
    }
}

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
