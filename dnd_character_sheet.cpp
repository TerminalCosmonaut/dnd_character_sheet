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
    void pick_class () { 
      std::string class_strang;
      cout << "Please select class" << endl;
      cout << "Artificer, Barbarian, Bard, Cleric, Druid, Fighter, Monk, Paladin, Ranger, Rogue, Sorcerer, Warlock, Wizard" << endl;
      cin >> class_strang;
      bool in_vec = std::find(class_list_vec.begin(), class_list_vec.end(), class_strang) != class_list_vec.end();
      while (in_vec == false ) {
        cerr << "Invalid class" << endl;
        cout << "Please select class" << endl;
        cout << "Artificer, Barbarian, Bard, Cleric, Druid, Fighter, Monk, Paladin, Ranger, Rogue, Sorcerer, Warlock, Wizard" << endl;
        cin >> class_strang;
        in_vec = std::find(class_list_vec.begin(), class_list_vec.end(), class_strang) != class_list_vec.end();
      }
      main_class = class_strang;
      if (class_strang == "Artificer"){ // This is ugly but should only have to do it once
        iterable_class = 0;
      } if (class_strang == "Barbarian"){
        iterable_class = 1;
      } if (class_strang == "Bard"){
        iterable_class = 2;
      } if (class_strang == "Cleric"){
        iterable_class = 3;
      } if (class_strang == "Druid"){
        iterable_class = 4;
      } if (class_strang == "Fighter"){
        iterable_class = 5;
      } if (class_strang == "Monl"){
        iterable_class = 6;
      } if (class_strang == "Paladin"){
        iterable_class = 7;
      } if (class_strang == "Ranger"){
        iterable_class = 8;
      } if (class_strang == "Rogue"){
        iterable_class = 9;
      } if (class_strang == "Sorcerer"){
        iterable_class = 10;
      } if (class_strang == "Warlock"){
        iterable_class = 11;
      } if (class_strang == "Wizard"){
        iterable_class = 12;
      }
      return;
      }
      
    //generic method to pick a subclass for any class, automatically calls the class specific method
    void pick_sub_class_generic () { // TODO make various subclass pickers
      switch(iterable_class) {
        case 0:
        pick_sub_class_artificer();
        break;
        case 1:
        break;
        case 2:
        break;
        case 3:
        break;
        case 4:
        break;
        case 5:
        break;
        case 6:
        break;
        case 7:
        break;
        case 8:
        break;
        case 9:
        break;
        case 10:
        break;
        case 11:
        break;
        case 12:
        break;

    }
    }
    private:
    // picks a subclass for Artificer, private should only be called from pick_sub_class_generic or to be built level up and multiclass functions
    void pick_sub_class_artificer () {
      std::string sub_class_strang;
      std::string cin_flushed;
      cout << "Please select class" << endl;
      cout << "Armorer, Alchemist, Artillerist, Battle Smith" << endl;
      getline(cin,cin_flushed); // hacky way to clear previous main class input and avoid first input always erroring could be improved
      getline(cin, sub_class_strang); 
      bool in_vec = std::find(artificer_sublcasses_vec.begin(), artificer_sublcasses_vec.end(), sub_class_strang) != artificer_sublcasses_vec.end();
      while (in_vec == false ) {
        cerr << "Invalid class" << endl;
        cout << "Please select class" << endl;
        cout << "Armorer, Alchemist, Artillerist, Battle Smith" << endl;
        getline(cin, sub_class_strang);
        in_vec = std::find(artificer_sublcasses_vec.begin(), artificer_sublcasses_vec.end(), sub_class_strang) != artificer_sublcasses_vec.end();
      }
      sub_class = sub_class_strang;
      return;
    }
    
    std::string main_class;
    std::string sub_class;
    int8_t iterable_class;
    std::vector<std::string> class_list_vec = {"Artificer", "Barbarian", "Bard", "Cleric", "Druid", "Fighter", "Monk", "Paladin", "Ranger", "Rogue", "Sorcerer", "Warlock", "Wizard"};
    std::vector<std::string> artificer_sublcasses_vec = {"Armorer", "Alchemist", "Artillerist", "Battle Smith"};
    //int8_t iterable_vector[13] = {0,1,2,3,4,5,6,7,8,9,10,11,12};
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
  haas.pick_class(); 
  haas.pick_sub_class_generic();
  cout << "Complete" << endl;
  //hulkenburg.update_attributes();
  //hulkenburg.print_attributes();
  return 0;
}