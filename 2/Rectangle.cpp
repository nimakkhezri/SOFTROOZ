#include "Rectangle.h"

Rectangle::Rectangle() {}

Rectangle::Rectangle(int length, int width) {
    if (length > width) {
        this->length = length;
        this->width = width;
    }
    else {
        this->length = width;
        this->width = length;
    }
}

// Setter functions

void Rectangle::set_lenght(const int& length) {
    this->length = length;
}

void Rectangle::set_width(const int& width) {
    this->width = width;
}

// Getter functions

int Rectangle::get_length() const {
    return length;
}

int Rectangle::get_width() const {
    return width;
}

int Rectangle::perimeter() const {
    return 2 * (width + length);
}