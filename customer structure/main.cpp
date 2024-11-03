//
//  main.cpp
//  customer structure
//
//  Created by maya nachiappan on 10/25/24.
//

#include <iostream>
#include "customer.hpp"
using namespace std;

// Function to handle customer input and display
void print() {
    Customer customer;

    // Asks the user for their customer details
    std::cout << "Enter Customer ID: ";
    std::cin >> customer.id;
    std::cin.ignore(); // Clears the newline from the input buffer

    std::cout << "Enter Customer Name: ";
    std::getline(std::cin, customer.name);

    std::cout << "Enter Customer Email: ";
    std::getline(std::cin, customer.email);

    // Print the customer details
    std::cout << "\nCustomer Details:\n";
    std::cout << "ID: " << customer.id << "\n";
    std::cout << "Name: " << customer.name << "\n";
    std::cout << "Email: " << customer.email << "\n";
}

int main() {
    // Call the print function to execute the customer input and display
    print();
    return 0;
}
