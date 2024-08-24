/* A CLI based character sheet manager for 5th edition dnd 
by Blake Gilmore 
Started 24/08/24
Version 1.0 
Compile command so I don't forget
g++ -o program dnd_character_sheet.cpp
then run program.exe from within the directory
*/
#include <iostream>

class Character {
    public:
    int8_t data;
    private:
    int8_t cha;
    int8_t wis;
    int8_t intel; // inteligence uses intel to not overwrite builtin in int type
    int8_t wis;
    int8_t str;

    bool multiclass; // maybe amalgamate
    dnd_class char_class; 

    int8_t speed;
    int16_t hp;


    int8_t proficiency;

};

class dnd_class {
    public:
    int8_t something;
    private:
    int8_t otherthings;
};


int main()
{
  std::cout << "Compiler Working Woohoo";
  return 0;
}