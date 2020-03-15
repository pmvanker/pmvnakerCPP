#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &v)
{
    cout << "display container data :";
    for(int i=0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v;
    int x;
    cout << "pushing 5 element before size = " << v.size() << endl;
    for(int i=0; i<5; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    cout << "After push 5 element size = " << v.size() << endl;
    display(v);
    cout << "add one element" << endl;
    v.push_back(6.6);
    cout << "After 6th element size = " << v.size() << endl;
    display(v); 
    cout << "changing 1st element" <<endl;
    vector<int>::iterator itr = v.begin();  // iteraotr point to begin
    v.insert(itr,1,10);
    display(v); 
    cout << "changing 4th element" <<endl;
    itr = itr +3;
    v.insert(itr,1,40);
    display(v); 
    cout << "removing element 1st and 4th" <<endl;
    v.erase(v.begin(),v.begin()+4);
    cout << "After removing element size = " << v.size() << endl;
    display(v); 
}