#include <iostream>

using namespace std;

void update() {
    cout << "Updating..." << endl;
    system("curl -s https://cdn.rathole.icu/update.sh");
}


int main() {
    cout << "Welcome to RatHoleGM" << endl;

    std::cout << "Choose a option:\n";
    std::cout << "[1] Install RGM\n"
              << "[2] Check Status\n";

    std::string input;
    std::getline(std::cin, input);

    while(input != "1" && input != "2") {
    std::cout << "Invalid!\n\n";

    std::cout << "Choose a option:\n";
    std::cout << "[1] Install RGM\n"
              << "[2] Check Status\n";
    std::getline(std::cin, input);
    }

if (input == "1") {
    system("ping -c 4 rathole.icu");
} else if (input == "2") {
    update();
}
}
