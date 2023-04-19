/*
    Isaac Nevarez
    Add-on Source File
    for maze position definitions

*/

#include <iostream>
#include <string>
#include "mazePositions.h"

using namespace std;

// Vars
bool foundCrystal;
int dirNum;

void introWords() {
    cout << "Welcome to the maze game";
    cout << "\nPlease enter you name: ";
}


void randSpace(int* randSpace) {
    int temp;
    int num = rand();
    temp = (num % 100) + 1;
    cout << "  " << temp << "  ";
    if ( temp <= 3 ) {          // Crystal Chance (3%)
        *randSpace = 5;
    }
    else if ( temp < 56 ) { // Free Space Chance (51%)
        *randSpace = 0;
    }
    else if ( temp >= 56 ) {    // Wall Change (46%)
        *randSpace = 1;
    }
}

void startMaze(int* currPosptr, string* directionPtr,bool* dirValPtr) {
    validateDirection(directionPtr, dirValPtr);
    if (*dirValPtr == true) {
        
    } else {
        cout << "An Error Occured";
    }
}

void validateDirection(string* directionPtr, bool* dirValPtr) {
    if (*directionPtr == "north" || *directionPtr == "North") {
        dirNum = 1;
    } else if (*directionPtr == "east" || *directionPtr == "East") {
        dirNum = 2;
    } else if (*directionPtr == "south" || *directionPtr == "South") {
        dirNum = 3;
    } else if (*directionPtr == "west" || *directionPtr == "West") {
        dirNum = 4;
    } else {
        dirNum = 5;
    }
    switch (dirNum) {
    case 1:
        *dirValPtr = true;
        break;
    case 2:
        *dirValPtr = true;
        break;
    case 3:
        *dirValPtr = true;
        break;
    case 4:
        *dirValPtr = true;
        break;
    default:
        *dirValPtr = false;
        break;
    }
}
