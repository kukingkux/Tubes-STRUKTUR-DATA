#include "StoryTree.h"
#include <iostream>

using namespace std;

StoryTree::StoryTree(GameState& s) : state(s) {
    root = buildStory();
}

void StoryTree::start() {
    runNode(root);
}

void StoryTree::runNode(StoryNode* node) {
    if (!node) return;

    if (node->condition && !node->condition(state)) {
        return;
    }

    cout << "\n" << node->text << "\n";

    if (node->effect) {
        node->effect(state);
    }

    if (node->isEnding) {
        cout << "\n=== TO BE CONTINUED. . . ===\n";
        return;
    }

    cout << "1. " << node->choiceA << "\n";
    cout << "2. " << node->choiceB << "\n";
    cout << "Choose: ";

    int choice;
    cin >> choice;

    if (choice == 1) {
        runNode(node->left);
    } else {
        runNode(node->right);
    }
}

StoryNode* StoryTree::buildStory() {
    // === ENDINGS ===
    auto orderEnding = new StoryNode {
        "Skjorheim stands frozen in order. Dragons are hunted to extinction.","", "", nullptr, nullptr, true
    };

    auto chaosEnding = new StoryNode {
        "Dragons rule the skies again. Civilization burns beneath prophecy.", "", "", nullptr, nullptr, true
    };

    auto balanceEnding = new StoryNode {
        "Some dragons sleep. Some watch. The world endures.", "", "", nullptr, nullptr, true
    };

    // === DRAGON DECISION ===
    auto dragonChoice = new StoryNode {
        "A dragon awakens atop Puncak Batu. It watches you silently.",
        "Kill the dragon",
        "Liten to the dragon",
        nullptr,
        [](const GameState& s){ return s.dragonAwakened; }
    };

    dragonChoice->left = orderEnding;
    dragonChoice->right = balanceEnding;

    // === FACTIONS ===
    auto rebels = new StoryNode {
        "The Pribumi beg you to restore the dragons.",
        "Help them",
        "Refuse",
        [](GameState& s){ s.chaos += 2; s.helpedRebels = true; }
    };

    rebels->left = chaosEnding;
    rebels->left = dragonChoice;

    auto scholars = new StoryNode {
        "Bisikan Akbar offers forbidden dragon knowledge.",
        "Study the Words",
        "Reject them",
        [](GameState& s){ s.knowledge += 2; s.joinedScholars = true; }
    };

    scholars->left = dragonChoice;
    scholars->right = rebels;

    auto order = new StoryNode {
        "Sumpah Besi demands you hunt all dragons.",
        "Join them",
        "Refuse",
        [](GameState& s){ s.order += 2; s.joinedOrder = true; }
    };

    order->left = dragonChoice;
    order->right = scholars;

    // === START ===
    auto start = new StoryNode{
        "You awaken near Benteng Beku. Smoke rises in the distance.",
        "Seek the soldiers",
        "Follow the whispers",
        nullptr
    };

    start->left = order;
    start->right = scholars;

    return start;
}