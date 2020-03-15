#include <iostream>
#include <list>
#include <cstdlib>
using namespace std;
void display(list<int> &lst)
{
    list<int>::iterator p;
    for(p=lst.begin(); p!= lst.end(); ++p)
    {
        cout << "*p = " << *p << " ";
    }
    cout << endl;
}
int main()
{
    list<int> list1;
    list<int> list2(5);
    for(int i= 0; i<3;i++)
    {
        list1.push_back((rand()/100)%100);
    }
    list<int>::iterator p;
    for(p= list2.begin(); p != list2.end(); ++p)
    {
        *p = (rand()/100)%100;
    }
    cout << "list1" <<endl;
    display(list1);
    cout << "list2" <<endl;
    display(list2);
    cout << "Adding font and back list 1\n";
    display(list1);
    list1.push_back(1000);
    list1.push_front(2000);
    display(list1);
    cout << "Removing font and back of list 1\n";
    display(list2);
    list2.pop_back();
    list2.pop_front();
    display(list2);
    list<int> listA = list1;
    list<int> listB = list2;
    cout << "copting list and sorting \n";
    cout << "before sort\n";
    display(listA);
    display(listB);
    listA.sort();
    listB.sort();
    cout << "after sort....\n";
    display(listA);
    display(listB);
    cout << "merging list A AND B\n";
    listA.merge(listB);
    display(listA);
    cout << "reverse list\n";
    listA.reverse();
    display(listA);
    return 0;
}