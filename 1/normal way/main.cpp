#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <iomanip>

void printCSV(const std::string& filename);

int main() {
    printCSV("data.csv");
    system("Pause");
    return 0;
}

void printCSV(const std::string& filename) {
    std::ifstream file(filename);

    if (file.is_open()) {
        std::string line;
        std::string word = "";

        while (std::getline(file, line)) {
            for (const char& character : line) {
                if (character == ',') {
                    std::cout << std::left << std::setw(30) << word;
                    word = "";
                }
                else {
                    word += character;
                }
            }
            std::cout << std::left << std::setw(30) << word << std::endl;
            word = "";
        }
    }
    else {
        std::cerr << "file " << filename << " could not be opened! " << std::endl;
    }
}