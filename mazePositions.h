/*
    Isaac Nevarez
    Header for Function Prototypes
*/

#include <string>

using namespace std;

void introWords();


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




//\\// maze generation functions //\\//

// First layer maker functions
    void createFirstLayer();
    void organizeFirstLayer();

// RNG for Maze Maker functions
    void randSpace();
    void randNumOfRow();
    void oneOrZeroFunc();
    void oneToThreeFunc();
    void oneToFourFunc();

// Maze Maker function helpers
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
    void createInterectionPoints();
    void organizeIntersections();
    void setStartandEnd();
    void setCrystal();

//   END   \\// *** //\\   END   //

// Print maze function
    void printMaze();

void startMaze(int* currPosptr,string* directionPtr,bool* dirValPtr);
void validateDirection(string* directionPtr, bool* dirValPtr);
