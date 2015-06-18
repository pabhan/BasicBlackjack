#ifndef BLACKJACKDEALER_H
#define BLACKJACKDEALER_H

#include<Player.h>
#include <Dealer.h>

class BlackjackDealer: public Dealer, public Player
{
    public:
        BlackjackDealer();
        ~BlackjackDealer();
        static float cardPoints(Card c);
        static float computePoints(Hand h);
        Player chooseWinner();
        void computeScore(Player&);
        void giveCard(Player&);
        void ownMatch();
        void setUpMatch(Player&);

};

#endif // BLACKJACKDEALER_H
