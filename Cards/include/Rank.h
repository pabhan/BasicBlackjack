#ifndef RANK_H
#define RANK_H

#include<string>

class Rank
{
    public:
        Rank();
        virtual ~Rank();
        string Getsymbol() { return symbol; }
        void Setsymbol(string val) { symbol = val; }
    protected:
    private:
        string symbol;

        enum Rank
        {
            A,
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

};

#endif // RANK_H
