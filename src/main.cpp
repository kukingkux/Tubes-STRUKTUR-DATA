#include "StoryTree.h"
#include <iostream>

int main() {
    GameState state;
    StoryTree story(state);

    story.start();

    std::cout << "\nTerima kasih udah main :D\n";
    return 0;
}