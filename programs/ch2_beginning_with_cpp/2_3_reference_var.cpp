/* Author : Praful Vanker 	*/
/* Standard Cpp code 		*/

/* include */
#include <iostream>
/* add namespace */ 
using namespace std;
/* Class Declare */

/* Memeber function definations */


/* Main Program */
int main()
{
	int x = 10, y = 20;
//	int &r;						// error "r declare as refrence but not initialized"
//	int &r = 10; 				//error non const ref type to int &
//	int &r = (const int)10; 	//error non const ref type to int &
	int &r = x;					// ok
//	int &r = y;					// error redeclaration of 'int &r'
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "r = " << r << endl;
	return 0;
}
