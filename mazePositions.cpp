/*
    Isaac Nevarez
    Add-on Source File
    for maze position definitions

*/

#include <iostream>
#include <string>
#include <vector>
#include "mazePositions.h"

using namespace std;


/*
    Maze Number Array Legend:
    0 = Free Space
    1 = Wall
    2 = Start Point
    3 = End Position
    4 = Intersection
    5 = Crystal


    Default mazeSize x mazeSize Multi Array:

    NULL
*/

// Default Maze Starting
int mazePositions[25][25] = {
    { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }
};


// Vars
bool foundCrystal;
int coveredZeros = 0;
int aroundZeros = 0;
int dirNum;
int mazeSize = 25;
vector<int> rowInts;
vector<int> colInts;



int pathNum = 8;
int pathEndNum = 9;

// Pointer Vars
bool directionValid;
bool* dirValPtr = &directionValid;

int startPlayablePos = 0;
int* startPlayablePosPtr = &startPlayablePos;

int endPlayablePos = 0;
int* endPlayablePosPtr = &endPlayablePos;

int wieghtRand;
int* wieghtRandPtr = &wieghtRand;

int randSpaceVar;
int* randSpacePtr = &randSpaceVar;

int oneOrZero;
int* oneOrZeroPtr = &oneOrZero; // Just a decider between two things

int oneToFour;
int* oneToFourPtr = &oneToFour; // If 1 (Makes 2 Sides) || 2 (Goes left) || 3 (Goes Down) || 4 (Goes right)

int oneToThree;
int* oneToThreePtr = &oneToThree; // Sets up for maze to (stay the same/go down one/go up 1-4)


void introWords() {
    std::cout << "Welcome to the maze game";
    std::cout << "\nPlease enter you name: ";
}

void printMaze() {
    for (int r = 0; r < mazeSize; r++) {
        for (int c = 0; c < mazeSize; c++) {
            std::cout << mazePositions[r][c] << " ";
        }
        std::cout << "\n";
    }
}




//\\// maze generation functions //\\//

// First layer maker functions
void createFirstLayer() {
    for (int c = 0; c < mazeSize; c++) {
        randSpace();
        mazePositions[0][c] = wieghtRand;
    }
}
void organizeFirstLayer() {
    for (int c = 0; c < mazeSize; c++) {
        if (mazePositions[0][c] == pathNum) {
            mazePositions[0][c + 1] = 1;
        }
    }
}

// RNG for Maze Maker functions
void randSpace() {

    int temp;
    int num = rand();
    temp = (num % 100) + 1;

    if (temp < 80) { // Free Space Chance of 100
        wieghtRand = pathNum;
    }
    else if (temp >= 80) {    // Wall Chance of 100
        wieghtRand = 1;
    }
}
void randNumOfRow() {
    int temp;
    int num = rand();
    temp = (num % mazeSize) - 1;
    randSpaceVar = temp;
}
void oneOrZeroFunc() {
    int temp;
    int num = rand();
    temp = (num % 2);
    oneOrZero = temp;
}
void oneToThreeFunc() {
    int temp;
    int num = rand();
    temp = (num % 3) + 1;
    oneToThree = temp;
}
void oneToFourFunc() {
    int temp;
    int num = rand();
    temp = (num % 4) + 1;
    oneToFour = temp;
}

