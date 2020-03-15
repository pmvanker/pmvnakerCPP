#include <iostream>
using namespace std;
int global_z = 10;
int main()
{
    int local_x = 20;
    static int static_y = 30;
    class local_class
    {
        int private_x;
        public:
            int public_x;
            void set_data(int pri_a,int pub_b)
            {
                private_x = pri_a;
                public_x = pub_b;
            }
            void get_data()
            {
                cout << "private x  =" << private_x << endl
                     << "public_x   =" << public_x << endl
                     << "staic_y    =" << static_y << endl      // class can access static member of function
                     << "::global_z =" << ::global_z << endl;   // class can access global member with scope operator
            // cout << "local_x = " << local_x << endl;
/* error  use of local variable with automatic storage from containing function */
             }
    };
    local_class obj;
    obj.set_data(100,200);
    obj.get_data();
}