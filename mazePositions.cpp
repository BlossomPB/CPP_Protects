/*
    Isaac Nevarez
    Add-on Source File
    for maze position definitions

*/

#include <iostream>
#include <string>
#include <vector>
#include <thread>
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
    6 = Generation for down/right
    7 = Generation for down/left
    9 = Generation for 3way/corner/down/left/right

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
int startPosCol;
int endPosCol;
bool foundCrystal;
int cryMazeRow;
int cryMazeCol;
int validCrySpaces = 0;
int dirNum;
int pathChance;
bool directionValid;
int startPlayablePos = 0;
int endPlayablePos = 0;
int wieghtRand;
int randSpaceVar;
int oneOrZero; // Just a decider between two things
int oneToFour; // If 1 (Makes 2 Sides) || 2 (Goes left) || 3 (Goes Down) || 4 (Goes right)
int oneToThree; // Sets up for maze to (stay the same/go down one/go up 1-4)

// Maze Vars
    int mazeSize = 25;
    int mazeArraySize = 24;
    float mazePathFrequency; // (1) is not recommended   
    float pathChanceChecker = mazeSize / mazePathFrequency;
    bool successfulGeneration = false;
    bool mazeChecked = false;
    int rowRestart;
    
// Maze Numbers
    int wallNum = 1;
    int startNum = 2;
    int endNum = 3;
    int interNum = 4;
    int cryNum = 5;
    int pathNum = 8;
    int pathDownRightNum = 6;
    int pathDownLeftNum = 7;
    int pathEndNum = 9;

// Maze Error Checker Vars
    bool mazeEndValid;
    int lastCheckedNum = 0; // (1) = up checked last, (2) = right checked last, (3) = down checked last, (4) = left checked last
    int& lastCheckedRef = lastCheckedNum;
    int interChecked;   
    int interCheckedGoal = 2;

// Maze Wonder Vars
    int currCol;
    int currRow;
    bool foundInter;
    int iterationsOfPaths;

// Vectors
    vector<int> AvlStartPos;
    vector<int> AvlEndPos;
    vector<int> AvlCryPos;
    vector<int> rowInts;
    vector<int> colInts;




