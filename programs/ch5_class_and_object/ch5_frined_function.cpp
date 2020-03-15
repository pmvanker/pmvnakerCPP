#include <iostream>
using namespace std;
class A;
class B;

int sum(class A, class B);
class A
{
    int x;
    friend int sum(class A, class B);

public:
    void get_data()
    {
        cout << "x = " << x << endl;
    }
    void set_data(int ax)
    {
        x = ax;
    }
};
class B
{
    int y;
    friend int sum(class A, class B);

public:
    void get_data()
    {
        cout << "y = " << y << endl;
    }
    void set_data(int ay)
    {
        y = ay;
    }
};
int sum(A ax, B by)
{
    return (ax.x + by.y);
}
int main()
{
    A a;
    B b;
    a.set_data(10);
    b.set_data(20);
    cout << "sum of a + b = " << sum(a, b) << endl;
}
