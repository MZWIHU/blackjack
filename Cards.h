//
// Created by Martin on 31.10.2022.
//

#ifndef BLACKJACK_CARDS_H
#define BLACKJACK_CARDS_H

#include "string"
#include "vector"
#include "iostream"

class cards  {
public:

    cards() {
    int decks = 2;

    };
    cards(int decks) {
        
       };


    std::vector<std::string> deck;

    enum number { ace = 11, king = 10, queen = 10, jack = 10, ten = 10, nine = 9, eight = 8, seven = 7, six = 6,
        five = 5, four = 4, three = 3, two = 2};

    enum color{ hearts = 4, diamonds = 4, spades = 0, clubs = 0};

    void toString();
};

#endif //BLACKJACK_CARDS_H
