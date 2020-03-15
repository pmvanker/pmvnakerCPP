#include <iostream>
#include <thread>
#include <chrono>

void my_delay()
{
    for(int i =0; i < 10; i++)
    {
        std::cout << "fun1\n";
    }
}

int main()
{
    std::thread t1(my_delay);
    std::thread_group grp;
    // thread_group grp;
    std::this_thread::yield();
    t1.join();
}