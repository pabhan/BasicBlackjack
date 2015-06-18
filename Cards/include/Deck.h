#ifndef DECK_H
#define DECK_H

#include<list>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>

#include "Card.h"

class Deck
{
    public:
        Deck();
        ~Deck();
        Card getCard();
        Card getCard(int num);
        int getCardsLeft();
        void shuffle();
        void showCards();
        void exportDeck();
        void reset();

    private:
        std::list<Card> cards;
};

#endif // DECK_H
