//William Murray
//CECS 282-05
//Prog - 0 Happy Birthday
//Aug 29, 2019
#include <iostream>
#include "Deck.h"

using namespace std;

void mainMenu();
void playPrime(Deck);


int main() {
    int choice;
    Deck ourDeck;
    mainMenu();
    cin >> choice;
    while (choice != 5)
    {
        switch (choice)
        {
        case 1: ourDeck.refreshDeck();
            break;
        case 2: ourDeck.showDeck();
            break;
        case 3: ourDeck.shuffle();
            break;
        case 4: playPrime(ourDeck);
        default:
            break;
        }
        mainMenu();
        cin >> choice;
    }
    
   cout << "\nHave a nice day!" << endl;
    
    return 0;
}

void playPrime(Deck ourDeck) {
    int stack = 0;
    int pile = 0;
    while(ourDeck.cardsLeft() > 0) {
        Card current = ourDeck.deal();
        stack += current.getRank();
        current.showCard();
        if (stack == 2 || (stack%3 != 0 && stack%2 != 0 && stack != 1)) {
            cout << "Prime:" << stack << endl;
            stack = 0;
            pile++;
        }
    }
    if (stack == 0) {
        cout << endl << "Winner in " << pile << " piles!" << endl;
    } else
    {
        cout << "Loser" << endl << endl;
    }
    
}

void mainMenu() {
    cout << "Welcome to Solitarie Prime!\n";
    cout << "1) New Deck\n" << 
            "2) Display Deck\n" << 
            "3) Shuffle Deck\n" << 
            "4) Play Solitaire Prime\n" <<
             "5) Exit\n\n";
   
}