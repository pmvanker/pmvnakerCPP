#include<iostream>
using namespace std;
void test(int x) throw (int,double)
{
    try
    {
        if(x == 0)
            throw 'x';
        else
        {
            if(x == 1)
                throw x;
            else
                throw 1.1;
        }            
    }
    cout << "end of test_fun()\n";
}

int main()
{
    int a,b,c;
    cout << "enter values :" ;
    cin >> a >> b;
    try             /* Try block */
    {
        if(b == 0)  /* detecting exception */
        {
            throw(b);   /* throwing exception */
        }
        cout << "a/b = "<< (c = a/b) << endl;
        throw('x');
    }
    catch(int m)    /* catching exception */
    {
        cout << "exception Divide by Zero\n";
    }
    catch(...)
    {
        cout << "default exception...\n";  
    }
    return 0;    
}