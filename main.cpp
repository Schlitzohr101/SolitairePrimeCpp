//William Murray
//CECS 282-05
//Prog - 0 Happy Birthday
//Aug 29, 2019
#include <iostream>
#include "Card.h"

using namespace std;

void mainMenu();

int main() {
    mainMenu();
    Card meiscard = Card('A','D');
    meiscard.showCard();
    return 0;
}

void mainMenu() {
    cout << "Welcome to Solitarie Prime!\n";
    cout << "1) New Deck\n" << 
            "2) Display Deck\n" << 
            "3) Shuffle Deck\n" << 
            "4) Play Solitaire Prime\n" <<
             "5) Exit\n\n";
   
}