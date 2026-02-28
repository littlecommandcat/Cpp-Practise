#include <iostream>

int main() {
    for (int i = 1; i <= 9; i += 1) {
        for (int j = 1; j <= 9; j += 1) {
            std::cout << i << "x" << j << "=" << i * j << std::endl;
        }
    }
    return 0;
}