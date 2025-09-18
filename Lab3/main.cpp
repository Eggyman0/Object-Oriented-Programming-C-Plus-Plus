#include <iostream>
#include <string>
#include "RPG.h"
using namespace std;

int main(){
    RPG p1 = RPG("Wiz", 0, 0.2, 60, 1);
    RPG p2 = RPG();

    // Show stats for Player 1
    printf("%s Current Stats\n", p1.getName().c_str());
    printf("Hits Taken: %i\t Luck: %f\t Exp: %f\t Level: %i\n", p1.getHitsTaken(), p1.getLuck(), p1.getExp(), p1.getLevel());

    // Show states for Player 2
    printf("%s Current Stats\n", p2.getName().c_str());
    printf("Hits Taken: %i\t Luck: %f\t Exp: %f\t Level: %i\n", p2.getHitsTaken(), p2.getLuck(), p2.getExp(), p2.getLevel());

    p2.setHitsTaken(3);

    cout << "\n" << p2.getName() << " hits taken " << p2.getHitsTaken();
    
    if (p2.isAlive()){
        printf("\n%s is alive", p2.getName().c_str());
    } else {
        printf("\n%s is dead", p2.getName().c_str());
    }

    return 0;
}