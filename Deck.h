#ifndef DECK_H
#define DECK_H
#include "Card.h"

using namespace std;

class Deck {
    private:
        Card deck[52];
        const int DECK_SIZE = 52;
        int top;    

    public:
        
        Deck();
        void refreshDeck();
        Card deal();
        void shuffle();
        int cardsLeft();
        void showDeck();

};
#endif