/*
    Isaac Nevarez
    Header for Function Prototypes
*/

#include <string>

using namespace std;

void introWords(string* usernamePtr);


struct positionMaker {
    int posNumber;
    bool north;
    string northPos;
    bool east;
    string eastPos;
    bool south;
    string southPos;
    bool west;
    string westPos;
    bool hasCrystal;
};




//\\// Maze Generation Functions //\\//

// First layer maker functions
    void createFirstLayer();
    void organizeFirstLayer();

// RNG for Maze Maker functions
    void randSpace();
    void randNumOfMazeLengths();
    void randPathFrequency();
    void oneOrZeroFunc();
    void oneToThreeFunc();
    void oneToFiveFunc();

// Maze Maker function helpers
    void make4Way(int r, int c);
    void makeCorner(int r, int c);
    void makeLeft(int r, int c);
    void makeRight(int r, int c);
    void makeDown(int r, int c);

// Organize Maze function helpers
    void checkUpLeft(int r, int c);
    void checkUpRight(int r, int c);
    void checkDownLeft(int r, int c);
    void checkDownRight(int r, int c);

// Maze Generator functions
    void generateRestOfMaze();
    void regenMaze();
    void organizeMaze();
    void createInterectionPoints();
    void organizeIntersections();
    void setStartandEnd();
    void setCrystal();
    void checkMaze();

//   END   \\// *** //\\   END   //


// Print maze function
    void printMaze();



//\\// Maze Wonder Functions //\\// // Functions not in use for final project
    
// Maze Wonder Functions
    void startMaze();

// Maze Wonder Help Functions
    void findIntersection();
    void validateDirection(string* directionPtr, bool* dirValPtr);
    
//   END   \\// *** //\\   END   //
