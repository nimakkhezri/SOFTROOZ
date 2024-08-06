#include <iostream>
#include "IPLocation.h"

int main() {
	std::string ip;
	std::cout << "Please enter your IP: ";
	std::cin >> ip;

	IPLocation api;
	std::cout << "Your country: " << api.get_country(ip) << std::endl;
	system("Pause");
	return 0;
} 