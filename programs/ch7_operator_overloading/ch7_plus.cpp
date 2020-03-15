#include <iostream>
using namespace std;

class A{
    int x;
    public:
    A(int a):x(a){}     // parameterized constructor
    friend A operator+(A a,A b);
    //  A operator+(A a)    // using member function   
    //  {
    //      return A(x + a.x); // due to parameterized constructor we can avoid use of temp variable
    //  }
    void get_data()
    {
        cout << "x = " << x << endl;
    }
};
A operator+(A a, A b)
{
    return A(a.x + b.x);
}
int main()
{
    A a(10),b(20),c(0);
    a.get_data();
    b.get_data();
    c = a + b;      // c = a.operator+(b) usual function call syntax
    c.get_data();
}