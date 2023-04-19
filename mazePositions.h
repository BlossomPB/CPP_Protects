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

class posInfo {
public:
    string posNumber;
    string nextDirection;
    string figureNextPos(string posNumber, string nextDirection);
};


void randSpace(int* randSpace);
void startMaze(int* currPosptr,string* directionPtr,bool* dirValPtr);
void validateDirection(string* directionPtr, bool* dirValPtr);
