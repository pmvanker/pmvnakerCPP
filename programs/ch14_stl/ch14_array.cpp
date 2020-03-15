#include<iostream>
#include<array>
using namespace std;
int main()
{
    int a[10] = {8 , 3, 5, 6, 2, 1, 9, 4, 7, 0};
    cout << "a[0] = " << a[0] << endl; 
    cout << "a[10] = " << a[10] << endl;            // no error while compiling runnig

    array <int,10> arr_int_obj = {8 , 3, 5, 6, 2, 1, 9, 4, 7, 0};
    cout << "arr_int_obj[0] = "<< arr_int_obj[0]<<endl;
    cout << "arr_int_obj[10] = "<< arr_int_obj[10]<<endl;   // no error while compiling and running
    cout << "arr_int_obj.at(1) = "<< arr_int_obj.at(1)<<endl;
    // cout << "arr_int_obj.at(10) = "<< arr_int_obj.at(10)<<endl; // no error while compiling but run time error.
    /*throwing an instance of 'std::out_of_range*/
}