// Copyright (c) 2022 Yiyun Qin All rights reserved
//
// Created by Yiyun Qin
// Created in April 2022
// This is a math program, showing numbers from 1000 to 2000, five in a row

#include <iostream>

int main() {
    // This function shows numbers from 1000 - 2000

    // process & output
    std::cout << "" << std::endl;
    for (int initialCounter = 1000; initialCounter <= 2000; initialCounter++) {
        if ((initialCounter + 1) % 5 == 0) {
            std::cout << initialCounter << std::endl;
        } else {
            std::cout << initialCounter << " ";
        }
    }
    std::cout << "\nDone.";
}
