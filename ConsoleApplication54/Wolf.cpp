#include "Wolf.h"
#include <iostream>

using namespace std;

Wolf::Wolf(const char* n, int p, AnimalWorld* aw, Continent* c) {
    nameCarnivore = new char[strlen(n) + 1];
    strcpy_s(nameCarnivore, strlen(n) + 1, n);

    aw->AddCarnivore(this);

    power = p;
    continent = c;
}

Wolf::~Wolf() { delete continent; }

void Wolf::Print() {
    cout << "Name: " << nameCarnivore << endl;
    cout << "Power: " << power << endl;
    cout << "Continent: " << continent->GetContinent();
}

void Wolf::EatHerbivore(Herbivore* obj) {
    if (continent->GetContinent() != obj->GetContinent()) {
        cout << "The wolf cannot eat herbivores from different continents!" << endl;
        return;
    }

    cout << nameCarnivore << " is eating: " << obj->GetNameHerbivore() << endl;
    cout << "Wolf's power: " << power << ", Herbivore's weight: " << obj->GetWeight() << endl;

    if (obj->GetWeight() < power)
        power += 10;
    else
        power -= 10;

    obj->SetLife(false);
}
