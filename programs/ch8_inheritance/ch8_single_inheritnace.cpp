#include <iostream>
#include <cstring>
using namespace std;
class person
{
    string dob;
    string name;
public:
    void get_person_data()
    {
        cout << "name = " << name << endl
             << "dob  = " << dob << endl;
    }
    void set_person_data(string s_dob, string s_name)
    {
        dob = s_dob;
        name = s_name;
    }
};
class employee : public person
{
    int id;
public:
    void set_employee_data(int a_id)
    {
        id = a_id;
    }
    void get_employee_data()
    {
        cout << "employee id = " << id << endl;
    }
};
int main()
{
    cout << "person Base Class" << endl;
    person praful;
    praful.set_person_data("16/10/1990", "praful");
    praful.get_person_data();
    cout << "employee Derived class" << endl;
    employee e_praful;
    e_praful.set_person_data("16/10/1990", "Praful");
    e_praful.set_employee_data(2154);
    e_praful.get_person_data();
    e_praful.get_employee_data();
    return 0;
}