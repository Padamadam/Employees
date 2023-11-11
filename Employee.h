#include "Person.h"



class Employee : public Person
{
    private:
        unsigned int employee_id;
        double salary;
        Date date_employed;
    public:
        Employee(std::string na, std::string sur,
            unsigned int eid, double sal, Date bd, Date de):Person(na, sur, bd)
            {
                employee_id = eid;
                salary = sal;
                if(de < bd)
                    throw std::out_of_range("Employee employed before being born");
                date_employed = de;
            }

        unsigned int get_id() const {return employee_id;};
        bool operator<(const Employee &em1) const;
        void print() const;
        double get_salary();  //TODO
};