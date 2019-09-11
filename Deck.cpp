#include "Deck.h"
#include <algorithm>

Deck::Deck() {
    refreshDeck();
}

void Deck::refreshDeck() {
    int incrementer = 0;
    char suits[] = "SHDC";
    char ranks[] = {'A','2','3','4','5','6','7','8','9','T','J','Q','K'};
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            deck[incrementer] = Card(ranks[j], suits[i]);
            incrementer++;
        }
    }
    top = 0;
}

void Deck::shuffle() {
    std::random_shuffle(begin(deck), end(deck) );
}

int Deck::cardsLeft() {
    return DECK_SIZE - top+1;
}

void Deck::showDeck() {
    int counter = 0;
    cout << "Deck\n";
    for (int i = 0; i < DECK_SIZE; i++) {
        deck[i].showCard();
        //cout << "i/12: " << i/12 << " i%12: " << i%12 << " i: " << i << endl;
        if (counter > 11) {
            cout << endl;
            counter = 0;
        } else {
            counter++;
        }
        
    }
    cout << endl << endl;
}

Card Deck::deal() {
    Card toDeal;
    toDeal = deck[top];
    top++;
    return toDeal;
}