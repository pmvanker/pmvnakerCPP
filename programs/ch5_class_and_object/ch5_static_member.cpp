/* Author : Praful Vanker 	*/
/* Standard Cpp code 		*/
#include <iostream>
using namespace std;
class Author{
    private:
            int x;
            static int private_static_z;
    public:
            static int z;
            void get_data();
            void set_data(int,int);
};
int Author :: z;                        // static member defination
int Author :: private_static_z;         // static member defination
void Author ::get_data()                // member function defination
{
    cout << " static member z = " << z <<endl;
    cout << " private static member z = " << private_static_z <<endl;
    cout << " member x = " << x << endl;
}
void Author ::set_data(int a_z,int a_x)
{
    private_static_z = a_z;
    x = a_x;
}
int main()
{
	Author a,b;
    a.set_data(10,100);         // set data and initialze z
    a.get_data();
    a.z = 500;                  // static member can access with object
    a.get_data();
    Author:: z = 999;           // public static member can access outside of class
    cout << "public_static_z = " << Author:: z << endl;
    // Author:: private_static_z = 1000;   // error not private can not acess outside of class
    b.set_data(20,200);
    b.get_data();
	return 0;
}
