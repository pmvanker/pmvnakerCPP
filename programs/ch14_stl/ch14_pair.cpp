#include<iostream>
using namespace std;
class test
{
    int id;
    public:
        void get_data()
        {
            cout << "id : " << id << endl;
        }
        void set_data(int a)
        {
            id=a;
        }
};
void print_pair(pair<string,int> p)
{
    cout << "string : " << p.first << " int : " << p.second << endl;
}
void print_pair(pair<int,test> p)
{
    cout << "int : " << p.first <<  endl;
    p.second.get_data();
}
int main()
{
    pair <string,int> e1,e2,e3;
    e1 = make_pair("praful",2154);
    e2 = make_pair("tushar",2156);
    e3 = make_pair("rakesh",1954);
    print_pair(e1);
    print_pair(e2);
    print_pair(e3);
    test t1;                            // user define class pair
    t1.set_data(100);
    pair <int,test> pt; 
    pt = make_pair(200,t1);
    print_pair(pt);
}

