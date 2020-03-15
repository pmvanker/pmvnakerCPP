#include<iostream>
using namespace std;

class A
{
    int x;
    public:
        A(int a):x(a){};
        void get_data()
        {
            cout << "x = " << x << endl;
        }
};
int main()
{
    A a(20);
    a.get_data();
}