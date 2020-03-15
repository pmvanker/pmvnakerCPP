/* Author : Praful Vanker 	*/
/* Standard Cpp code 		*/

/* include */
#include <iostream>
#include <cstring>
/* add namespace */ 
using namespace std;
/* Class Declare */
class persion
{
    private: int pwd;
    public:int id;
           string name;
           int get_data();
           int set_pwd(int);
};
int persion :: get_data()
{
    cout << "name : " <<name << endl
         << "id :" << id << endl
         << "pwd :" << pwd << endl;
}
int persion :: set_pwd(int a_pwd)
{
    pwd = a_pwd;
}

/* Main Program */
int main()
{
    persion praful;
    praful.id = 2154;
    praful.name = "Praful Vanker";
    // praful.pwd  = 1234; // error private within context
    praful.set_pwd(1234);
    praful.get_data();
	return 0;
}
