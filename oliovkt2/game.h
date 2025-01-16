#ifndef GAME_H
#define GAME_H


class Game
{
public:
    Game();
    ~Game();
    Game(int maxNumber);

    void play();

    void printGameResult() const;

private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;
    int oikeaLuku;
};

#endif // GAME_H
