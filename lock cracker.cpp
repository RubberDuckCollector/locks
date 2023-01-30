#include <iostream>
#include <vector>

// Function that tries to find the lock combination
void lock() {
    // The lock combination we are trying to find
    std::string lock = "100";

    // Loop through all possible combinations of 3 digits
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k < 10; k++) {
                // Convert each digit to a string
                auto i2 = std::to_string(i);
                auto j2 = std::to_string(j);
                auto k2 = std::to_string(k);

                // Concatenate the 3 strings to form a combination
                std::string output = i2 + j2 + k2;
                // Print the combination to the console
                std::cout << output << "\n";
                // Check if the combination is the lock combination
                if (output == lock) {
                    // If it is, print a message and return from the function
                    std::cout << "lock combination found: " << output << "\n";
                    return 0;
                }
            }
        }
    }
    // If we get here, it means the lock combination was not found
    std::cout << "combination not found" << "\n";
}

int main() {
    // Call the lock function
    lock();

    // Return 0 to indicate that the program ran successfully
    return 0;
}
