#include <iostream>
#include <thread>
// #include <boost/thread/thread.hpp>
// #include <boost/thread/xtime.hpp>
#include <chrono>
using namespace std;
static int timeout = 10;
void threadFun1()
{
    while(0<timeout)
    {
        cout << "Fun 1 timeout : "<< timeout-- << endl;
        std::this_thread::sleep_for(chrono::seconds(1));
    }
}

void threadFun2()
{
    while(0<timeout)
    {
        cout << "Fun2 timeout : " << timeout-- << endl;
        std::this_thread::sleep_for(chrono::seconds(1));
    }
}


int main()
{
    thread th1(&threadFun1);
    thread th2(&threadFun2);
    // boost::thread::yeild();
    this_thread::yield();
    th1.join();
    th2.join();
    return 0;
}