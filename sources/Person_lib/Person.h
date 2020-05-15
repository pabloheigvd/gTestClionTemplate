//
// Created by pablo-pc on 14.05.2020.
//

#ifndef GOOGLETEST_PERSON_H
#define GOOGLETEST_PERSON_H

#include <string>

using namespace std;

/**
 * @class Person a person with a name
 */
class Person {
private:
    string _name;

public:
    /**
     * @brief constructor
     * @param name the name of the person
     */
    Person(string name);

    /**
     * @brief getter of name attribute
     */
    const string &getName() const;
};


#endif //GOOGLETEST_PERSON_H
