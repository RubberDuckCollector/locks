#include <iostream>
#include <vector>

void three_digit_lock() {
    std::vector<std::vector<int> > nums;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k < 10; k++) {
                nums.push_back({i, j, k});
            }
        }
    }

    for (int i = 0; i < nums.size(); i++) {
        for (int j = 0; j < nums[i].size(); j++) {
          std::cout << nums[i].at(j) << " ";
        }
        std::cout << "\n";
    }
}

void four_digit_lock() {
    std::vector<std::vector<int> > nums;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k < 10; k++) {
                for (int l = 0; l < 10; l++) {
                    nums.push_back({i, j, k, l});
                }
            }    
        }
    }

    for (int i = 0; i < nums.size(); i++) {
        for (int j = 0; j < nums[i].size(); j++) {
          std::cout << nums[i].at(j) << " ";
        }
        std::cout << "\n";
    }
}

void five_digit_lock() {
    std::vector<std::vector<int> > nums;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k < 10; k++) {
                for (int l = 0; l < 10; l++) {
                    for (int m = 0; m < 10; m++) {
                        nums.push_back({i, j, k, l, m});
                    }
                }
            }    
        }
    }

    for (int i = 0; i < nums.size(); i++) {
        for (int j = 0; j < nums[i].size(); j++) {
          std::cout << nums[i].at(j) << " ";
        }
        std::cout << "\n";
    }
}

void six_digit_lock() {
    std::vector<std::vector<int> > nums;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k < 10; k++) {
                for (int l = 0; l < 10; l++) {
                    for (int m = 0; m < 10; m++) {
                        for (int n = 0; n < 10; n ++) {
                            nums.push_back({i, j, k, l, m, n});
                        }
                    }
                }
            }    
        }
    }

    for (int i = 0; i < nums.size(); i++) {
        for (int j = 0; j < nums[i].size(); j++) {
          std::cout << nums[i].at(j) << " ";
        }
        std::cout << "\n";
    }
}

int main(void) {
    
    three_digit_lock();
    four_digit_lock();
    five_digit_lock();
    six_digit_lock();
    
    return 0;
}
