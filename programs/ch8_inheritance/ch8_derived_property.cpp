#include<iostream>
using namespace std;
class A
{
    int x;
    public:
    int y;
    A():x(10),y(20){
        cout << "Class A Constructor" << endl;
        cout << "x = " << x << " y = " << y << endl;
    }
};
class B : public A
{
    int z;
    public:
    // y = 30;
    B():z(40){
        cout << "class B Constructor" << endl;
        y = 30;
        cout << "y = " << y << " z = " << z << endl;
    }
};
int main()
{
    A a;
    B b;
    return 0;
}
