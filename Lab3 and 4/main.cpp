#include <iostream>
#include "RPG.h"
#include "Game.h"

using namespace std;

int main(){
    Game npc_brawl = Game();
    int num_players = 10;

    npc_brawl.generatePlayers(num_players);
    npc_brawl.gameLoop();
    npc_brawl.printFinalResults();

    return 0;
}