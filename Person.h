//Definicja abstrakcyjnej klasy Person
// instancje tej klasy nie sa tworzone, sa tylko parentowa klasa

#pragma once   
// raz kompilowany plik naglowkowy
// kiedy jest z dwoch zrodel person.h to kompilator uzyje tylko pliku naglowkowego
#include <iostream>

#include "Date.h"


class Person
{
    protected:
        std::string name;
        std::string surname;
        Date birth_date;

    public:
        Person(std::string s, std::string n, Date bd)
        {
            name = s; 
            surname = n; 
            birth_date = bd;
        }

        void print()
        {
            std::cout << "Imie: " << name << "\nNazwisko: " << surname << std::endl;
            birth_date.print_date();
        }

        // przez "virtual" klasa jest abstrakcyjna wiec nie mozemy tworzyc obiektow wiec beata kozidrak odpada :ccc
        virtual void print() const = 0;


};





