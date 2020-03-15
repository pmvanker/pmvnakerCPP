/* Author : Praful Vanker 	*/
/* Standard Cpp code 		*/

/* include */
#include <iostream>
/* add namespace */ 
using namespace std;
/* Class Declare */

/* Memeber function definations */

int m = 10;
/* Main Program */
int main()
{
	int m = 20;
	{
		int m = 30;
		cout << "inside block m = "<< m << endl;
		cout << "inside block ::m = "<< ::m << endl;
	}
	cout << "main block m = "<< m << endl;
	cout << "main block ::m = "<< ::m << endl;
	return 0;
}
