#include <iostream>
using namespace std;
template <class T>          // bubble sort template function can sort any type
void bubble(T a[], int s)
{
    for(int i = 0; i < s-1 ; i++)
    {
        for(int j = s-1; i<j; j--)
        {
            if(a[j] < a[j-1])
            {
                T temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }            
        }
    }
}
template <class X>          // print function can print any type of array
void print(X *ptr,int m)
{
    cout << "data :";
    for(int i =0; i < m;i++)
    {
        cout << ptr[i];
    }
    cout << endl;
}
int main()
{
    int i[5] = {1,3,2,6,0};
    char c[9] = "adcbADCB";
    cout << "before Swap ..."<<endl;
    print(i,5);
    print(c,9);
    bubble(i,5);
    bubble(c,9);
    cout << "After Swap ..."<<endl;
    print(i,5);
    print(c,10);
}