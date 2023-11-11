#include "Employee.h"

    void Employee::print() const
    {
        std::cout << "Imie: " << name << "\nNazwisko: " << surname << std::endl;
        birth_date.print_date();
    }

    double Employee::get_salary()
    {
        return this->salary;
    }

    bool Employee::operator<(const Employee &em1) const
    {
        return salary < em1.salary;
    }
