// Isaac Nevarez

#include <iostream>
#include <string>
#include <vector>
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
    string mazeString;
    string* mazeStringPtr = &mazeString;

    // Pointer Vars
    int currentPos;
    int* currPosPtr = &currentPos;

    string direction;
    string* directionPtr = &direction;

 
    // Creates first layer
    createFirstLayer();

    // Organizes first layer
    organizeFirstLayer();
    
    // Generate Rest of maze
    generateRestOfMaze();

    // Organizes intersections inside the maze
    organizeIntersections();

    // Sets Start and end positions and saves positions for later use
    setStartandEnd();

    // Creates intersection points in maze
    createInterectionPoints();

    // Creates a crystal in the maze for a easter egg
    setCrystal();

    cout << "\n\n\n\n\n\n";

    // Prints made maze
    printMaze();
    

    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    // startMaze(currPosPtr,directionPtr,dirValPtr);


    return 0;
}
