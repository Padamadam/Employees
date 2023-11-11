
#include "Person.h"
#include "Manager.h"
#include "Staff_collection.h"

template <typename T> const T& compare(const T& obj1, const T& obj2)
{
    //potrzebny iterator
    //jesli obj < obj2 to zwracaj obj1, wp.p. obj2
    if(obj1<obj2) return obj1;
    else return obj2;
}


// ZOSTALY NAPISANE FUNKCJE TESTUJACE ALE PRZEKAZYWANIE OBIEKTU STAFF
// POWODOWALO ZATRZYMANIE PROGRAMU, DLATEGO SA TU NIEUZYWANE

// bool test_add_worker(Employee* emp1, Employee* emp2, Employee* emp3)
// {
//     Staff_collection<Employee> staff;
//     staff.add_worker(emp1);
//     staff.add_worker(emp2);
//     staff.add_worker(emp3);
//     if(staff.get_num()!=3)
//         return false;
//     else if(emp2->get_id() != 2) 
//         return false;
//     return true;
// }

// bool const test_operator(Staff_collection<Employee> &staff)
// {
//     // Staff_collection<Employee> staff;
//     // staff.add_worker(emp1);
//     // staff.add_worker(emp2);
//     // staff.add_worker(emp3);
//     if(staff[1].get_id() != 1)
//         return false;
//     return true;
// }

// bool test_delete_worker(Staff_collection<Employee> &staff)
// {
//     // Staff_collection<Employee> staff;
//     // staff.add_worker(emp1);
//     // staff.add_worker(emp2);
//     // staff.add_worker(emp3);
//     // staff.delete_worker(2);
//     if(staff.get_num()!= 2)
//         return false;
//     return true;
// }

int main()
{  
    // klasa person nie moze tworzyc obiektow
    //Person Beata("Beata", "Kozidrak", Date(3, 7, 2021));
    //Beata.print();
    Employee *ptr = new Manager("Jose", "Arcadio", 1, 1000, Date(11, 5, 1950), Date(8, 5, 1955),
    100);
    Employee *ptr2 = new Manager("Aureliano", "Buendia", 2, 2000, Date(4, 6, 1952), Date(9, 12, 1975),
    200);
    Employee *ptr3 = new Manager("Santa", "Sofia", 3, 5000, Date(29, 2, 1972), Date(9, 12, 2002),
    400);

    std::cout << "Test metody print dla klasy Employee oraz Manager:" << std::endl;
    ptr -> print();
    ptr2 -> print();
    ptr3 ->print();
    std::cout << "Testy metody print powiodly sie\n\n";

    std::cout << "Test funkcji szablonowej compare:" << std::endl;
    if(compare(5, 2) == 2)
        std::cout<<"Test powiodl sie\n\n";

    Date d1 = Date(11, 5, 2021);
    Date d2 = Date(3, 7, 2021);
    std::cout << "Test funkcji szablonowej compare dla klasy Date oraz przeciazonego operatora<:" << std::endl;
    Date grt_d = compare(d1, d2);
    if(grt_d.get_day()==11 && grt_d.get_month()==5 && grt_d.get_year()==2021)
        std::cout<<"Test powiodl sie\n\n";

    std::cout << "Testy klasy szablonowej Staff_colection\n\n";

    std::cout <<"Test metody add_worker" << std::endl;
    Staff_collection<Employee> staff;
    staff.add_worker(ptr);
    staff.add_worker(ptr2);
    staff.add_worker(ptr3);
    if(staff.get_num()!=3)
        return false;
    else if(ptr2->get_id() != 2)   
        std::cout<<"Test add worker nie powiodl sie"<<std::endl;
    std::cout<<"Test add_worker powiodl sie\n\n";
    
    std::cout <<"Test operatora przeciazonego []"<<std::endl;
    if(staff[1].get_id() != 1)
        std::cout<<"Test operatora[] nie powiodl sie"<<std::endl;
    std::cout<<"Test operatora przeciazonego [] powiodl sie\n\n";
    
    std::cout <<"Test metody delete_worker []"<<std::endl;
    staff.delete_worker(3);
    if (staff.get_num() != 2)
        std::cout<<"Test delete worker nie powiodl sie"<<std::endl;
    std::cout<<"Test metody delete_worker powiodl sie\n\n";
    std::cout<<"Koniec testow";


    return 0;
}

