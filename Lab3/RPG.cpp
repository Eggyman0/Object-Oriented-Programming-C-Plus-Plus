//RPG.cpp
#include <iostream>
#include <string>
#include "RPG.h"

/**
 * @brief Default RPG Constructor
 * 
 */
RPG::RPG(){
    name = "NPC";
    hits_taken = 0;
    luck = 0.1;
    exp = 50.0;
    level = 1;
    //inventory.push_back("potion");
}

/**
 * @brief Overloaded RPG Constructor
 * 
 * @param name Name of character
 * @param hits_taken How much damage character has taken
 * @param luck Starting luck stat
 * @param exp Starting experience of character
 * @param level Starting level of character
 */
RPG::RPG(string name, int hits_taken, float luck, float exp, int level){
    this->name = name;
    this->hits_taken = hits_taken;
    this->luck = luck;
    this->exp = exp;
    this->level = level;
};

/**
 * @brief returns whether hits_taken is less than Max_HITS_TAKEN
 * In other words, a player is alive as long as they have not been hit MAX_HITS_TAKEN times.
 * 
 * @return true : player is alive
 * @return false  : player is unalive
 */
bool RPG::isAlive() const{
    if (MAX_HITS_TAKEN == getHitsTaken()){
        return false;
    } else {
        return true;
    }
}

/**
 * @brief sets hits_taken to new_hits
 * 
 * @param new_hits any hits that were taken during the turn
 */
void RPG::setHitsTaken(int new_hits){
    hits_taken = new_hits;
}

// Acessors
string RPG::getName() const{
    return name;
}

int RPG::getHitsTaken() const{
    return hits_taken;
}

float RPG::getLuck() const{
    return luck;
}

float RPG::getExp() const{
    return exp;
}

int RPG::getLevel() const{
    return level;
}