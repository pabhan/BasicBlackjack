#include <iostream>
#include <vector>
#include "BlackjackDealer.h"

int main()
{
    std::string c;
    BlackjackDealer bjd;
    Player p;
    int flag;
    char playFlag='y';

    std::cout<<"*************************************************"<<std::endl;
    std::cout<<"*        WELCOME TO SUPER-BASIC BLACKJACK       *"<<std::endl;
    std::cout<<"*(draft version...not even sure about the rules)*"<<std::endl;
    std::cout<<"*  								                *"<<std::endl;
    std::cout<<"*************************************************"<<std::endl;
    std::cout<<"                   menu"<<std::endl;
    std::cout<<"*************************************************"<<std::endl;
    std::cout<<"           1 *** PLAY $$$$$$ ***"<<std::endl;
    std::cout<<"           2 *** LEAVE :( :( ***"<<std::endl;
    std::cout<<"*************************************************"<<std::endl;
    std::cout<<"         Select 1 or 2: ";
    std::cin>>c;

    while(c!="1" && c!="2")
    {
        std::cout<<"      -.- Select 1 or 2: ";
        std::cin>>c;
    }

    if(c=="1")
    {
    std::cout<<"      Insert your name: ";
        std::cin>>c;
        p = Player(c);

        while(playFlag=='y')
        {
            bjd.setUpMatch(p);
            std::cout << std::string(50, '\n');
            std::cout<<"\n\nOk, "<<p.Getname()<<", here's your cards!"<<std::endl;
            std::cout<<p.Gethand().toString()<<std::endl;
            std::cout<<p.Getname()<<": "<<p.Getscore()<<std::endl;

            std::cout<<"\n\nAnd here's the dealer's:"<<std::endl;
            std::cout<<bjd.Gethand().toString()<<std::endl;
            std::cout<<"dealer"<<": "<<bjd.Getscore()<<std::endl;

            c="";
            while(p.Getscore()<21 && p.Getscore()!=0 && c!="n")
            {
                std::cout<<"\nAnother card (y/n)? ";
                flag=0;
                while(flag==0)
                {
                    std::cin>>c;
                    if(c!="y" && c!="n")
                        std::cout<<"-.- reply y or n"<<std::endl;
                    else
                        flag=1;
                }
                if(c=="y")
                {
                    bjd.giveCard(p);
                    std::cout<<p.Gethand().toString()<<std::endl;
                    std::cout<<p.Getname()<<": "<<p.Getscore()<<std::endl;
                }
                            }
            std::cout<<"\n\nYour cards:"<<std::endl;
            std::cout<<p.Gethand().toString()<<std::endl;
            std::cout<<p.Getname()<<": "<<p.Getscore()<<std::endl;

            std::cout<<"Dealer's turn!"<<std::endl;
            bjd.ownMatch();
            std::cout<<bjd.Gethand().toString()<<std::endl;
            std::cout<<"dealer"<<": "<<bjd.Getscore()<<std::endl;

            if(bjd.Getscore()>=p.Getscore())
                std::cout<<"\n\n...too bad, you lose :'("<<std::endl;
            else
                std::cout<<"\n\n...great, you won! :D"<<std::endl;

            std::cout<<"\n\n\t\t...play again(y/n)? ";
            std::cin>>playFlag;

            while(playFlag!='y' && playFlag!='n')
            {
                    std::cout<<"\t\t-.- -.- (y/n)? ";
                    std::cin>>playFlag;
            }
        }
    }
    else
    {
        std::cout<<"C ya!"<<std::endl;
        return 0;
    }

    std::cout<<"C ya!"<<std::endl;
    return 0;
}
