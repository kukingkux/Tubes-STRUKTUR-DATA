#ifndef STORYNODE_H_INCLUDED
#define STORYNODE_H_INCLUDED
#include <string>
#include <functional>
#include "GameState.h"

struct StoryNode {
    std::string text;
    std::string choiceA;
    std::string choiceB;

    StoryNode* left;
    StoryNode* right;

    bool hasBattle;
    int enemyType;

    bool isEnding = false;
};

#endif