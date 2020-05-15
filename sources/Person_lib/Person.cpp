//
// Created by pablo-pc on 14.05.2020.
//

#include "Person.h"

Person::Person(string name): _name(name) {}

const string &Person::getName() const { return _name; }
