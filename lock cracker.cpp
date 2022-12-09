#include <iostream>
#include <vector>

void lock() {
    std::string lock = "100";
    bool found = false;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k < 10; k++) {
                auto i2 = std::to_string(i);
                auto j2 = std::to_string(j);
                auto k2 = std::to_string(k);

                std::string output = i2 + j2 + k2;
                std::cout << output << "\n";
                if (output == lock) {
                    std::cout << "lock combination found: " << output << "\n";
                    return 0;
                }
            }
        }
    }
    std::cout << "combination not found" << "\n";
}

int main() {

    lock();

    return 0;
}
