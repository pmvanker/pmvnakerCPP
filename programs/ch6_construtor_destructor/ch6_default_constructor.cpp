#include <iostream>
using namespace std;
class A{
    int x;
    public:
        // A(){}                       // default constructor 
        // A(){                        // default constructor 
        //     x = 0;
        // }
        A():x(0){};                    // default constructor
        void get_data()
        {
            cout << "x = " << x << endl;
        }
};
int main()
{
    A obj;
    obj.get_data();
    return 0;
}