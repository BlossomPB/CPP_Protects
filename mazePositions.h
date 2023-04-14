/*
	Isaac Nevarez
	Header for Function Prototypes
*/

#include <string>

using namespace std;

void introWords();

struct positionMaker {
    string posNumber;
    bool north;
    bool east;
    bool south;
    bool west;
    bool hasCrystal;
};

class posInfo {
public:
    string posNumber;
    string nextDirection;
    string figureNextPos(string posNumber, string nextDirection);
};

string pos1(string direction);
string pos2(string direction);
string pos3(string direction);
string pos4(string direction);
string pos5(string direction);
