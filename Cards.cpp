//
// Created by Martin on 31.10.2022.
//

#include "Cards.h"


void cards::toString() {

    std::string values[13] = {"ace", "king", "queen", "jack", "ten", "nine", "eight", "seven", "six", "five", "four",
                              "three", "two"};
    std::string symbol[4] = {"hearts", "diamonds", "spades", "clubs"};

    for (int k = 0; k <= 4 ; k++) {

        for (int i = 0; i <= 3; ++i) {

            for (int j = 0; j <= 12; ++j) {

                deck.push_back(values[j] + " of " + symbol[i]);
            }
        }
    }
};