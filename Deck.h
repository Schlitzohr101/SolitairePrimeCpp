#ifndef DECK_H
#define DECK_H
#include <vector>
#include <string>
#include "Card.h"

using namespace std;

class Deck {
    private:
        vector<Card> deck;

    public:

        Deck();
        void refreshDeck();
        Card deal();
        void shuffle();
        int cardsLeft();
        void showDeck();

};
#endif