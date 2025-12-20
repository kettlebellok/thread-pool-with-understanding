#include <iostream>
#include <BS_thread_pool.hpp>

int main() {
    // Create a thread pool with hardware_concurrency threads
   // BS::thread_pool pool;

    // Submit tasks
    //auto future1 = pool.submit([] { return 42; });
    //auto future2 = pool.submit([] { return std::string("Hello from thread pool!"); });

    // Get results
    //std::cout << "Result 1: " << future1.get() << "\n";
   // std::cout << "Result 2: " << future2.get() << "\n";
BS::thread_pool<0> pool; 
pool.detach_task([] { std::cout << 42 << "\n"; }); 
pool.detach_task([] { std::cout << "Hello from thread pool!\n"; });
pool.wait(); // ensure tasks finish

    return 0;
}
//g++ -std=c++17 -pthread main.cpp -o main
//g++ -std=c++17 -pthread -I../../include main.cpp -o main
