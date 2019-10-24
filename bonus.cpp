// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Marwan Mashaly
// Created on: October 2019
// This program tells the user if he can have a raise of 5% or no

#include <iostream>
#include <string>

int main() {
    // This function tells the user if he can have a raise of 5% or no
    std::string yearsOfService;
    std::string salary;
    int service;
    int salaryCheck;
    int bonus;
    int total;

    // Input
    std::cout << "Enters years of service at the company: ";
    std::cin >> yearsOfService;
    std::cout << "Enter your current salary: ";
    std::cin >> salary;
    std::cout << "" << std::endl;

    // Process & Output
    try {
        service = std::stoi(yearsOfService);
        salaryCheck = std::stoi(salary);
        if (service >= 5) {
            bonus = 0.05 * salaryCheck;
            total = bonus + salaryCheck;
            std::cout << "your new salary is " << total << std::endl;
        } else {
                std::cout << "Sorry, you can't have a raise" << std::endl;
            }
    }catch (std::invalid_argument) {
        std::cout << "Invalid Age";
    }
}
