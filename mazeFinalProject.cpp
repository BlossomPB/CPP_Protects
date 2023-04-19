// Isaac Nevarez

#include <iostream>
#include <string>
#include "mazePositions.h"

using namespace std;

int main() {
    // Old Vars
    bool foundCrystal;
    string username;
    introWords();
    cout << "\n\n\n\n\n\n";
    int nextPos;
    string error1LastPos;
    bool startedGame;
    foundCrystal = false;
    startedGame = false;

    // New Vars
    srand(time(0));
    int num = rand();
    int randNum = (num % 3) + 1;

    // Pointer Vars
    int currentPos;
    int* currPosPtr = &currentPos;

    string direction;
    string* directionPtr = &direction;

    bool directionValid;
    bool* dirValPtr = &directionValid;
    

    // Makes position 1
    positionMaker position1;
    position1.posNumber = 1;
    position1.north = true;
    position1.northPos = "position4";
    position1.east = true;
    position1.eastPos = "position2";
    position1.south = false;
    position1.southPos = "nil";
    position1.west = true;
    position1.westPos = "position6";
    position1.hasCrystal = false;

    /*
        Maze Number Array Legend:
        0 = Free Space
        1 = Wall
        2 = Start Point
        3 = Intercection
        4 = End Point
        5 = Crystal
        

        Default 12 x 12 Multi Array:

        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
        { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
        { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
        { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
        { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
        { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
        { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
        { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
        { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
        { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }
    */

    // Default Maze Starting
    int mazePositions[12][12] = {
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
        { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
        { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
        { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
        { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
        { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
        { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
        { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
        { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
        { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }
    };

    int wieghtRand;
    int* wieghtRandPtr = &wieghtRand;

    

    for (int r = 0; r < 12; r++) {
        for (int c = 0; c < 12; c++) {
            if (mazePositions[r][c] == 1 || mazePositions[r][c] == 2) {
                
            }
            else {
                randSpace(wieghtRandPtr);
                cout << *wieghtRandPtr;
                mazePositions[r][c] = *wieghtRandPtr;
            }
        }
    }

    cout << "\n\n\n\n\n\n";

    // Prints made maze
    for (int r = 0; r < 12; r++) {
        for (int c = 0; c < 12; c++) {
            cout << mazePositions[r][c] << " ";

        }
        cout << "\n";

    }

    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    // startMaze(currPosPtr,directionPtr,dirValPtr);


    return 0;
}
