#include "BlackjackDealer.h"

BlackjackDealer::BlackjackDealer()
{
    this->Setname("Dealer");
    //ctor
}

BlackjackDealer::~BlackjackDealer()
{
    //dtor
}

float BlackjackDealer::cardPoints(Card c)
{
    switch(c.GetRank())
    {
        case Card::A: return 1;
        case Card::II: return 2;
        case Card::III: return 3;
        case Card::IV: return 4;
        case Card::V: return 5;
        case Card::VI: return 6;
        case Card::VII: return 7;
        case Card::VIII: return 8;
        case Card::IX: return 9;
        case Card::X: return 10;
        case Card::J: return 10;
        case Card::Q: return 10;
        case Card::K: return 10;
    }
}

float BlackjackDealer::computePoints(Hand h)
{
    float score=0;
    int aceFlag=0;
    Hand temp_h(h);
    Card c;

    while(temp_h.getSize()>0)
    {
        c=temp_h.pickCard();

        if(c.GetRank()==Card::A)
            aceFlag += 1;
        else
            score+= BlackjackDealer::cardPoints(c);
    }

    if(aceFlag==0)
        return score;

    score = score+aceFlag*11>21? score+aceFlag : score+aceFlag*11;

    temp_h.~Hand();

    return score > 21?0:score;
};

void BlackjackDealer::computeScore(Player& p)
{
    float score = BlackjackDealer::computePoints(p.Gethand());
    p.Setscore((score>21?0:score));
}

void BlackjackDealer::giveCard(Player& p)
{
    p.pickCard(this->deck.getCard());
    BlackjackDealer::computeScore(p);
};

void BlackjackDealer::ownMatch()
{
    float score=this->Getscore();
    while(this->Getscore()<17 && this->Getscore()!=0)
    {
//        this->hand.addCard(this->deck.getCard());
//        BlackjackDealer::computeScore(*this);
        this->giveCard(*this);
    }

};

void BlackjackDealer::setUpMatch(Player& p)
{
    this->deck.reset();
    this->deck.shuffle();

    p.resetHand();
    this->resetHand();

    this->giveCard(p);
    this->giveCard(p);

    this->giveCard(*this);
}
