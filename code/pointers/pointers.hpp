//
// Created by xuliang on 2021/11/20.
//

#ifndef CPLUSPLUSCOURSE_POINTERS_HPP
#define CPLUSPLUSCOURSE_POINTERS_HPP

#include <iostream>
#include <chrono>
#include <thread>
#include <vector>
#include <variant>

class Particle {
public:
    Particle() { };
    ~Particle() { };
};

class Ion : public Particle {
public:
    Ion() { std::cout << "Construct Ion\n"; };
    ~Ion() { std::cout << "Destruct Ion\n"; };
};

std::vector<Ion*> rawIonList;
std::vector<std::shared_ptr<Ion>> smartIonList;


#endif //CPLUSPLUSCOURSE_POINTERS_HPP
