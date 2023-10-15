#pragma once
#include "Carnivore.h"
#include "Herbivore.h" 

class AnimalWorld {
	Carnivore** carnivore;
	Herbivore** herbivore;
	int size = 5;
public:
	AnimalWorld();
	void mealsHerbivores();
	void nutritionCarnivores();

	void AddCarnivore(Carnivore*);
	void AddHerbivore(Herbivore*);

	~AnimalWorld();

	static unsigned int quantityCarnivore;
	static unsigned int quantityHerbivore;
};