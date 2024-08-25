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
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::find;

class dnd_class {
    public:
    bool pick_class () { 
      std::string class_strang;
      cout << "Please select class" << endl;
      cout << "Artificer, Barbarian, Bard, Cleric, Druid, Fighter, Monk, Paladin, Ranger, Rogue, Sorcerer, Warlock, Wizard" << endl;
      cin >> class_strang;
      bool in_vec = std::find(class_vec.begin(), class_vec.end(), class_strang) != class_vec.end();
      if (in_vec == false ) {
        cerr << "Invalid class" << endl;
        return true;
      } else {
        main_class = class_strang;
        return false;
      }
      return false;
    }

    private:
    std::string main_class;
    std::string sub_class;
    std::vector<std::string> class_vec = {"Artificer", "Barbarian", "Bard", "Cleric", "Druid", "Fighter", "Monk", "Paladin", "Ranger", "Rogue", "Sorcerer", "Warlock", "Wizard"};
    bool multiclass;
};

class character {
    public:
    void update_attributes () { 
      std::string strang;
      cout << "Please enter attributes" << endl;
      cout << "Charisma:" << endl;
      cin >> strang;
      cha = std::stoi(strang);
      cout << "Wisdom:" << endl;
      cin >> strang;
      wis = std::stoi(strang);
      cout << "Intelligence:" << endl;
      cin >> strang;
      intel = std::stoi(strang);
      cout << "Dexterity:" << endl;
      cin >> strang;
      dex = std::stoi(strang);
      cout << "Strength:" << endl;
      cin >> strang;
      str = std::stoi(strang);
      cout << "Constitution:" << endl;
      cin >> strang;
      con = std::stoi(strang);
    }

    void print_attributes () { 
      cout << "Charisma: " << std::to_string(cha) << endl;
      cout << "Wisdom: " << std::to_string(wis) << endl;
      cout << "Intelligence: " << std::to_string(intel) << endl;
      cout << "Dexterity: " << std::to_string(dex) << endl;
      cout << "Strength: " << std::to_string(str) << endl;
      cout << "Constitution: " << std::to_string(con) << endl;
    }
    private:
    int8_t cha;
    int8_t wis;
    int8_t intel; // inteligence uses intel to not overwrite builtin in int type
    int8_t dex;
    int8_t str;
    int8_t con;

    dnd_class char_class; 

    int8_t speed;
    int16_t hp;

    int8_t level;
    int8_t proficiency;

};




int main()
{
  character hulkenburg;
  dnd_class haas;
  bool err_check = 1;
  while (err_check ==1) {
    err_check = haas.pick_class(); 
  }
  cout << "Complete" << endl;
  //hulkenburg.update_attributes();
  //hulkenburg.print_attributes();
  return 0;
}