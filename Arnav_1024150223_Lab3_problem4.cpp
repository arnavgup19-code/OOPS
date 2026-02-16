// Q4(a): Display players in circular linked list

#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

struct PlayerNode {
    int playerId;
    char playerName[50];
    struct PlayerNode* nextPlayer;
};

PlayerNode* createPlayerNode(int playerId, const char* name) {
    PlayerNode* newPlayer = (PlayerNode*)malloc(sizeof(PlayerNode));
    newPlayer->playerId = playerId;
    strcpy(newPlayer->playerName, name);
    newPlayer->nextPlayer = NULL;
    return newPlayer;
}

void displayAllPlayers(PlayerNode* headPlayer) {
    if (headPlayer == NULL) return;
    PlayerNode* currentPlayer = headPlayer;
    do {
        cout << currentPlayer->playerId << " " << currentPlayer->playerName << endl;
        currentPlayer = currentPlayer->nextPlayer;
    } while (currentPlayer != headPlayer);
}

int main() {
    PlayerNode* gameCircle = createPlayerNode(1,"PlayerOne");
    gameCircle->nextPlayer = createPlayerNode(2,"PlayerTwo");
    gameCircle->nextPlayer->nextPlayer = gameCircle;

    displayAllPlayers(gameCircle);
    return 0;
}
