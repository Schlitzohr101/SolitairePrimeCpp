#include "Card.h"

Card::Card() {
    rank = ' ';
    suit = ' ';
}

Card::Card(char r, char s) {
    rank = toupper(r);
    suit = s;
}

int Card::getRank() {
    int num;
    switch(rank) {
        case 'A': num = 1;
        break;
        case '2': num = 2;
        break;
        case '3': num = 3;
        break;
        case '4': num = 4;
        break;
        case '5': num = 5;
        break;
        case '6': num = 6;
        break;
        case '7': num = 7;
        break;
        case '8': num = 8;
        break;
        case '9': num = 9;
        break;
        case '10': num = 10;
        break;
        case 'J': num = 10;
        break;
        case 'Q': num = 10;
        break;
        case 'K': num = 10;
        break;
        default: num = -1;
        break;
    }
    return num;
}

void Card::setRank(char r) {
    rank = toupper(r);
}

char Card::getSuit() {
    return suit;
}

void Card::setSuit(char s) {
    suit = s;
}

void Card::showCard() {
    std::cout << rank << suit << ", ";
}