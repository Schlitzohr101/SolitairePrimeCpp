//William Murray
//CECS 282-05
//Prog - 0 Happy Birthday
//Aug 29, 2019
#include "header.h"

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
        switch (stack)
        {
        case 2: winnerPile(stack,pile);
        break;
        case 3: winnerPile(stack,pile);
        break;
        case 5: winnerPile(stack,pile);
        break;
        case 7: winnerPile(stack,pile);
        break;
        default: 
            if (stack != 1) {
                if(stack%2 != 0 && stack%3 != 0 && stack%5 != 0 && stack%7 != 0) {
                    cout << "Prime:" << stack << endl;
                    stack = 0;
                    pile++;
                }
            }
            break;
        }
    }
    if (stack == 0) {
        cout << endl << "Winner in " << pile << " piles!" << endl;
    } else
    {
        cout << "Loser" << endl << endl;
    }
    
}

void winnerPile(int &stack, int &pile) {
    cout << "Prime:" << stack << endl;
    stack = 0;
    pile++;     
}

void mainMenu() {
    cout << "Welcome to Solitarie Prime!\n";
    cout << "1) New Deck\n" << 
            "2) Display Deck\n" << 
            "3) Shuffle Deck\n" << 
            "4) Play Solitaire Prime\n" <<
             "5) Exit\n\n";
   
}