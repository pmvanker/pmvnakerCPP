/* Author : Praful Vanker 	*/
/* Standard Cpp code 		*/
#include <iostream>
using namespace std;
class student{
    public: 
            int id;
            static int count;
            static void show_count()
            {
                cout << "count = " << count << endl;    // static member 
             // cout << "id = " << id << endl;          // error not static member
            }
            void show_id()
            {
                cout << "id = " << id << endl;
            }
};
int student:: count;
int main()
{
	student s;
    s.id = 0;
    s.count = 0;
    student::show_count();
    s.show_count();
    s.show_id();
	return 0;
}
