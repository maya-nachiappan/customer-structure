//
//  main.cpp
//  customer structure
//
//  Created by maya nachiappan on 10/25/24.
//

#include <iostream>
#include "customer.hpp"

int main() {
    Customer customer;

    // Asks the user for their customer details and stores in variables
    std::cout << "Enter Customer ID: ";
    std::cin >> customer.id;
    std::cin.ignore(); // Clears the newline from the input buffer

    std::cout << "Enter Customer Name: "; // stores customer name in string
    std::getline(std::cin, customer.name);

    std::cout << "Enter Customer Email: "; // stores customer email
    std::getline(std::cin, customer.email);

    // Print the customer details
    std::cout << "\nCustomer Details:\n";
    std::cout << "ID: " << customer.id << "\n";
    std::cout << "Name: " << customer.name << "\n";
    std::cout << "Email: " << customer.email << "\n";

    return 0;
}
