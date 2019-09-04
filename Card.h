#ifndef CARD_H
#define CARD_H
#include <cctype>
#include <iostream>

class Card {
    private:
        char rank;
        char suit;

    public:
        Card();
        Card(char,char);

        int getRank();
        void setRank(char);
        char getSuit();
        void setSuit(char);
        void showCard();
};
#endif