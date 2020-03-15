#include <iostream>
using namespace std;

class A
{
    int x;
    int a[5];
public:
    A(int obj) : x(obj) {
        for(int i=0 ; i< 5; i++)
        {
            a[i] = 0;
        }
    } // parameterized constructor
    friend A operator+(A a, A b);                   // overload + operator
    friend ostream &operator<<(ostream &out, A &obj)
    {
        cout << "x = " << obj.x << endl;
        return out;
    }
    void operator-()                                // overload unary - operator
    {
        x = -x;
    }
    void operator = (A obj)                          // overload = assignment
    {
        x = obj.x;
    }
    int operator[] (int index)                       // overload [] subscipt
    {
        return a[index];
    }
    void operator()(int obj)                        // oberload function()
    {
        x = obj;
    }
    void get_data()
    {
        cout << "x = " << x << endl;
    }
    void set_array(int *p)
    {
        for(int i =0; i<5 ; i++)
        {
            a[i] = p[i];
        }
    }
};
A operator+(A a, A b)
{
    return A(a.x + b.x);
}
int main()
{
    A a(10), b(20), c(0);
    a(50);                                              // using function operator overload
    a.get_data();
    int x[5] = {1,2,3,4,5};
    a.set_array(x);
    for(int i = 0; i < 5 ; i++)
    {
        cout << "a[" << i << "] = " << a[i] << endl;    // using object with subscipt operator
    }
    a.get_data();
    b.get_data();
    c = a + b;                                          // c = a.operator+(b) usual function call syntax
    c.get_data();
    cout << a << b << c << endl;                        // overload insersion operaotr using friend function
}