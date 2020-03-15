#include <iostream>
using namespace std;

template <class T1 = int, class T2 = int>
class test
{
    T1 a;
    T2 b;
    public:
        test(T1 x,T2 y)
        {
            a = x;
            b = y;
        }
        void get_data()
        {
            cout << "a = " << a << " b = " << b << endl;
        }
};
int main()
{
    test <int,float> i_f(10,3.5);
    test <float,int> f_i(4.8,20);
    test <> d_c_i('a',12);
    i_f.get_data();
    f_i.get_data();
    d_c_i.get_data();
}