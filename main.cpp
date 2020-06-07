#include "client.h"
#include <iostream>
#include <string>
#include <thread>

int main(int argc, char* argv[])
{
	const std::string msg = "system info: ";
	const int x = 12;
	const size_t y = 89U;
	long long z = x - static_cast<decltype(x)>(y);
	std::thread th(client, x);

	std::cout << msg;
	std::cout << z << std::endl;
	
	for (int i = 0; i < argc; ++i)
		std::cout << i << ": " << argv[i] << std::endl;

	th.join();
}