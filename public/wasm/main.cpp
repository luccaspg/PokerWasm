#include <stdio.h>
#include <emscripten/emscripten.h>
#include <emscripten/bind.h>
#include <vector>
#include <iostream>
#include <memory>

using namespace memory;
using namespace std;
using namespace emscripten;

int main(int argc, char **argv)
{
    printf("WASM Loaded");
}

#ifdef __cplusplus
extern "C"
{
#endif

    class Card
    {
        string suit;
        string card;
        int value;
    };

    class Player
    {
    private:
        unique_ptr<Card> card1;
        unique_ptr<Card> card2;
        int cash;
        string name;

    public:
        Player(int cash, string name)
        {
            this.cash = cash;
            this.name = name;
        }
    };

    class Game
    {
    private:
        vector<unique_ptr<Card>> players;
        vector<unique_ptr<Card>> deck;
        vector<unique_ptr<Card>> table;
        int playerCount;
        int pot;

        void generateDeck()
        {
        }

    public:
        Game(int players, vector<string> names, int pot, int initCash)
        {
            this.playerCount = players;
            this.pot = pot;
            generateDeck();
            for (string name : names) {
                
            }
        }
    };

#ifdef __cplusplus
}
#endif
