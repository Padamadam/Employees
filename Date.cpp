#include "Date.h"

Date::Date(unsigned int d, unsigned int m, unsigned int y)
{
    if (d > 31 || d < 1)
    {
        throw std::out_of_range("Niepoprawny dzien!");
    }
    else
    {
        day = d;
    }
    if (m > 12 || m < 1)
        throw std::out_of_range("Niepoprawny miesiac!");
    else
    {
        month = m;
    }
    year = y;
}

bool Date::operator<(Date const &other) const
{
    if (this->year != other.year)
        return this->year < other.year;
    else if (this-> month != other.month)
        return this->month < other.month;
    else if(this->day != other.day);
        return this->day < other.day;
}

void Date::print_date() const
{
    std::cout << day << "-" << month << "-" << year << std::endl;
}


