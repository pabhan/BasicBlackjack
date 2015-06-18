#ifndef HAND_H
#define HAND_H

#include "Card.h"
#include <cstdlib>
#include<list>
#include <iostream>

class Hand
{
    public:
        Hand();
        ~Hand();
        std::list<Card> showHand();
        int getSize();
        void addCard(Card);
        void removeCard(Card c);
        void reset();
        Card pickCard();
        Card playCard(Card);
        std::string toString();

    private:
        std::list<Card> cards;
};

#endif // HAND_H
