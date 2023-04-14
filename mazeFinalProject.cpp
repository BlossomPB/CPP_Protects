// Isaac Nevarez

#include <iostream>
#include <string>
#include "mazePostions.h"

using namespace std;

int main() {
    bool foundCrystal;
    string username;
    introWords();
    cin >> username;
    string direction;
    string nextPos;
    string currentPos;
    int testCurrPos;
    int testNextPos;
    string error1LastPos;
    bool startedGame;
    foundCrystal = false;
    startedGame = false;

    positionMaker position1;
    position1.posNumber = 1;
    position1.north = true;
    position1.east = true;
    position1.south = false;
    position1.west = true;
    position1.hasCrystal = false;

    posInfo sumthin;

    

    do {
        if (startedGame == false) {
            cout << "You are at the first turn you have 3 choices (North, East, West): "; // Starts the game

            cin >> direction;
            currentPos = pos1(direction);
            cout << "\n\nThis is now your Current Position: " << currentPos;
            startedGame = true;
            error1LastPos = "pos1";
        }
        if (currentPos == "pos1") {
            cout << "\nInsert your next movement.. your choices are (North, East, West): ";
            cin >> direction;
            currentPos = pos1(direction);
            error1LastPos = "pos1";
        }
        else if (currentPos == "pos2") {
            cout << "\nInsert your next movement.. your choices are (East, South, West): ";
            cin >> direction;
            currentPos = pos2(direction);
            error1LastPos = "pos2";
        }
        else if (currentPos == "pos3") {
            cout << "\nInsert your next movement.. your choices are (North, South, West): ";
            cin >> direction;
            currentPos = pos3(direction);
            error1LastPos = "pos3";
        }
        else if (currentPos == "pos4") {
            cout << "\nInsert your next movement.. your choices are (North, East, South, West): ";
            cin >> direction;
            currentPos = pos4(direction);
            error1LastPos = "pos4";
        }
        else if (currentPos == "pos5") {
            cout << "\nInsert your next movement.. your choices are (East, South, West): ";
            cin >> direction;
            currentPos = pos5(direction);
            error1LastPos = "pos5";
        }
        if (currentPos == "end") {
            break;
        }
        else if (currentPos == "pos1" || currentPos == "pos2" || currentPos == "pos3" || currentPos == "pos4" || currentPos == "pos5") {
            cout << "\n\nThis is now your Current Position: " << currentPos;
        }
        else {
            cout << "\nErrorCode: 1 [Please Input Correct Value]";
            cout << "\nGoing back to last position\n";
            currentPos = error1LastPos;
        }

    } while (currentPos != "end");
    if (currentPos == "end" && foundCrystal == true) {
        cout << "\n\nYou reached the end, and you found the secret crystal!";
        cout << "\nCongrats " << username << " for completing the game!";

    }
    else if (currentPos == "end" && foundCrystal == false)
        cout << "\n\nYou reached the end congrats " << username << ", but there are more secrets to find!";

    cout << "\n\n\n\n";
    return 0;
}
