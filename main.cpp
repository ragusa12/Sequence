#include <iostream>


//Spades: 0-11, Diamonds: 12-23, Clubs: 24-35, Heart: 36-47, Joker: -1
int board[] = {
    -1, 17, 18, 19, 20, 21, 22, 23, 12, -1,
    16, 38, 37,  1,  2,  3,  4,  5,  6, 24,
    15, 39, 23, 12, 24, 35, 34, 33,  7, 35,
    14, 40, 22, 46, 45, 44, 43, 32,  8, 34,
    13, 41, 21, 47, 38, 37, 42, 31,  9, 33,
     0, 42, 20, 36, 39, 40, 41, 30, 10, 32,
    11, 43, 19, 25, 26, 27, 28, 29, 11, 31,
    10, 44, 18, 17, 16, 15, 14, 13,  0, 30,
     9, 45, 46, 47, 36, 25, 26, 27, 28, 29,
    -1,  8,  7,  6,  5,  4,  3,  2,  1, -1
};

// none: 0, Jokes: 3, red: 2, placed_red: 1, blue: 4, placed_blue: 5,
int placedBoard[100] = {0};

void playGame();
void setJokers();

int main() {

    playGame();

    return 0;
}

void playGame() {
    placedBoard[100] = {0};
    setJokers();

    bool gameOver = false;
    bool redTurn = true;

    while ( !gameOver ) {
        
    }
}

void setJokers() {
    placedBoard[0] = -1;
    placedBoard[9] = -1;
    placedBoard[99] = -1;
    placedBoard[89] = -1;
}