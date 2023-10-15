#pragma once

class Herbivore {
protected:
	char* nameHerbivore;
	float weight;
	bool life;
public:
	void Eat();

	virtual void Print() = 0;

	char* GetNameHerbivore() const;
	float GetWeight() const;
	bool GetLife() const;


	virtual char* GetContinent() const = 0;


	void SetNameHerbivore(const char*);
	void SetWeight(float);
	void SetLife(bool);
};