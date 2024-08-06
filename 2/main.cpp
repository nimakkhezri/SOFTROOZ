#include <iostream>
#include "Rectangle.h"

int main() {
    int length, width;
    std::cout << "Please enter the length and width of the rectangle: " << std::endl;
    std::cout << "Length: ";
    std::cin >> length;
    std::cout << "Width: ";
    std::cin >> width;
    Rectangle rec(length, width);

    std::cout << "Perimeter: " << rec.perimeter() << std::endl;
    system("Pause");
    return 0;
}