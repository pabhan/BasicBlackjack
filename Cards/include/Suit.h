#ifndef SUIT_H
#define SUIT_H

#include<string>

enum class Suit
{
    public:
        Suit(string name) {
            this->name = name;
        };

        ~Suit();

        string GetName() { return name; }

        void SetName(string name) { this->name = name; }

    private:
        string name;

        enum Suit string:
        {
            H="Hearts",
            T="Tiles",
            C="Clovers",
            P="Pikes"
        };

};

#endif // SUIT_H
