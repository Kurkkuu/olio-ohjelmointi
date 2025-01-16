#include "game.h"
#include <iostream>

using namespace std;

int main() {
    cout << "Moro, nyt oot arvauspelissa." << endl;

    int maxNumber;
    cout << "Aseta vaikeustaso: ";
    cin >> maxNumber;


    Game Game(maxNumber);
    Game.play();

    Game.printGameResult();

    return 0;
}
