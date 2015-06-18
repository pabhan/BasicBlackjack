#include "Player.h"

Player::Player()
{
    this->score=0;
    this->fish=0;
};

Player::Player(Hand hand,float score,float fish,std::string name)
{
    this->hand=hand;
    this->score=score;
    this->fish=fish;
    this->name=name;
};

Player::Player(float fish,std::string name)
{
    this->fish=fish;
    this->name=name;
    this->score=0;
};

Player::Player(std::string name)
{
    this->name=name;
    this->score=0;
    this->fish=0;
};

Player::~Player()
{

};

Hand Player::Gethand() { return hand; }

void Player::Sethand(Hand val) { hand = val; }

float Player::Getscore() { return score; }

void Player::Setscore(float val) { score = val; }

float Player::Getfish() { return fish; }

void Player::Setfish(float val) { fish = val; }

std::string Player::Getname() { return name; }

void Player::Setname(std::string val) { name = val; }

Card Player::playCard(Card c)
{
    return this->hand.playCard(c);
};

std::list<Card> Player::showCards()
{
    return this->hand.showHand();
};

void Player::pickCard(Card c)
{
    this->hand.addCard(c);
}

void Player::variateScore(float score)
{
    this->score+=score;
}

void Player::variateFish(float fish)
{
    this->fish+=fish;
}

std::string Player::toString()
{
    std::string s="";
    s=s+this->Getname()+":\n"+this->Gethand().toString()+"\n";
    return s;
}

bool Player::operator==(Player& p) const
{
    return this->score==p.score;
};

bool Player::operator>(Player& p) const
{
    return this->score>p.score;
};

void Player::resetHand()
{
    this->hand.reset();
    this->score=0;
}

