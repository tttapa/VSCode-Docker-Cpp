#include <Greet.hpp>

int main() {
    std::string name;
    while (name.empty()) {
        std::cout << "Please enter your name:" << std::endl;
        std::getline(std::cin, name);
    }
    greet(name);
}