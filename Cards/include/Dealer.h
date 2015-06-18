#ifndef DEALER_H
#define DEALER_H

#include "Deck.h"

class Dealer
{
    public:
        Dealer();
        virtual ~Dealer();

        Deck Getdeck();

    protected:
        Deck deck;
};

#endif // DEALER_H
