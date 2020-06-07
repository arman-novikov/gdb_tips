#pragma once
#include <iostream>

void client(int x)
{
	auto y = x + 255;
	int g = y * y - 100;
	std::cout << "client in" << std::endl;
	if (x > 100) {
		y -= 200;
	} else {
		y += 100;
	}

	for (int i = 0; i < 3; ++i) {
		g -= 10;
	}
	std::cout << "client out" << std::endl;
}