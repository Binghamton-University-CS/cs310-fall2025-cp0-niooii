#include "AnimalsInZoo.h"

AnimalsInZoo::AnimalsInZoo(Animal animal_) : animal(animal_), numAnimals(1) {}

void AnimalsInZoo::display() {
    std::cout << "Number of animals: " << numAnimals << "." << std::endl;
    if (auto a = animal) {
        a.value().display();
    }
}
