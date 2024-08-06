#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>

class Rectangle {
private:
    int length, width;
public:
    Rectangle();
    Rectangle(int length, int width);

    void set_lenght(const int& length);
    void set_width(const int& width);

    int get_length() const;
    int get_width() const;

    int perimeter() const;
};

#endif