#include "Deck.h"


Deck::Deck()
{
    for(int suit=Card::Hearts; suit<=Card::Pikes; suit++) {
        for(int rank=Card::A; rank<=Card::K; rank++) {
            cards.push_front(Card(Card::TranslateSuit(suit),Card::TranslateRank(rank)));
        }
    }
};

Deck::~Deck()
{

};

Card Deck::getCard()
{
    Card c = cards.front();
    cards.pop_front();
    return c;
};

int Deck::getCardsLeft()
{
    return cards.size();
};

void Deck::shuffle()
{
    std::srand(std::time(0));
    int r=std::rand() % 100;
    int i1,i2,i = 0,n;
    std::list<Card>::iterator it1,it2;
    Card c;

    while(i<r)
    {
        i1=std::rand() % cards.size();
        i2=std::rand() % cards.size();

        it1=cards.begin();
        n=0;
        while(n<i1)
        {
            it1++;
            n++;
        }

        it2=cards.begin();
        n=0;
        while(n<i2)
        {
            it2++;
            n++;
        }

        c=(*it1);
        (*it1)=(*it2);
        (*it2) = c;

        i++;
    }

};

void Deck::showCards()
{
    for (std::list<Card>::iterator it = cards.begin(), end = cards.end(); it != end; ++it) {
        std::cout << it->toString() <<std::endl;
    }
};

void Deck::exportDeck()
{
    std::ofstream out("printedeck.txt");
    for (std::list<Card>::iterator it = cards.begin(), end = cards.end(); it != end; ++it) {
        out << it->toString() <<std::endl;
    }
};

void Deck::reset()
{
    cards.clear();
    for(int suit=Card::Hearts; suit<=Card::Pikes; suit++) {
        for(int rank=Card::A; rank<=Card::K; rank++) {
            cards.push_front(Card(Card::TranslateSuit(suit),Card::TranslateRank(rank)));
        }
    }
};



