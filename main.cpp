#include <iostream>

int version() {
    return PROJECT_VERSION_PATCH;
}

void main() {
    std::cout << "Version: " << version() << std::endl;
    std::cout << "Hello, world!" << std::endl;
}