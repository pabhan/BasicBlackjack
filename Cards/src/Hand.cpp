#include "Hand.h"

Hand::Hand()
{
    //ctor
}

Hand::~Hand()
{
    //dtor
}

std::list<Card> Hand::showHand()
{
    return cards;
};

int Hand::getSize()
{
    return cards.size();
};

void Hand::addCard(Card c)
{
    this->cards.push_front(c);
};

void Hand::removeCard(Card c)
{
    cards.remove(c);
};

Card Hand::pickCard()
{
    Card c(cards.front());
    cards.pop_front();
    return c;
};

void Hand::reset()
{
    cards.clear();
};

Card Hand::playCard(Card c)
{
    this->removeCard(c);
    return c;
};


std::string Hand::toString()
{
    std::string s="";
    for(std::list<Card>::iterator it = cards.begin(), end = cards.end(); it != end; ++it)
        s=s+it->toString()+"\n";
    return s;
};

