//RPG.cpp
#include <iostream>
#include <random>
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
    return MAX_HITS_TAKEN > getHitsTaken();
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

/**
 * @brief Prints in the format:
 * "Name: NPC_X  Hits Taken: X  Luck: 0.X00000  Exp: X0.000000  Level: X  Status: Alive or Dead"
 */
void RPG::printStats() {
    if(isAlive()){
        printf("Name: %s\t Hits Taken: %i\t Luck: %f\t Exp: %f\t Level: %i\t Status: Alive\n", name.c_str(), hits_taken, luck, exp, level);
    } else {
        printf("Name: %s\t Hits Taken: %i\t Luck: %f\t Exp: %f\t Level: %i\t Status: Dead\n", name.c_str(), hits_taken, luck, exp, level);
    }
    
}

/**
 * @brief updates name
 * 
 * @param name 
 */
void RPG::setName(string name) {
    this->name = name;
}

/**
 * @brief increase RPG's experience by 50
 * After updating, if RPG's experience is >= 100.0, increase
 * RPG's level by 1, reset their experience to 0, and increase
 * their luck by 0.1
 */
void RPG::updateExpLevel() {
    exp += 50;
    if(exp >= 100){
        level++;
        exp = 0;
        luck += 0.1;
    }
}

/**
 * @brief Hits or misses opponent at random. Luck is a form of defense.
 * The higher the opponent's luck, the more likely the attack will miss.
 * If the attack is a hit, the opponent's hits taken should be incremented by 1.
 * 
 * @param opponent 
 */
void RPG::attack(RPG* opponent) {
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<double> dis(0.0, 1.0);

    float random_num = dis(gen);

    bool hit = random_num > HIT_FACTOR * opponent->getLuck();

    if(hit){
        opponent->setHitsTaken(getHitsTaken() + 1);
    }
}

/**
 * @brief Destroy the RPG::RPG object
 * 
 */
RPG::~RPG() 
{
}