void introWords(string* usernamePtr) {
    std::cout << "Welcome to the maze game";
    std::cout << "\nPlease Enter Your Name: ";
    std::cin >> *usernamePtr;
    std::cout << "\n\nThank you!! Now please enter a path frequency (min: 5, max: 25)[Decimals Accepted]: ";
    std::cin >> mazePathFrequency;
    if (mazePathFrequency < 5) { // Makes input frequency valid no mater what
        mazePathFrequency = 5;

    } else if (mazePathFrequency > 25) {
        mazePathFrequency = 5;

    } else if (5 < mazePathFrequency <= 25){

    } else {
        std::cout << "An error occoured restarting program..";
        std::cout << "\n\n\n\n";
        introWords(usernamePtr);
    }
    pathChanceChecker = mazeSize / mazePathFrequency;
    std::cout << "\n\nPath Chance Frequency: " << pathChanceChecker;
    std::cout << "\n\n\n\n\n\n";
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
        if (mazePositions[0][c] == pathEndNum) {
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
        wieghtRand = pathEndNum;
    }
    else if (temp >= 80) {    // Wall Chance of 100
        wieghtRand = 1;
    }
}
void randNumOfMazeLengths() {
    int temp;
    int num = rand();
    temp = (num % mazeSize) - 1;
    randSpaceVar = temp;
}
void randPathFrequency() {
    int temp;
    int num = rand();
    temp = (num % mazeSize) - 1;
    pathChance = temp;
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
void oneToFiveFunc() {
    int temp;
    int num = rand();
    temp = (num % 5) + 1;
    oneToFour = temp;
}

// Maze Maker function helpers
void make4Way(int r, int c) {
    mazePositions[r - 1][c] = pathNum;
    mazePositions[r][c] = pathNum;
// Goes Right
    mazePositions[r][c + 1] = pathNum;
    mazePositions[r][c + 2] = pathNum;
    mazePositions[r][c + 3] = pathNum;
    mazePositions[r][c + 4] = pathNum;
    mazePositions[r][c + 5] = pathDownRightNum;
// Goes Left
    mazePositions[r][c - 1] = pathNum;
    mazePositions[r][c - 2] = pathNum;
    mazePositions[r][c - 3] = pathNum;
    mazePositions[r][c - 4] = pathNum;
    mazePositions[r][c - 5] = pathDownLeftNum;
// Goes Down
    mazePositions[r + 1][c] = pathNum;
    mazePositions[r + 2][c] = pathNum;
    mazePositions[r + 3][c] = pathNum;
    mazePositions[r + 4][c] = pathNum;
    mazePositions[r + 5][c] = pathEndNum;

}
void makeCorner(int r, int c) {
    oneOrZeroFunc();
    if (oneOrZero == 0) {  // Makes corner Left/Down
        mazePositions[r - 1][c] = pathNum;
        mazePositions[r][c] = pathNum;
        mazePositions[r][c + 1] = pathNum;
        mazePositions[r][c + 2] = pathNum;
        mazePositions[r][c + 3] = pathNum;
        mazePositions[r][c + 4] = pathNum;
        mazePositions[r][c + 5] = pathDownRightNum;
        mazePositions[r + 1][c] = pathNum;
        mazePositions[r + 2][c] = pathNum;
        mazePositions[r + 3][c] = pathNum;
        mazePositions[r + 4][c] = pathNum;
        mazePositions[r + 5][c] = pathEndNum;
    }
    else if (oneOrZero == 1) { // Makes corner Right/Down
        mazePositions[r - 1][c] = pathNum;
        mazePositions[r][c] = pathNum;
        mazePositions[r][c - 1] = pathNum;
        mazePositions[r][c - 2] = pathNum;
        mazePositions[r][c - 3] = pathNum;
        mazePositions[r][c - 4] = pathNum;
        mazePositions[r][c - 5] = pathDownLeftNum;
        mazePositions[r + 1][c] = pathNum;
        mazePositions[r + 2][c] = pathNum;
        mazePositions[r + 3][c] = pathNum;
        mazePositions[r + 4][c] = pathNum;
        mazePositions[r + 5][c] = pathEndNum;
    }
}
void makeLeft(int r, int c) {
    oneToThreeFunc();
    if (oneToThree == 1) { // Goes left 4
        mazePositions[r - 1][c] = pathNum;
        mazePositions[r][c] = pathNum;
        mazePositions[r][c + 1] = pathNum;
        mazePositions[r][c + 2] = pathNum;
        mazePositions[r][c + 3] = pathNum;
        mazePositions[r][c + 4] = pathDownLeftNum;
    }
    else if (oneToThree == 2) { // Goes left 5
        mazePositions[r - 1][c] = pathNum;
        mazePositions[r][c] = pathNum;
        mazePositions[r][c + 1] = pathNum;
        mazePositions[r][c + 2] = pathNum;
        mazePositions[r][c + 3] = pathNum;
        mazePositions[r][c + 4] = pathNum;
        mazePositions[r][c + 5] = pathDownLeftNum;
    }
    else if (oneToThree == 3) { // Goes left 6
        mazePositions[r - 1][c] = pathNum;
        mazePositions[r][c] = pathNum;
        mazePositions[r][c + 1] = pathNum;
        mazePositions[r][c + 2] = pathNum;
        mazePositions[r][c + 3] = pathNum;
        mazePositions[r][c + 4] = pathNum;
        mazePositions[r][c + 5] = pathNum;
        mazePositions[r][c + 6] = pathDownLeftNum;
    }
}
void makeRight(int r, int c) {
    oneToThreeFunc();
    if (oneToThree == 1) { // Goes Right 4
        mazePositions[r - 1][c] = pathNum;
        mazePositions[r][c] = pathNum;
        mazePositions[r][c - 1] = pathNum;
        mazePositions[r][c - 2] = pathNum;
        mazePositions[r][c - 3] = pathNum;
        mazePositions[r][c - 4] = pathDownRightNum;
    }
    else if (oneToThree == 2) { // Goes Right 5
        mazePositions[r - 1][c] = pathNum;
        mazePositions[r][c] = pathNum;
        mazePositions[r][c - 1] = pathNum;
        mazePositions[r][c - 2] = pathNum;
        mazePositions[r][c - 3] = pathNum;
        mazePositions[r][c - 4] = pathNum;
        mazePositions[r][c - 5] = pathDownRightNum;
    }
    else if (oneToThree == 3) { // Goes Right 6
        mazePositions[r - 1][c] = pathNum;
        mazePositions[r][c] = pathNum;
        mazePositions[r][c - 1] = pathNum;
        mazePositions[r][c - 2] = pathNum;
        mazePositions[r][c - 3] = pathNum;
        mazePositions[r][c - 4] = pathNum;
        mazePositions[r][c - 5] = pathNum;
        mazePositions[r][c - 6] = pathDownRightNum;
    }
}
void makeDown(int r, int c) {
    oneToThreeFunc();
    if (oneToThree == 1) { // Goes Right 2
        mazePositions[r - 1][c] = pathNum;
        mazePositions[r][c] = pathNum;
        mazePositions[r + 1][c] = pathNum;
        mazePositions[r + 2][c] = pathEndNum;
    }
    else if (oneToThree == 2) { // Goes Right 3
        mazePositions[r - 1][c] = pathNum;
        mazePositions[r][c] = pathNum;
        mazePositions[r + 1][c] = pathNum;
        mazePositions[r + 2][c] = pathNum;
        mazePositions[r + 3][c] = pathEndNum;
    }
    else if (oneToThree == 3) { // Goes Right 4
        mazePositions[r - 1][c] = pathNum;
        mazePositions[r][c] = pathNum;
        mazePositions[r + 1][c] = pathNum;
        mazePositions[r + 2][c] = pathNum;
        mazePositions[r + 3][c] = pathNum;
        mazePositions[r + 4][c] = pathEndNum;
    }
}

// Organize Maze function helpers
void checkUpLeft(int r, int c) {
    if (mazePositions[r - 1][c + 1] == 8) {
        if (mazePositions[r + 1][c - 1] == 8) {
            if (mazePositions[r][c - 1] == 8) {
                if (mazePositions[r - 1][c] == 8) {
                    mazePositions[r][c] = wallNum;
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
                    mazePositions[r][c] = wallNum;
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
                    mazePositions[r][c] = wallNum;
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
                    mazePositions[r][c] = wallNum;
                }
            }
        }
    }
}

// Maze Generator functions
void generateRestOfMaze() {
    for (int r = 0; r < mazeSize; r++) {
        for (int c = 0; c < mazeSize; c++) {
            if (r < mazeSize - 1) {
                randPathFrequency();
                if (pathChance >= pathChanceChecker) {
                    if (r == 1) {
                        if (mazePositions[r - 1][c] == pathEndNum) {
                            oneToFiveFunc();
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
                            else if (oneToFour == 5) {
                                make4Way(r, c);
                            }
                        }
                    } else if (r > 1) {
                        if (mazePositions[r - 1][c] == pathDownRightNum) {
                            oneOrZeroFunc();
                            if (oneOrZero == 0) {
                                makeDown(r, c);
                            }
                            else if (oneOrZero == 1) {
                                //makeRight(r, c);
                                makeDown(r, c);
                            }

                        } else if (mazePositions[r - 1][c] == pathDownLeftNum) {
                            oneOrZeroFunc();
                            if (oneOrZero == 0) {
                                makeDown(r, c);
                            }
                            else if (oneOrZero == 1) {
                                //makeLeft(r, c);
                                makeDown(r, c);
                            }
                        } else if (mazePositions[r - 1][c] == pathEndNum) {
                            oneToFiveFunc();
                            if (oneToFour == 1) {
                                makeCorner(r, c);
                            } else if (oneToFour == 2) {
                                makeLeft(r, c);
                            } else if (oneToFour == 3) {
                                makeRight(r, c);
                            } else if (oneToFour == 4) {
                                makeDown(r, c);
                            } else if (oneToFour == 5) {
                                make4Way(r, c);
                            }
                        }
                    } else if (r >= 23) {
                        if (mazePositions[r - 1][c] == pathEndNum || mazePositions[r - 1][c] == pathDownLeftNum || mazePositions[r - 1][c] == pathDownRightNum) {
                            oneToThreeFunc();
                            if (oneToThree == 1) {
                                makeDown(r, c);
                            }
                            else if (oneToThree == 2) {
                                make4Way(r, c);
                            }
                            else if (oneToThree == 3) {
                                make4Way(r, c);
                            }
                        }
                    }
                }
            } 
        }
    }
    organizeMaze();
    for (int c = 0; c < mazeSize; c++) {
        if (mazePositions[mazeSize - 1][c] == 8 || mazePositions[mazeSize - 1][c] == 9) {
            successfulGeneration = true;
            
            break;
        } 
    }

    
    if (successfulGeneration == false) {
        regenMaze();
    }
}
void regenMaze() {
    do {
        for (int r = mazeSize - 1; r >= 1; r--) {
            for (int c = 0; c < mazeSize; c++) {
                if (mazePositions[r][c] == 8 || mazePositions[r][c] == 9) {
                    mazeChecked = true;
                    rowRestart = r;

                    break;
                }
            }
            if (mazeChecked == true) {
                break;
            }
        }
        for (int r = rowRestart; r < mazeSize; r++) {
            for (int c = 0; c < mazeSize; c++) {
                if (r < mazeSize - 1) {
                    randPathFrequency();
                    if (pathChance >= pathChanceChecker) {
                        if (r == 1) {
                            if (mazePositions[r - 1][c] == pathEndNum) {
                                oneToFiveFunc();
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
                                else if (oneToFour == 5) {
                                    make4Way(r, c);
                                }
                            }
                        }
                        else if (r > 1) {
                            if (mazePositions[r - 1][c] == pathDownRightNum) {
                                oneOrZeroFunc();
                                if (oneOrZero == 0) {
                                    makeDown(r, c);
                                }
                                else if (oneOrZero == 1) {
                                    //makeRight(r, c);
                                    makeDown(r, c);
                                }

                            }
                            else if (mazePositions[r - 1][c] == pathDownLeftNum) {
                                oneOrZeroFunc();
                                if (oneOrZero == 0) {
                                    makeDown(r, c);
                                }
                                else if (oneOrZero == 1) {
                                    //makeLeft(r, c);
                                    makeDown(r, c);
                                }
                            }
                            else if (mazePositions[r - 1][c] == pathEndNum) {
                                oneToFiveFunc();
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
                                else if (oneToFour == 5) {
                                    make4Way(r, c);
                                }
                            }
                        }
                        else if (r >= mazeSize - 2) {
                            if (mazePositions[r - 1][c] == pathEndNum || mazePositions[r - 1][c] == pathDownLeftNum || mazePositions[r - 1][c] == pathDownRightNum) {
                                oneToThreeFunc();
                                if (oneToThree == 1) {
                                    makeDown(r, c);
                                }
                                else if (oneToThree == 2) {
                                    make4Way(r, c);
                                }
                                else if (oneToThree == 3) {
                                    make4Way(r, c);
                                }
                            }
                        }
                    }
                }
            }
        }
        organizeMaze();
        for (int c = 0; c < mazeSize; c++) {
            if (mazePositions[mazeSize - 1][c] == 8) {
                successfulGeneration = true;
                break;
            }
        }
    } while (successfulGeneration == false);
}
void organizeMaze() {
    for (int r = 0; r < mazeSize; r++) {
        for (int c = 0; c < mazeSize; c++) {
            if (mazePositions[r][c] == pathEndNum) {
                mazePositions[r][c] = pathNum;
            }
            if (mazePositions[r][c] == pathDownLeftNum) {
                mazePositions[r][c] = pathNum;
            }
            if (mazePositions[r][c] == pathDownRightNum) {
                mazePositions[r][c] = pathNum;
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
                if (r > 1) {
                    if (mazePositions[r - 1][c] == pathNum) { // Checks Up
                        aroundZeros++;
                    }

                    if (mazePositions[r][c + 1] == pathNum || mazePositions[r][c + 1] == endNum) { // Checks Right
                        aroundZeros++;
                    }


                    if (mazePositions[r][c - 1] == pathNum || mazePositions[r][c + 1] == endNum) { // Checks Left
                        aroundZeros++;
                    }


                    if (mazePositions[r + 1][c] == pathNum || mazePositions[r][c + 1] == endNum) { // Checks Down
                        aroundZeros++;
                    }



                    if (aroundZeros >= 3) {
                        rowInts.push_back(r);
                        colInts.push_back(c);
                    }
                }
            }
        }
        int vecSize = rowInts.size();
        for (int v = 0; v < vecSize; v++) {
            mazePositions[rowInts.at(v)][colInts.at(v)] = interNum;
        }

    }
}
void organizeIntersections() {
    for (int r = 0; r < mazeSize; r++) {
        for (int c = 0; c < mazeSize; c++) {
            if (mazePositions[r][c] == pathNum) {
                if (r > 1) {
                    if (mazePositions[r - 1][c - 1] == pathNum) { // Checks up/left
                        checkUpLeft(r, c);
                    }
                    else if (mazePositions[r - 1][c + 1] == pathNum) { // Checks up/right
                        checkUpRight(r, c);
                    }
                    else if (mazePositions[r + 1][c - 1] == pathNum) { // Checks down/left
                        checkDownLeft(r, c);
                    }
                    else if (mazePositions[r + 1][c + 1] == pathNum) { // Checks down/right
                        checkDownRight(r, c);
                    }
                }
            }
        }
    }
}
void setStartandEnd() {
    for (int c = 0; c < mazeSize; c++) {
        if (mazePositions[0][c] == pathNum) {
            startPlayablePos++;
            AvlStartPos.push_back(c);
        }
    }
    int temp = rand();
    startPosCol = (temp % startPlayablePos);
    mazePositions[0][AvlStartPos.at(startPosCol)] = startNum;
    for (int c = 0; c < mazeSize; c++) {
        if (mazePositions[0][c] == pathNum || mazePositions[0][c] == pathEndNum) {
            mazePositions[0][c] = 1;
        }
    }

    

    for (int c = 0; c < mazeSize; c++) {
        if (mazePositions[mazeSize - 1][c] == pathNum ) {
            endPlayablePos = endPlayablePos + 1;
            AvlEndPos.push_back(c);
        }
    }
    temp = rand();
    endPosCol = (temp % endPlayablePos);
    mazePositions[mazeArraySize][AvlEndPos.at(endPosCol)] = 3;
}
void setCrystal() {
// Gets random maze row
    int temp = rand();
    cryMazeRow = (temp % mazeSize) + 1;
    if (cryMazeRow == mazeSize) {
        cryMazeRow = mazeSize - 1;
    }

// Gets a valid column to put crystal in
    for (int c = 0; c < mazeSize; c++) {
        if (mazePositions[cryMazeRow][c] == pathNum) {
            validCrySpaces = validCrySpaces + 1;
            AvlCryPos.push_back(c);
        }
    }
    temp = rand();
    cryMazeCol = (temp % validCrySpaces);
    mazePositions[cryMazeRow][AvlCryPos.at(cryMazeCol)] = cryNum;
}
void checkMaze() {
    mazeEndValid = false;
    currRow = mazeSize - 1;
    currCol = AvlEndPos.at(endPosCol);
    std::cout << "\n\nValidating Maze..\n";
    
    do {
            if (mazePositions[currRow - 1][currCol] == pathNum && lastCheckedNum != 3) { // Checks up
                currRow = currRow - 1;
                lastCheckedNum = 1;
            } else if (mazePositions[currRow - 1][currCol] == interNum && lastCheckedNum != 3) {
                interChecked++;
                currRow = currRow - 1;
                lastCheckedNum = 1;
            } else if (mazePositions[currRow - 1][currCol] == startNum) {
                mazeEndValid = true;
                break;
            } else {
                if (mazePositions[currRow][currCol + 1] == pathNum && lastCheckedNum != 4) { // Checks right
                    currCol = currCol + 1;
                    lastCheckedNum = 2;
                } else if (mazePositions[currRow][currCol + 1] == interNum && lastCheckedNum != 4) {
                    interChecked++;
                    currCol = currCol + 1;
                    lastCheckedNum = 2;
                } else if (mazePositions[currRow][currCol + 1] == NULL || currCol + 1 > mazeSize) {
                    break;
                }
                else {
                    if (mazePositions[currRow][currCol - 1] == pathNum && lastCheckedNum != 2) { // Checks left
                        currCol = currCol - 1;
                        lastCheckedNum = 4;
                    } else if (mazePositions[currRow][currCol - 1] == interNum && lastCheckedNum != 2) {
                        interChecked++;
                        currCol = currCol - 1;
                        lastCheckedNum = 4;
                    } else if (mazePositions[currRow][currCol + 1] == NULL || currCol + 1 > mazeSize) {
                        break;
                    } else {
                        if (mazePositions[currRow + 1][currCol] == pathNum && lastCheckedNum != 1) { // Checks down
                            currRow = currRow + 1;
                            lastCheckedNum = 3;
                        }
                        else if (mazePositions[currRow + 1][currCol] == interNum && lastCheckedNum != 1) {
                            interChecked++;
                            currRow = currRow + 1;
                            lastCheckedNum = 3;
                        } else {
                            break;
                        }
                    }
                }
            }
             
                       
        if (interChecked >= interCheckedGoal) {
            mazeEndValid = true;
        }
    } while (mazeEndValid == false);
    
     if (mazeEndValid == false) {
        std::cout << "\n\nMaze Failed Regenerating Maze!\n\n";
        for (int r = 0; r < mazeSize; r++) {
            for (int c = 0; c < mazeSize; c++) {
                mazePositions[r][c] = wallNum;
            }
        }
        createFirstLayer();
        organizeFirstLayer();
        this_thread::sleep_for(chrono::seconds(2));
        generateRestOfMaze();
        cout << "\n\nRe-Generating Maze..\n\n";
        this_thread::sleep_for(chrono::milliseconds(750));
        organizeMaze();
        this_thread::sleep_for(chrono::milliseconds(350));
        organizeIntersections();
        this_thread::sleep_for(chrono::milliseconds(350));
        setCrystal();
        this_thread::sleep_for(chrono::milliseconds(350));
        createInterectionPoints();
        this_thread::sleep_for(chrono::milliseconds(350));
        setStartandEnd();
        this_thread::sleep_for(chrono::milliseconds(350));
        printMaze();
        this_thread::sleep_for(chrono::milliseconds(350));
        checkMaze();
    }
    else if (mazeEndValid == true) {
        std::cout << "\n\nSuccessful Maze Generation!\n\n";
    }
    
   
}


//   END   \\// *** //\\   END   //


//\\// Maze Wonder Functions //\\// // Wonder Functions not in use for final project

// Maze Wonder Functions
void startMaze() {
    currRow = 1;
    currCol = AvlStartPos.at(startPosCol);
    if (mazePositions[currRow][currCol] != pathNum) {
        mazePositions[currRow][currCol] = pathNum;
    }
    if (mazePositions[currRow][currCol] == pathNum) {
        findIntersection();
    } else if (mazePositions[currRow][currCol] == interNum) {

    } else {
        std::cout << "Maze Not Possible";
    }
}

// Maze Wonder Help Functions

void findIntersection() {
    foundInter = false;
    iterationsOfPaths = 1;
    do {
    // Checks Left
        if (mazePositions[currRow][currCol - iterationsOfPaths] == pathNum) {
            
        } else if (mazePositions[currRow][currCol - iterationsOfPaths] == interNum) {
            foundInter = true;
            currCol = currCol - iterationsOfPaths;
        }

    // Checks Right
        if (mazePositions[currRow][currCol + iterationsOfPaths] == pathNum) {

        }
        else if (mazePositions[currRow][currCol + iterationsOfPaths] == interNum) {
            foundInter = true;
            currCol = currCol + iterationsOfPaths;
        }

    // Checks Down
        if (mazePositions[currRow + iterationsOfPaths][currCol] == interNum) {
            foundInter = true;
            currRow = currRow + iterationsOfPaths;
        }

    // Adds to iteration so when the loops comes back again it checks the number after
        iterationsOfPaths++;
    } while (foundInter == false);
    std::cout << "\n\nLauched find intersection and found a intersection at: " << currRow << ", " << currCol << "\n\n";
    iterationsOfPaths = 1;
} 
void validateDirection(string* directionPtr, bool* dirValPtr) {
    if (*directionPtr == "up" || *directionPtr == "Up") {
        dirNum = 1;
    } else if (*directionPtr == "right" || *directionPtr == "Right") {
        dirNum = 2;
    } else if (*directionPtr == "down" || *directionPtr == "Down") {
        dirNum = 3;
    } else if (*directionPtr == "left" || *directionPtr == "Left") {
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


//   END   \\// *** //\\   END   //
