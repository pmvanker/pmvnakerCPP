#include <iostream>
#include <cstring>
using namespace std;
enum{
    EMPLOYEE_NAME_WIDTH = 10,
    EMPLOYEE_ID_WIDTH = 5
};
class employee
{
    public:
        string employee_name[3];
        int employee_id[3];
        void set_data(string ptr[3],int *id)
        {
            for(int i = 0; i < 3 ; i++)
            {
                employee_id[i] = id[i];
                employee_name[i] = ptr[i];
            }
        }
        void get_data()
        {
            for(int i = 0; i < 3 ; i++)
            {
                cout.width(EMPLOYEE_ID_WIDTH);
                cout << employee_id[i] ;
                cout.width(EMPLOYEE_NAME_WIDTH);
                cout << employee_name[i] << endl;
            }
        }
};
int main()
{
    employee e;
    string s_e[3] = {"tushar","praful","rakesh"};
    int i_e[3] = {1234,5678,9101};
    e.set_data(s_e,i_e);
    cout.width(EMPLOYEE_ID_WIDTH);
    cout<<"Width";
    cout.width(EMPLOYEE_NAME_WIDTH);
    cout<<"Name"<<endl;
    e.get_data();    
}