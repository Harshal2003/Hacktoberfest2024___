#include <iostream>
#include <cctype>
#include <string>

std::string fix_case(const std::string &s) {
    int upper_count = 0, lower_count = 0;

    // Count uppercase and lowercase letters
    for (char c : s) {
        if (std::isupper(c))
            upper_count++;
        else if (std::islower(c))
            lower_count++;
    }

    // Convert to uppercase if there are more uppercase letters, otherwise lowercase
    std::string result;
    if (upper_count > lower_count) {
        for (char c : s) {
            result += std::toupper(c);
        }
    } else {
        for (char c : s) {
            result += std::tolower(c);
        }
    }

    return result;
}

int main() {
    // Test cases
    std::cout << fix_case("AbCdEfG") << std::endl;  // Output: "ABCDEFG"
    std::cout << fix_case("xYz") << std::endl;      // Output: "xyz"
    std::cout << fix_case("ABCabcXYZ") << std::endl; // Output: "abcabcxyz"
    
    return 0;
}
