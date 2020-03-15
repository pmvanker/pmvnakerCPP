#include <iostream>
using namespace std;

/* Create a static member that is pointer to current class
 * restrict constructor by making private
 * public static member function client can access the single, static instance.
*/
class Singletone
{
    private:
        Singletone(): value(0){}        // default constructor
        Singletone(const Singletone&);  // copy constructor
        Singletone& operator=(const Singletone&); // assignment operator ovrload
        static Singletone* instant; 
    protected:
        int value;
    public:
        static Singletone* getInstance();   // client can get instance
        void setValue(int val){value = val;}
        int getValue(){return (value);}
};

Singletone* Singletone:: instant = NULL;  // static instance pointer declare

Singletone* Singletone::getInstance()   // static function to get instance only once
{
    if(instant == NULL)
    {
        instant = new Singletone();
    }
    return instant;
}

int main()
{
    Singletone *p = Singletone::getInstance();
    p->setValue(10);
    cout << "address : "<< p << "p value = " << p->getValue()<< endl;

    Singletone *p1 = Singletone::getInstance();
    p1->setValue(20);
    cout << "address : "<< p1 << "p1 value = " << p1->getValue()<< endl;
    
    Singletone *p2 = Singletone::getInstance();
    cout << "address : "<< p2 <<"p2 value = " << p2->getValue()<< endl;

    return (0);
}