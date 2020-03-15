#include<iostream>
using namespace std;
class A{
    int x;
    public:
        A():x(10){
            cout << "construtor called" << endl;
        }
        ~A(){
            cout << "distructor called" << endl;
        }
};
int main()
{
    cout << "a object created " << endl;
    A a;
    {
        cout << "b object created" << endl;
        A b;
    } 
    cout << "b object scope done" << endl;
}