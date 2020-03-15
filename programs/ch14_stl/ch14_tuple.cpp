#include<iostream>
#include<tuple>
using namespace std;
int main()
{
    tuple<string,int,float> e1;
    e1 = make_tuple("praful",2151,42.70);
    cout << get<0>(e1) << endl;
    cout << get<1>(e1) << endl;
    cout << get<2>(e1) << endl;
return 0;
}