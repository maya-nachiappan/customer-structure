//
//  customer.hpp
//  customer structure
//
//  Created by maya nachiappan on 10/25/24.
//

#ifndef customer_hpp
#define customer_hpp

#include <stdio.h>
#include <string>

class Customer {
public:
    int id;                // Customer ID
    std::string name;     // Customer Name
    std::string email;    // Customer Email

    // Default constructor
    Customer();

    // Parameterized constructor
    Customer(int id, const std::string& name, const std::string& email);
};

#endif // customer_hpp
