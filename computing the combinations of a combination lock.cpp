#include <iostream>
#include <vector>
#include <string>

void three_digit_lock() {
    std::string combination;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k < 10; k++) {
                std::string i2 = std::to_string(i);
                std::string j2 = std::to_string(j);
                std::string k2 = std::to_string(k);

                combination = i2 + j2 + k2;

                std::cout << combination << "\n";
            }
        }
    }

}

void four_digit_lock() {
    std::string combination;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k < 10; k++) {
                for (int l = 0; l < 10; l++) {
                    std::string i2 = std::to_string(i);
                    std::string j2 = std::to_string(j);
                    std::string k2 = std::to_string(k);
                    std::string l2 = std::to_string(l);

                    combination = i2 + j2 + k2 + l2;

                    std::cout << combination << "\n";
                }
            }    
        }
    }

}

void five_digit_lock() {
    std::string combination;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k < 10; k++) {
                for (int l = 0; l < 10; l++) {
                    for (int m = 0; m < 10; m++) {
                        std::string i2 = std::to_string(i);
                        std::string j2 = std::to_string(j);
                        std::string k2 = std::to_string(k);
                        std::string l2 = std::to_string(l);
                        std::string m2 = std::to_string(m);

                        combination = i2 + j2 + k2 + l2 + m2;

                        std::cout << combination << "\n";
                    }
                }
            }    
        }
    }

}

void six_digit_lock() {
    std::string combination;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k < 10; k++) {
                for (int l = 0; l < 10; l++) {
                    for (int m = 0; m < 10; m++) {
                        for (int n = 0; n < 10; n ++) {
                            std::string i2 = std::to_string(i);
                            std::string j2 = std::to_string(j);
                            std::string k2 = std::to_string(k);
                            std::string l2 = std::to_string(l);
                            std::string m2 = std::to_string(m);
                            std::string n2 = std::to_string(n);

                            combination = i2 + j2 + k2 + l2 + m2 + n2;

                            std::cout << combination << "\n";
                        }
                    }
                }
            }    
        }
    }
}

int main(void) {
    
    three_digit_lock();
    std::cout << "\n";

    four_digit_lock();
    std::cout << "\n";

    five_digit_lock();
    std::cout << "\n";
    
    six_digit_lock();
    
}
