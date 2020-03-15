#include <iostream>
using namespace std;

class A{
    int x;
    public:
        A():x(10){cout << "default constructor called" << endl;}
        A(A &a){
            cout << "copy constructor called " << endl;
            x = a.x;
        }
        void set_data(int a)
        {
            x = a;
        }
        void get_data()
        {
            cout << "x = " << x << endl;
        }
};
int main()
{
    A a;                  // a object created
    a.get_data();           
    a.set_data(100);
    a.get_data();
    A b(a);               // b object created with help of copy constructor
    b.get_data();
}