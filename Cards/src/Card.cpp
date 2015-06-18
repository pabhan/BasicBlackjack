#include "Card.h"

Card::Card()
{
};

Card::~Card()
{
};

Card::Card(Suit suit, Rank rank)
{
    this->suit = suit;
    this->rank = rank;
};

Card::Suit Card::TranslateSuit(int suit)
{
    switch(suit)
    {
        case 1:
            return Card::Hearts;
        case 2:
            return Card::Tiles;
        case 3:
            return Card::Clovers;
        case 4:
            return Card::Pikes;
    }

};

Card::Rank Card::TranslateRank(int rank)
{
    switch(rank) {
        case 1: return Card::A;
        case 2: return Card::II;
        case 3: return Card::III;
        case 4: return Card::IV;
        case 5: return Card::V;
        case 6: return Card::VI;
        case 7: return Card::VII;
        case 8: return Card::VIII;
        case 9: return Card::IX;
        case 10: return Card::X;
        case 11: return Card::J;
        case 12: return Card::Q;
        case 13: return Card::K;
    }
};

std::string Card::toString()
{
    std::string s="";

    switch(this->rank) {
        case A: s=s+"A";
        break;
        case II: s=s+"II";
        break;
        case III: s=s+"III";
        break;
        case IV: s=s+"IV";
        break;
        case V: s=s+"V";
        break;
        case VI: s=s+"VI";
        break;
        case VII: s=s+"VII";
        break;
        case VIII: s=s+"VIII";
        break;
        case IX: s=s+"IX";
        break;
        case X: s=s+"X";
        break;
        case J: s=s+"J";
        break;
        case Q: s=s+"Q";
        break;
        case K: s=s+"K";
        break;
    }

    s=s+" ";

    switch(this->suit) {
        case Hearts: s=s+"Hearts";
        break;
        case Tiles: s=s+"Tiles";
        break;
        case Clovers: s=s+"Clovers";
        break;
        case Pikes: s=s+"Pikes";
        break;
    }

    return s;

};

bool Card::operator==(const Card& c) const
{
    return (this->suit==c.suit && this->rank==c.rank);
}

Card::Suit Card::GetSuit()
{
    return this->suit;
}

Card::Rank Card::GetRank()
{
    return this->rank;
}





