#include <iostream>
#include <string>
using namespace std;

void string_property(string &s)
{
    cout << "----------------------------------------------\n";
    cout << "string\t:" << s << endl;
    cout << "s.size\t:" <<s.size()<<endl;
    cout << "s.length\t:" <<s.length()<<endl;
    cout << "s.capacity\t:" <<s.capacity()<<endl;
    cout << "s.maximum_size\t:" <<s.max_size()<<endl;
    cout << "s.Empty\t:" <<(s.empty() ? "yes" : "no")<<endl;
    cout << "----------------------------------------------\n";
}

int main()
{
    string s1;              //empty string
    string s2("First");     // initiaze string
    string s3("Second");
    string_property(s1);
    string_property(s2);
    string_property(s3);
    string s4;              
    cout << s2 << "+" << s3 << "=" << (s4 = s2 + s3) << endl; // concating string
    string_property(s4);
    string s5("hi hello how r you praful");
    cout << s5 << endl;
    cout << "find ""praful"":"<< s5.find("praful")<< endl;
    cout << "find ""rakesh"":" << s5.find("rakesh")<< endl;
    cout << "accessing as charector\n";
    for(int i=0; i < s5.length(); i++)
        cout << s5[i] ;
    cout << endl;
    s1 = "one";
    s2 = "one";
    s3 = "ONE";
    if(s1 == s2){/* comparing */
        cout << s1 << "=" << s2 << endl;
    }
    if(s1 == s3){
        cout << s1 << "=" << s3 << endl;
    }
    else
    {
        cout << s1 << "!=" << s3 << endl;
    }
    s1 = "hi";
    s2 = "hello";
    cout << "s1 = "<<s1<<" s2 = "<<s2<<endl;
    cout << "swaping operation"<<endl;
    s1.swap(s2);    /* swaping */
    cout << "s1 = "<<s1<<" s2 = "<<s2<<endl;
    s1.swap(s3);
    return 0;
}