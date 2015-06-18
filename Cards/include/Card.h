#ifndef CARD_H
#define CARD_H

#include<iostream>

class Card
{
    public:

        enum Suit
        {
            Hearts=1,
            Tiles,
            Clovers,
            Pikes
        };

        enum Rank
        {
            A=1,
            II,
            III,
            IV,
            V,
            VI,
            VII,
            VIII,
            IX,
            X,
            J,
            Q,
            K,
        };

        Card();

        Card(Suit, Rank);

        ~Card();

        static Suit TranslateSuit(int);
        Suit GetSuit();

        static Rank TranslateRank(int);
        Rank GetRank();

        std::string toString();

        bool operator==(const Card& c) const;

    private:
        Suit suit;
        Rank rank;
};

#endif // CARD_H
