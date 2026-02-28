#include <iostream>
#include <ctime>

int main() {
    srand(time(NULL));
    int ans = rand() % 100 + 1;
    int input, times = 0;

    while (true) {
        times += 1;
        std::cout << "第" << times << "次猜數字: ";
        std::cin >> input;

        if (input == ans) {
            std::cout << "猜對了！你總共猜了" << times << "次" << std::endl;
            break;
        } 
        else if (input < ans) {
            std::cout << "太小了，請繼續嘗試" << std::endl;
        } 
        else {
            std::cout << "太大了，請繼續嘗試" << std::endl;
        }
    }
    return 0;
}