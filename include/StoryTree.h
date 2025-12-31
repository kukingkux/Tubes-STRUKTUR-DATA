#ifndef STORYTREE_H_INCLUDED
#define STORYTREE_H_INCLUDED

#include "StoryNode.h"

class StoryTree {
public:
    StoryTree(GameState& gameState);
    void start();

private:
    StoryNode* root;
    GameState& state;
    
    void runNode(StoryNode* node);
    StoryNode* buildStory();
};

#endif