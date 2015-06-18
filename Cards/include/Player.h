#ifndef PLAYER_H
#define PLAYER_H

#include "Hand.h"

class Player
{
    public:
        Player();
        Player(float fish,std::string name);
        Player(Hand hand,float score,float fish,std::string name);
        Player(std::string name);
        virtual ~Player();
        Hand Gethand();
        void Sethand(Hand val);
        float Getscore();
        void Setscore(float val);
        float Getfish();
        void Setfish(float val);
        std::string Getname();
        void Setname(std::string val);
        Card playCard(Card c);
        std::list<Card> showCards();
        void pickCard(Card);
        void variateScore(float);
        void variateFish(float);
        std::string toString();
        bool operator==(Player&) const;
        bool operator>(Player&) const;
        void resetHand();

    protected:
        std::string name;
        Hand hand;
        float score;

    private:
        float fish;
};

#endif // PLAYER_H
