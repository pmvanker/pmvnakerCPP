#include <iostream>
using namespace std;
class A
{
public:
    int x;
    A()
    {
        cout << "constructor A" << endl;
    }
};
class B1 : public A
{
public:
    B1()
    {
        cout << "constructor B1" << endl;
    }
};
class B2 : public A
{
public:
    B2()
    {
        cout << "constructor B2" << endl;
    }
};
class C : public B1,public B2
{
public:
    C()
    {
        cout << "constructor C" << endl;
    }
};

int main()
{
    A a;
    cout << endl;
    B1 b1;
    cout << endl;
    B2 b2;
    cout << endl;
    C c;
    return 0;
}