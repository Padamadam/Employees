#include "Manager.h"
#include <iostream>

    void Manager::print() const
    {
        // std::cout << "Imie: " << name << "\nNazwisko: " << surname 
        // << "\nBonus: " << bonus << std::endl;
        // birth_date.print_date();
        Employee::print();
        std::cout << "Bonus: " << bonus << std::endl;
    }
