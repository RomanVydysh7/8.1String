#include <iostream>
#include <string>


int findThirdCommaIndex(const std::string& str) {
    int commaCount = 0;
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == ',') {
            commaCount++;
            if (commaCount == 3) {
                return i; 
            }
        }
    }
    return -1; 
}


void replaceCommasWithStars(std::string& str) {
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == ',') {
            str.replace(i, 1, "**");

            i++;
        }
    }
}

int main() {
    std::string str;

    std::cout << "Input: ";
    std::getline(std::cin, str);

    int commaIndex = findThirdCommaIndex(str);
    if (commaIndex != -1) {
        std::cout << "Index: " << commaIndex << std::endl;

        replaceCommasWithStars(str);
        std::cout << "Width '**': " << str << std::endl;
    }
    else {
        std::cout << "Nothing" << std::endl;
    }

    return 0;
}
