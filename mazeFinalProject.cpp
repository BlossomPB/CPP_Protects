// Isaac Nevarez

#include <iostream>
#include <string>
#include <vector>
#include <thread>
#include "mazePositions.h"

using namespace std;



int main() {
    // Vars
    srand(time(0));
    //int num = rand();
    //int randNum = (num % 3) + 1;
    //string mazeString;
    //string* mazeStringPtr = &mazeString;

    
    // Pointer Vars
    string username;
    string* usernamePtr = &username;

    int currentPos;
    int* currPosPtr = &currentPos;

    //string direction;
    //string* directionPtr = &direction;
    
    introWords(usernamePtr);

    cout << "Starting maze generation! \n\n";
    // Creates first layer
    createFirstLayer();

    // Organizes first layer
    organizeFirstLayer();
    this_thread::sleep_for(chrono::seconds(2));

    // Generate Rest of maze
    generateRestOfMaze();

    cout << "\n\nGenerating Maze.";
    this_thread::sleep_for(chrono::milliseconds(275));
    cout << ".";
    this_thread::sleep_for(chrono::milliseconds(275));
    cout << ".\n\n";

    // Organizes intersections inside the maze
    organizeIntersections();
    this_thread::sleep_for(chrono::milliseconds(350));

    // Creates a crystal in the maze for a easter egg
    setCrystal();
    this_thread::sleep_for(chrono::milliseconds(350));

    // Creates intersection points in maze
    createInterectionPoints();
    this_thread::sleep_for(chrono::milliseconds(350));

    // Sets Start and end positions and saves positions for later use
    setStartandEnd();
    this_thread::sleep_for(chrono::milliseconds(350));

    // Prints made maze
    printMaze();
    this_thread::sleep_for(chrono::milliseconds(350));

    // Checks maze if completable
    checkMaze();


    cout << "\n\n\n\n\n\n";
    

    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    //startMaze();


    return 0;
}