// Maze Maker function helpers
void makeCorner(int r, int c) {
    oneOrZeroFunc();
    if (oneOrZero == 0) {  // Makes corner Left/Down
        mazePositions[r][c] = pathNum;
        mazePositions[r][c + 1] = pathNum;
        mazePositions[r][c + 2] = pathNum;
        mazePositions[r][c + 3] = pathNum;
        mazePositions[r][c + 4] = pathNum;
        mazePositions[r][c + 5] = pathNum;
        mazePositions[r + 1][c] = pathNum;
        mazePositions[r + 2][c] = pathNum;
        mazePositions[r + 3][c] = pathNum;
        mazePositions[r + 4][c] = pathNum;
        mazePositions[r + 5][c] = pathNum;
    }
    else if (oneOrZero == 1) { // Makes corner Right/Down
        mazePositions[r][c] = pathNum;
        mazePositions[r][c - 1] = pathNum;
        mazePositions[r][c - 2] = pathNum;
        mazePositions[r][c - 3] = pathNum;
        mazePositions[r][c - 4] = pathNum;
        mazePositions[r][c - 5] = pathNum;
        mazePositions[r + 1][c] = pathNum;
        mazePositions[r + 2][c] = pathNum;
        mazePositions[r + 3][c] = pathNum;
        mazePositions[r + 4][c] = pathNum;
        mazePositions[r + 5][c] = pathNum;
    }
}
void makeLeft(int r, int c) {
    oneToThreeFunc();
    if (oneToThree == 1) { // Goes left 4
        mazePositions[r][c] = pathNum;
        mazePositions[r][c + 1] = pathNum;
        mazePositions[r][c + 2] = pathNum;
        mazePositions[r][c + 3] = pathNum;
        mazePositions[r][c + 4] = pathNum;
    }
    else if (oneToThree == 2) { // Goes left 5
        mazePositions[r][c] = pathNum;
        mazePositions[r][c + 1] = pathNum;
        mazePositions[r][c + 2] = pathNum;
        mazePositions[r][c + 3] = pathNum;
        mazePositions[r][c + 4] = pathNum;
        mazePositions[r][c + 5] = pathNum;
    }
    else if (oneToThree == 3) { // Goes left 6
        mazePositions[r][c] = pathNum;
        mazePositions[r][c + 1] = pathNum;
        mazePositions[r][c + 2] = pathNum;
        mazePositions[r][c + 3] = pathNum;
        mazePositions[r][c + 4] = pathNum;
        mazePositions[r][c + 5] = pathNum;
        mazePositions[r][c + 6] = pathNum;
    }
}
void makeRight(int r, int c) {
    oneToThreeFunc();
    if (oneToThree == 1) { // Goes Right 4
        mazePositions[r][c] = pathNum;
        mazePositions[r][c - 1] = pathNum;
        mazePositions[r][c - 2] = pathNum;
        mazePositions[r][c - 3] = pathNum;
        mazePositions[r][c - 4] = pathNum;
    }
    else if (oneToThree == 2) { // Goes Right 5
        mazePositions[r][c] = pathNum;
        mazePositions[r][c - 1] = pathNum;
        mazePositions[r][c - 2] = pathNum;
        mazePositions[r][c - 3] = pathNum;
        mazePositions[r][c - 4] = pathNum;
        mazePositions[r][c - 5] = pathNum;
    }
    else if (oneToThree == 3) { // Goes Right 6
        mazePositions[r][c] = pathNum;
        mazePositions[r][c - 1] = pathNum;
        mazePositions[r][c - 2] = pathNum;
        mazePositions[r][c - 3] = pathNum;
        mazePositions[r][c - 4] = pathNum;
        mazePositions[r][c - 5] = pathNum;
        mazePositions[r][c - 6] = pathNum;
    }
}
void makeDown(int r, int c) {
    oneToThreeFunc();
    if (oneToThree == 1) { // Goes Right 2
        mazePositions[r][c] = pathNum;
        mazePositions[r + 1][c] = pathNum;
        mazePositions[r + 2][c] = pathNum;
    }
    else if (oneToThree == 2) { // Goes Right 3
        mazePositions[r][c] = pathNum;
        mazePositions[r + 1][c] = pathNum;
        mazePositions[r + 2][c] = pathNum;
        mazePositions[r + 3][c] = pathNum;
    }
    else if (oneToThree == 3) { // Goes Right 4
        mazePositions[r][c] = pathNum;
        mazePositions[r + 1][c] = pathNum;
        mazePositions[r + 2][c] = pathNum;
        mazePositions[r + 3][c] = pathNum;
        mazePositions[r + 4][c] = pathNum;
    }
}

// Organize Maze function helpers
void checkUpLeft(int r, int c) {
    if (mazePositions[r - 1][c + 1] == 8) {
        if (mazePositions[r + 1][c - 1] == 8) {
            if (mazePositions[r][c - 1] == 8) {
                if (mazePositions[r - 1][c] == 8) {
                    mazePositions[r][c] = 1;
                }
            }
        }
    }
}
void checkUpRight(int r, int c) {
    if (mazePositions[r - 1][c - 1] == 8) {
        if (mazePositions[r - 1][c + 1] == 8) {
            if (mazePositions[r][c + 1] == 8) {
                if (mazePositions[r - 1][c] == 8) {
                    mazePositions[r][c] = 1;
                }
            }
        }
    }
}
void checkDownLeft(int r, int c) {
    if (mazePositions[r - 1][c - 1] == 8) {
        if (mazePositions[r + 1][c + 1] == 8) {
            if (mazePositions[r][c - 1] == 8) {
                if (mazePositions[r + 1][c] == 8) {
                    mazePositions[r][c] = 1;
                }
            }
        }
    }
}
void checkDownRight(int r, int c) {
    if (mazePositions[r - 1][c + 1] == 8) {
        if (mazePositions[r + 1][c - 1] == 8) {
            if (mazePositions[r][c + 1] == 8) {
                if (mazePositions[r + 1][c] == 8) {
                    mazePositions[r][c] = 1;
                }
            }
        }
    }
}

