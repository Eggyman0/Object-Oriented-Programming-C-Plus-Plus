#include <iostream>
#include <string>
#include <vector>
#include "Pokemon.h"
using namespace std;

Pokemon::Pokemon(){
    name = "unidentified";
    hp = 0;
    attack = 0;
    defense = 0;
    cout << "Default Constructor (Pokemon)\n";
}

Pokemon::Pokemon(string name, int hp, int att, int def, vector<string> type){
    this->name = name;
    this->hp = hp;
    attack = att;
    defense = def;
    this->type = type;
    cout << "Overloaded Constructor (Pokemon)\n";
};

void Pokemon::speak(){
    cout << "...\n";
}

void Pokemon::printStats(){
    printf("Name: %s\t Hp: %i\t DEF: %i\t ATK: %i\t\n", name.c_str(), hp, defense, attack);
    cout << "Type: ";
    for(int i=0; i < type.size(); i++){
        cout << type[i] << "\t";
    }
    cout << endl;
}