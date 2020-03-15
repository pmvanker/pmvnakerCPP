#include <iostream>
using namespace std;

template<class T>
class array
{
    T* a;
    int size;
    public:
        array(int m)
        {
            a = new T[size = m];
            for(int i = 0 ; i<size; i++)
            {
                a[i] = 0.5;
            }
        }        
};
int main()
{
    array<int> obj_int_array(10);
    array<float> obj_float_array(10);
return (0);
}