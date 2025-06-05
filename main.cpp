#include "Creature.hpp"

#include <iostream>
using namespace std;

int main() {
    // Test default constructor
    Creature defaultCreature;
    defaultCreature.display();
    cout << endl;

    // Test parameterized constructor with valid data
    Creature validCreature("Fire Dragon",Creature::Category::ANIMAL, Creature::School::FIRE, 150, 10, true);
    validCreature.display();
    cout << endl;

    // Test parameterized constructor with invalid health and level
    Creature invalidCreature("Lost Soul",Creature::Category::UNDEAD, Creature::School::DEATH, -50,0, true);
    invalidCreature.display();
    cout << endl;

    //Test parameterized constructor with default values
    Creature defaultValuesCreature("Malistaire");

    defaultValuesCreature.display();
    cout << endl;

    // Test setName function with valid and invalid inputs
    if (validCreature.setName("Phoenix")) {
        cout << "Name set successfully." << endl << endl;
    } else {
    cout << "Failed to set name." << endl << endl;
    }

    validCreature.setName("123Dragon");
    if (validCreature.getName() == "PHOENIX") {
        cout << "Correctly rejected invalid name." << endl << endl;
    }
    validCreature.display();
    cout << endl;

    // Test setters with valid and invalid inputs
    if (validCreature.setHealth(200)) {
        cout << "Health updated successfully." << endl << endl;
    } else {
        cout << "Failed to update health." << endl << endl;
    }

    if (!validCreature.setHealth(-10)) {
        cout << "Correctly rejected invalid health." <<endl << endl;
    }

    if (validCreature.setLevel(20)) {
        cout << "Level updated successfully." << endl << endl;
    } else {
        cout << "Failed to update level." << endl << endl;
    }

    validCreature.setLevel(0);
    if (validCreature.getLevel() == 20) {
        cout << "Correctly rejected invalid level." << endl << endl;
    }

    validCreature.setHostility(false);
    validCreature.display();
    cout << endl;

    // Test getters
    cout << "Name: " << validCreature.getName() << endl;
    cout << "Category: " << validCreature.getCategory() <<endl;
    cout << "School: " << validCreature.getSchool() <<endl;
    cout << "Health: " << validCreature.getHealth() <<endl;
    cout << "Level: " << validCreature.getLevel() << endl;
    cout << "Hostile: " << (validCreature.isHostile() ? "true" : "false") << endl;
    return 0;
}