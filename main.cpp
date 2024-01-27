#include <iostream>
#include <thread>

void PrintThread(const std::string& str)
{
    std::cout << str << std::endl;
}

int main() 
{
    std::thread t1(PrintThread, "thread1");
    std::thread t2(PrintThread, "thread2");
    std::thread t3(PrintThread, "thread3");

    t1.join();
    t2.join();
    t3.join();

    return 0;
}