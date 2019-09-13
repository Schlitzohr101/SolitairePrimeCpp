#include "header.h"

Deck::Deck() {
    refreshDeck();
}

void Deck::refreshDeck() {
    int incrementer = 0;
    //char tester [] = {"8H9C2D4D8SAHKC7S4H9H7H7C10S9DJS3C5HAS2CQC7D3D4C6DJCKSQD2H5SJHKH9S6HJD"}
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
   // std::random_shuffle(begin(deck), end(deck) );
   srand(time(0));
   for (int i = 0; i < 1000; i++)
   {
       
       int x = rand()%52;
       int y = rand()%52;
       if (x != y) {
           Card temp = deck[x];
           deck[x] = deck[y];
           deck[y] = temp;
       }
   }
   
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