// Maze Generator functions
void generateRestOfMaze() {
  
    for (int r = 0; r < mazeSize; r++) {
        for (int c = 0; c < mazeSize; c++) {
            
            if (r == 1) {
                
                if (mazePositions[r - 1][c] == 0) {
                    
                    oneToFourFunc();
                    if (*oneToFourPtr == 1 || *oneToFourPtr == 2) {
                        makeCorner(r, c);
                    }
                    else if (*oneToFourPtr == 3 || *oneToFourPtr == 4) {
                        makeDown(r, c);
                    }

                } else if (mazePositions[r - 1][c] == 1) {
                    if (mazePositions[r][c] == pathNum) {

                    } else {
                        mazePositions[r][c] = 1;
                    }
                }
            }

            if (r % 2 == 1 && r >= 1) { // Runs if number is Odd
                if ( mazePositions[r - 1][c] == pathNum ) {
                        oneToFourFunc();
                    if (oneToFour == 1) {
                        makeCorner(r, c);
                    }
                    else if (oneToFour == 2) {
                        makeLeft(r, c);
                    }
                    else if (oneToFour == 3) {
                        makeRight(r, c);
                    }
                    else if (oneToFour == 4) {
                        makeDown(r, c);
                    }

                }
            } else if (r % 2 == 0 && r >= 1) { // Runs if number is Even

            }
        }
    }
}
void createInterectionPoints() {

    // Creates Intersection Points
    for (int r = 0; r < mazeSize; r++) {
        for (int c = 0; c < mazeSize; c++) {
            if (mazePositions[r][c] == pathNum) {
                int aroundZeros = 0;


                if (mazePositions[r][c + 1] == pathNum) { // Checks Right
                    aroundZeros = aroundZeros + 1;
                }
                else if (mazePositions[r][c + 1] == NULL) {

                }


                if (mazePositions[r - 1][c] == pathNum) { // Checks Up
                    aroundZeros = aroundZeros + 1;
                }
                else if (mazePositions[r][c + 1] == NULL) {

                }


                if (mazePositions[r][c - 1] == pathNum) { // Checks Left
                    aroundZeros = aroundZeros + 1;
                }
                else if (mazePositions[r][c + 1] == NULL) {

                }


                if (mazePositions[r + 1][c] == pathNum) { // Checks Down
                    aroundZeros = aroundZeros + 1;
                }
                else if (mazePositions[r][c + 1] == NULL) {

                }


                if (aroundZeros >= 3) {
                    rowInts.push_back(r);
                    colInts.push_back(c);
                }
            }
        }

        for (int i = 0; i < rowInts.size(); i++) {
            mazePositions[rowInts.at(i)][colInts.at(i)] = 4;
        }


    }
}
void organizeIntersections() {
    for (int r = 0; r < mazeSize; r++) {
        for (int c = 0; c < mazeSize; c++) {
            if (mazePositions[r][c] == 8) {
                if (mazePositions[r - 1][c - 1] == 8) { // Checks up/left
                    checkUpLeft(r, c);
                }
                else if (mazePositions[r - 1][c + 1] == 8) { // Checks up/right
                    checkUpRight(r, c);
                }
                else if (mazePositions[r + 1][c - 1] == 8) { // Checks down/left
                    checkDownLeft(r, c);
                }
                else if (mazePositions[r + 1][c + 1] == 8) { // Checks down/right
                    checkDownRight(r, c);
                }
            }
        }
    }
}
void setStartandEnd() {
    // Function Vectors/Variables
    vector<int> AvlStartPos;
    vector<int> AvlEndPos;

    for (int c = 0; c < mazeSize; c++) {
        if (mazePositions[0][c] == 8) {
            startPlayablePos++;
            AvlStartPos.push_back(c);
        }
    }
    int temp1;
    int num1 = rand();
    temp1 = (num1 % startPlayablePos);
    mazePositions[0][AvlStartPos.at(temp1)] = 2;
    

    

    for (int c = 0; c < mazeSize; c++) {
        if (mazePositions[mazeSize - 1][c] == 8) {
            endPlayablePos++;
            AvlEndPos.push_back(c);
        }
    }
    int temp2;
    int num2 = rand();
    temp2 = (num2 % endPlayablePos);
    mazePositions[mazeSize - 1][AvlEndPos.at(temp2)] = 3;
}
void setCrystal() {
    int temp;
    int num = rand();
    temp = (num % mazeSize) + 1;
    if (temp == mazeSize) {
        temp = mazeSize - 1;
    }
     
}


//   END   \\// *** //\\   END   //

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
