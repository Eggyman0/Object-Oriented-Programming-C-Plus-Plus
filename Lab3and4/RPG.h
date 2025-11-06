// RPG.h
#ifndef RPG_H
#define RPG_H

#include <string>
#include <random>
using namespace std;

const float HIT_FACTOR = 0.05;
const int MAX_HITS_TAKEN = 3;

class RPG{
    public:
        // constructors
        RPG();
        RPG(string name, int hits_taken, float luck, float exp, int level);

        // mutators
        bool isAlive() const;
        void setHitsTaken(int new_hits);

        // accessors
        string getName() const;
        int getHitsTaken() const;
        float getLuck() const;
        float getExp() const;
        int getLevel() const;

        // destructors
        ~RPG();

        // new functions
        void printStats();
        void setName(string name);
        void updateExpLevel();
        void attack(RPG* opponent);
        
    private:
        string name;
        int hits_taken;
        float luck;
        float exp;
        int level;
};
#endif