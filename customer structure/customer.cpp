//
//  customer.cpp
//  customer structure
//
//  Created by maya nachiappan on 10/25/24.
//

#include "customer.hpp"
using namespace std;


// Default constructor
Customer::Customer() : id(0), name(""), email("") {}

// Parameterized constructor
Customer::Customer(int id, const std::string& name, const std::string& email)
    : id(id), name(name), email(email) {}
