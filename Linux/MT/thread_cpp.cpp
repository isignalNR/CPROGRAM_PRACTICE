#include <iostream>
#include <thread>
#include <condition_variable>
#include <mutex>

using namespace std;

#define MAX 10

int counter = 1;
std::condition_variable cv;
std::mutex mtx;

void PrintEven()
{
				std::unique_lock<std::mutex> lock(mtx);
				while (counter < MAX)
				{
								cv.wait(lock, [] { return !(counter & 1); });
								std::cout << counter << " ";
								counter++;
								cv.notify_one();
				}
}

void PrintOdd()
{
				std::unique_lock<std::mutex> lock(mtx);
				while (counter < MAX)
				{
								cv.wait(lock, [] { return (counter & 1); });
								std::cout << counter << " ";
								counter++;
								cv.notify_one();
				}
}

int main()
{
				std::thread even(PrintEven);
				std::thread odd(PrintOdd);

				even.join();
				odd.join();
}
