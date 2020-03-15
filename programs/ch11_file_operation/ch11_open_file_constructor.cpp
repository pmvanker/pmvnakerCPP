#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream w_f; // output stream object
    ifstream r_f; // input stream object
    char data[20] = {0};
    char data1[20] = {0};
    cout << "enter data :";
    cin.getline(data, 20);
    w_f.open("file"); // connect file to output stream
    if (!w_f.fail())  // do file operatio if it successfully open
    {
        w_f << data;
        w_f.close();
    }
    r_f.open("file"); // connect the file to input stream
    if (!r_f.fail())
    {
        r_f.getline(data1, 20);
        cout.write(data1, 20);
        r_f.close(); // disconnect the file from input stream
    }
    return 0;
}