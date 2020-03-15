/* Author : Praful Vanker 	*/
/* Standard Cpp code 		*/

/* include */
#include <iostream>
/* add namespace */ 
using namespace std;
/* Class Declare */

/* Memeber function definations */

int add(int,int);
//float add(int,int);     // error function overloading is not differ by return type
float add(float,float);
float add(int,float);
float add(float,int);
float add(int,int,float);
/* Main Program */
int main(){
    cout << add(10,20) <<endl
         << add(1.1f,1.2f) <<endl
         << add(10,1.1f) <<endl
         << add(1.1f,20) <<endl
         << add(10,20,1.1f) <<endl;
	return 0;
}
int add(int ix,int iy){
return (ix+iy);
}
float add(float fx,float fy){
return (fx+fy);
}
float add(int ix,float fy){
return (ix+fy);
}
float add(float fx,int iy){
return (fx+iy);
}
float add(int ix,int iy,float fz){
return (ix+iy+fz);
}
