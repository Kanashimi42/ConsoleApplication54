#include "Africa.h"

using namespace std;

Africa::Africa() {
}

Africa::Africa(const char* c, float s, float t, float h) :
    Continent(c, s, t, h) {}

void Africa::Print() {
    cout << "Continent: " << continent << endl;
    cout << "Square: " << square << endl;
    cout << "Temperature: " << temperature << endl;
    cout << "Humidity: " << humidity;
}
