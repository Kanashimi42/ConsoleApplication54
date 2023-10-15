#include "NorthAmerica.h"

using namespace std;

NorthAmerica::NorthAmerica() {
}

NorthAmerica::NorthAmerica(const char* c, float s, float t, float h) :
	Continent(c, s, t, h) {
}

void NorthAmerica::Print() {
	cout << "Continent: " << continent << endl;
	cout << "Square: " << square << endl;
	cout << "Temperature: " << temperature << endl;
	cout << "Humidity: " << humidity;
}
