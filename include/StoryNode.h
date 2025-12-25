#pragma once
#include <string>
#include <functional>
#include "GameState.h"

struct StoryNode {
    std::string next;

    std::string choiceA;
    std::string choiceB;

    StoryNode* left = nullptr;
    StoryNode* right = nullptr;

    std::function<void(GameState&)> effect;
    std::function<bool(const GameState&)> condition;

    bool isEnding = false;
};