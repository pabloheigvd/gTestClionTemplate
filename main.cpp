#include <iostream>
#include "sources/Person_lib/Person.h"

int main() {
    Person bob("Bob");
    std::cout << bob.getName() <<  " says: \"Hello, World!\"" << std::endl;
    return 0;
}
