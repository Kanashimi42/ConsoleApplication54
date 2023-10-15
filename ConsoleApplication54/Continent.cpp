#include "Continent.h"

using namespace std;

Continent::Continent() {
    continent = nullptr;
    square = 0;
    temperature = 0;
    humidity = 0;
}

Continent::Continent(const char* c, double s, double t, double h) {
    continent = new char[strlen(c) + 1];
    strcpy_s(continent, strlen(c) + 1, c);

    square = s;
    temperature = t;
    humidity = h;
}

Continent::~Continent() {
    delete continent;
}

char* Continent::GetContinent() const { return continent; }
double Continent::GetSquare() const { return square; }
double Continent::GetTemperature() const { return temperature; }
double Continent::GetHumidity() const { return humidity; }

void Continent::Input() {
    char buff[50];

    cout << "Enter continent: ";
    cin >> buff;

    continent = new char[strlen(buff) + 1];
    strcpy_s(continent, strlen(buff) + 1, buff);

    cout << "Enter square: ";
    cin >> square;

    cout << "Enter temperature: ";
    cin >> temperature;

    cout << "Enter humidity: ";
    cin >> humidity;
}
