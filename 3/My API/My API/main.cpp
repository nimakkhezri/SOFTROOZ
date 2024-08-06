#include <iostream>
#include <string>
#include "MyAPI.h"

int main() {
	std::string message;
	do {
		std::cout << "Please enter your message (\"exit\" for quit):  ";
		std::getline(std::cin, message);
		MyAPI api;
		api.send_message(message);
	} while (message != "exit");
	system("Pause");
	return 0;
}