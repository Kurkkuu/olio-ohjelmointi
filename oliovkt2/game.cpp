#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Game::Game(int maxNumber) : maxNumber(maxNumber), numOfGuesses(0) {
    cout<<"[Debuggi] Konstruktorissa: maxNumber asetettu arvoon "<<maxNumber<<endl;
    srand(time(0));
    oikeaLuku = rand() % maxNumber + 1;
    cout<<"[Debuggi] Konstruktorissa: oikeaLuku arvottu arvoon "<< oikeaLuku<<endl;
}
Game::~Game(){
    cout <<"[Debuggi] Destruktorissa: Game-olio poistetaan."<<endl;
}
void Game::play() {
    int playerGuess;
    cout << "Arvaa luku jonka olen arponut 1-" << maxNumber << "." << endl;

    while (true) {
        cout << "Anna arvauksesi: ";
        cin >> playerGuess;
        numOfGuesses++;

        if (playerGuess < oikeaLuku) {
            cout << "Luku on suurempi." << endl;
        } else if (playerGuess > oikeaLuku) {
            cout << "Luku on pienempi." << endl;
        } else {
            cout << "Oikia vastaus!!" << endl;
            break;
        }
    }
}

void Game::printGameResult() const {
    cout << "Oikea luku oli: " << oikeaLuku << endl;
    cout << "Arvasit oikein " << numOfGuesses << " yrityksella." << endl;

}
