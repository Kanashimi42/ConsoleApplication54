#include "Buffalo.h"

using namespace std;

Buffalo::Buffalo(const char* n, float w, AnimalWorld* aw, Continent* c) {
    nameHerbivore = new char[strlen(n) + 1];
    strcpy_s(nameHerbivore, strlen(n) + 1, n);

    aw->AddHerbivore(this);

    life = true;
    weight = w;
    continent = c;
}

Buffalo::~Buffalo() { delete continent; }

char* Buffalo::GetContinent() const { return continent->GetContinent(); }

void Buffalo::Print() {
    cout << "Herbivore: " << nameHerbivore << endl;
    cout << "Weight: " << weight << endl;
    cout << "Resides in: " << continent->GetContinent() << endl;
    printf("Status: %s", life == true ? "alive" : "not alive");
}
