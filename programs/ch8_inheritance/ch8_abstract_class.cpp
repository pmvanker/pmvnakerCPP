#include <iostream>
using namespace std;

class Vehicle                       // Abstract Class
{
    private:
        int id;
    public:
        virtual void show_id() = 0; // pure virtual fun
};
class Lmw: public Vehicle           // Derived Class
{
    public:
        void show_id(){}            // have to override 
};
class Hmw: public Vehicle           // Derived Class
{
    public:
    void show_id(){}                // have to overide
};

int main(){ 
    Lmw l;
    l.show_id();
    return 0;
}