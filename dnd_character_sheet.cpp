/* A CLI based character sheet manager for 5th edition dnd 
by Blake Gilmore 
Started 24/08/24
Version 1.0 
Compile command so I don't forget
g++ -o program dnd_character_sheet.cpp
then run program.exe from within the directory
*/
#include <iostream>
#include <cstdint>
#include <string> 

using std::cin;
using std::cout;
using std::endl;

class dnd_class {
    public:
    int8_t something;
    private:
    int8_t otherthings;
};

class Character {
    public:
    void update_attributes () { //TODO: change newline chars to use endl
      std::string strang;
      cout << "Please enter attributes \n";
      cout << "Charisma:\n";
      cin >> strang;
      cha = std::stoi(strang);
      cout << "Wisdom:\n";
      cin >> strang;
      wis = std::stoi(strang);
      cout << "Intelligence:\n";
      cin >> strang;
      intel = std::stoi(strang);
      cout << "Dexterity:\n";
      cin >> strang;
      dex = std::stoi(strang);
      cout << "Strength:\n";
      cin >> strang;
      str = std::stoi(strang);
      cout << "Constitution:\n";
      cin >> strang;
      con = std::stoi(strang);
    }

    void print_attributes () { // TODO : make formatting nicer
      cout << std::to_string(cha) << endl;
      cout << std::to_string(wis) << endl;
      cout << std::to_string(intel) << endl;
      cout << std::to_string(dex) << endl;
      cout << std::to_string(str) << endl;
      cout << std::to_string(con) << endl;
    }
    private:
    int8_t cha;
    int8_t wis;
    int8_t intel; // inteligence uses intel to not overwrite builtin in int type
    int8_t dex;
    int8_t str;
    int8_t con;

    bool multiclass; // maybe amalgamate
    dnd_class char_class; 

    int8_t speed;
    int16_t hp;


    int8_t proficiency;

};




int main()
{
  Character hulkenburg;
  hulkenburg.update_attributes();
  hulkenburg.print_attributes();
  return 0;
}