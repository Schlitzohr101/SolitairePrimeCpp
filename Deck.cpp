#include "Deck.h"
#include <algorithm>

Deck::Deck() {
    refreshDeck();
}

void Deck::refreshDeck() {
    deck.clear();
    char ranks[] = {'A','2','3','4','5','6','7','8','9','10','J','Q','K'};
    char suits[] = {'S','H','D','C'};
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            deck.push_back(Card(ranks[i],suits[j]));
        }
    }
}

void Deck::shuffle() {
    std::random_shuffle(deck.begin, deck.end );
}

int Deck::cardsLeft() {
    return deck.size();
}

void Deck::showDeck() {
    int counter = 0;
    for (vector<Card>::iterator it = deck.begin; it != deck.end; ++it ) {
        
    }
}