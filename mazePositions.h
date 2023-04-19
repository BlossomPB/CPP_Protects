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

string doPos1(string currPos, string direction);
string pos1(string direction);
string pos2(string direction);
string pos3(string direction);
string pos4(string direction);
string pos5(string direction);
