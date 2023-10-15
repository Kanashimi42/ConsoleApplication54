#include "Lion.h"
#include <iostream>

using namespace std;

Lion::Lion(const char* n, int p, AnimalWorld* aw, Continent* c) {
    nameCarnivore = new char[strlen(n) + 1];
    strcpy_s(nameCarnivore, strlen(n) + 1, n);

    aw->AddCarnivore(this);

    power = p;
    continent = c;
}
Lion::~Lion() { delete continent; }

void Lion::Print() {
    cout << "Animal: " << nameCarnivore << endl;
    cout << "Power: " << power << endl;
    cout << "Resides in: " << continent->GetContinent();
}

void Lion::EatHerbivore(Herbivore* obj) {
    if (continent->GetContinent() != obj->GetContinent()) {
        cout << "They are from different continents!" << endl;
        return;
    }

    cout << nameCarnivore << " is eating " << obj->GetNameHerbivore() << endl;
    cout << "Lion's power: " << power << ", Prey's weight: " << obj->GetWeight() << endl;

    if (obj->GetWeight() < power)
        power += 10;
    else
        power -= 10;

    obj->SetLife(false);
}
