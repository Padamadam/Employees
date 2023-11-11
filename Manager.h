#include "Employee.h"


class Manager : public Employee
{
    private:
        double bonus;
    public:
        Manager(std::string na, std::string sur,
            unsigned int eid, double sal, Date bd, Date de,
            double bon):Employee(na, sur, eid, sal, bd, de)
        {
            bonus = bon;
        }
    void print() const;

};