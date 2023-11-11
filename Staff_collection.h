template <typename T> class Staff_collection 
{
    private: 
        int staff_number;
        T** staff;
        T* find_staff_emp_id(unsigned int emp_id)
        {
             for(int i=0; i<staff_number; i++)
            {
                if(staff[i]->get_id() == emp_id)
                    return staff[i];
            }
            throw std::invalid_argument("No such worker id");
        }
    public:
        Staff_collection():staff_number(0), staff(nullptr){}
        ~Staff_collection()
        {
            for(int i=0; i<staff_number; i++)
                delete staff[i];
            delete staff;
        }
        int get_num() {return this->staff_number;};
        void print()
        {
            for(int i=0; i<staff_number; i++)
            {
                staff[i]->print();
            }
        }
        

        void add_worker(T *worker)
        {
            T** new_staff = new T*[staff_number+1];
            for(int i=0; i < staff_number; i++)
                new_staff[i] = staff[i];
            new_staff[staff_number] = worker;
            delete[] staff;
            staff = new_staff;
            staff_number++;
        }

        void delete_worker(unsigned int emp_id)
        {
            delete find_staff_emp_id(emp_id);
            staff_number--;
            T **new_staff = new T*[staff_number];
            for(int i=0; i<staff_number; i++)
                new_staff[i] = staff[i];
            delete[] staff;
            staff = new_staff;
        }

        T& operator[](unsigned int emp_id)
        {
            *find_staff_emp_id(emp_id);
        }
};