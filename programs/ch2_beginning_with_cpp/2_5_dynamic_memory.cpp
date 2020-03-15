/* Author : Praful Vanker 	*/
/* Standard Cpp code 		*/

/* include */
#include <iostream>
#include <cstring>
/* add namespace */ 
using namespace std;
/* Class Declare */

/* Memeber function definations */

/* Main Program */
int main()
{
	int *i = new int;				// allocating dynamic memory
	float *f = new float(3.5);		// allocating dynamic memory with initialize
	char *ch = new char[20];		// allocating dynamic memory to array 
	strcpy(ch,"hello");
	cout << "i = " << *i << " f = " << *f << " char = " << ch << endl;
	delete i;						// free memory
	delete f;						// free memory 
	delete [] ch;					// free array memory
	// cout << "i = " << *i << " f = " << *f << " char = " << ch << endl;
}
