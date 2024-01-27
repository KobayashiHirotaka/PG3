#include <iostream>
#include <thread>
#include <string>

void PrintMessage(const std::string& message)
{
    std::cout << message << std::endl;
}

int main() 
{
    std::thread t1(PrintMessage, "thread1");
    t1.join();

    std::thread t2(PrintMessage, "thread2");
    t2.join();

    std::thread t3(PrintMessage, "thread3");
    t3.join();

    return 0;
}