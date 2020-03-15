#include <iostream>
using namespace std;
class A{
    int x;
    public:
        A():x(10){}
        void get_data()
        {
            cout << " x = " << x << endl;
        }
        void operator -()   // unary - operator overloading
        {
            x = -x;
        }
};
int main()
{
    A a;
    a.get_data();
    -a;
    a.get_data();
}
