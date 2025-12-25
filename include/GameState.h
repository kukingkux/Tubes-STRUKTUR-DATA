#ifndef GAMESTATE_H_INCLUDED
#define GAMESTATE_H_INCLUDED
#include <string>

struct GameState {
    // Player
    int health = 100;

    // Moral axes
    int order = 0;
    int knowledge = 0;
    int chaos = 0;

    // World Flags
    bool dragonAwakened = false;
    bool joinedOrder = false;
    bool joinedScholars = false;
    bool helpedRebels = false;
};

#endif