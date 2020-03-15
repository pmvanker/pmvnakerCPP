#include <iostream>
using namespace std;

class base
{
    int x;
    public:
        base():x(10){}
        virtual void v_show()
        {
            cout << "base x = " << x << endl;
        }
        void show()
        {
            cout << "base x = " << x << endl;
        }
};
class derived: public base
{
    int y;
    public:
        derived():y(20){}
        void v_show()
        {
            cout << "Derived y = " << y << endl;
        }
        void show()
        {
            cout << "Derived y = " << y << endl;
        }
};
int main()
{
    base b;
    derived d;
    base *bptr;
    cout << "pointing to Base calling v_show" << endl;
    bptr = &b;
    bptr->v_show();
    cout << "pointing to Derived calling v_show" << endl;
    bptr = &d;
    bptr->v_show();
    cout << "pointing to Base calling show" << endl;
    bptr = &b;
    bptr->show();
    cout << "pointing to Derived calling show" << endl;
    bptr = &d;
    bptr->show();
    return 0;
}