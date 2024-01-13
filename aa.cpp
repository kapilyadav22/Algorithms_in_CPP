#include <iostream>

int main() {
    int rows, cols;

    // Get input for the number of rows and columns
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;


    std::cout << "Enter the number of columns: ";
    std::cin >> cols;

    // Draw the rectangle
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }

    // Draw the inscribed diamond
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (i <= rows / 2) {
                // Upper half of the diamond
                if (j >= cols / 2 - i && j <= cols / 2 + i)
                    std::cout << "* ";
                else
                    std::cout << "  ";
            } else {
                // Lower half of the diamond
                if (j >= i - cols / 2 && j <= cols - (i - cols / 2) - 1)
                    std::cout << "* ";
                else
                    std::cout << "  ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
