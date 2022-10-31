#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include "windows.h"
#include "Cards.h"
#include <chrono>




int main() {

    typedef std::chrono::high_resolution_clock myclock;
    myclock::time_point beginning = myclock::now();

    myclock::duration d = myclock::now() - beginning;
    unsigned seed = d.count();



    auto rng = std::default_random_engine{seed};

    std::string input = "0";
    int anzahl = 0;
    cards c;

    std::cout << "Mit wie vielen Decks wollen Sie spielen?" << std::endl;
    std::cin >> input;
    anzahl = std::stoi(input);


    if (anzahl == 0) {
        cards c;
    } else {
        cards c(anzahl);
    }



    c.toString();

    std::shuffle(std::begin(c.deck), std::end(c.deck), rng);

    for(int i = 0; i <= 207; i++) {

        std::cout << c.deck.at(i) << std::endl;
    }





    return 0;
}
