#include<iostream>
#include<map>
#include<string>
using namespace std;
typedef map<string,int> phoneMap;
int main()
{
    string name;
    int number;
    phoneMap phone;
    cout << "enter three name and number" << endl;
    for(int i=0; i<3; i++)
    {
        cin >> name >> number;
        phone[name]=number;
    }
    phone["vvdn"]=2151;
    cout << "size of phonemap : " << phone.size() << endl;
    cout << "phone data" <<endl;
    phoneMap::iterator p;
    for(p = phone.begin(); p != phone.end(); ++p)
    {
        cout <<"name : "<<(*p).first <<"\tnumber : "<<(*p).second<<endl;
    }
    return 0;
}