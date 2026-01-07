#include "Utils.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <chrono>
#include <thread>
#include <conio.h>
#include <limits>

using namespace std;

TextSettingsStruct textSettings;

void clearInput() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void typeText(const string& text, int delayMs) {
    if (text.empty()) return;

    while (_kbhit()) {
        _getch();
    }

    cout << textSettings.color;

    // Skip dialogue if enabled in settings
    if (textSettings.skipTyping) {
        cout << text << RESET << "\n";
        return;
    }

    int currentSpeed = textSettings.speedMs;

    for (size_t i = 0; i < text.size(); i++) {
        cout << text[i] << flush;

        if (currentSpeed > 0) {
            this_thread::sleep_for(chrono::milliseconds(currentSpeed));

            // Check for Keyboard Input - Skip Dialogue
            if (_kbhit()) {
                // Consume keyboard input
                _getch();
                // Set speed to 0
                currentSpeed = 0;
            }
        }
    }
    cout << RESET << "\n";
}

string loadStoryText(const string& filepath) {
    ifstream file(filepath);
    if (!file.is_open()) {
        return "[ERROR: Could not load story text from " + filepath + "]\n";
    }
    stringstream buffer;
    buffer << file.rdbuf();
    return buffer.str();
}

void damageOutput(int index, int damage, string enemy) {
    // 0 = Player Dmg
    // 1 = Enemy Dmg
    if (index == 0) {
        cout << "You dealt " << damage << " damage to " << enemy << "!\n";
    } else if (index == 1) {
        cout << "You take " << damage << " damage!\n";
    }
}