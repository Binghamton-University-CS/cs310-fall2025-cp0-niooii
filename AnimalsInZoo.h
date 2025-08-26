#pragma once

#include "Animal.h"
#include <optional>

class AnimalsInZoo {
public:
  AnimalsInZoo(Animal animal);
  // default constructor initializes numAnimals with 0, and animal w/ a nullopt
  AnimalsInZoo() = default;

  void display(); 

private:
  int numAnimals{};
  std::optional<Animal> animal{};
};
