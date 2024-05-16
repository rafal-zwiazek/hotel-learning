#include <iostream>
#include "Card.h"

int main() {
    const int smallRoom = 25;
    const int largeRoom = 35;
    const double salesTax = 0.06;
    const int daysValid = 30;

    int smallRoomsCleaning;
    int largeRoomsCleaning;
    double price;

    std::cout << "How many small rooms do you want to clean: ";
    std::cin >> smallRoomsCleaning;
    std::cout << "How many large rooms do you want to clean: ";
    std::cin >> largeRoomsCleaning;
    std::cout << "===========================" << std::endl;
    std::cout << "Large rooms to clean: " << largeRoomsCleaning << std::endl;
    std::cout << "Small rooms to clean: " << smallRoomsCleaning << std::endl;
    std::cout << "Large room price: " << largeRoom << std::endl;
    std::cout << "Small rooms price: " << smallRoom << std::endl;
    price = (smallRoomsCleaning * smallRoom
             + largeRoomsCleaning * largeRoom);
    std::cout << "Price: " << price << std::endl;
    std::cout << "Tax: " << salesTax * 100 <<"% " << std::endl;
price = price * 1 + salesTax;
    std::cout << "===========================" << std::endl;
    std::cout << "Total estimate: " << price << std::endl;
    std::cout << "This estimate is valid for " << daysValid << " days";
    return 0;
}