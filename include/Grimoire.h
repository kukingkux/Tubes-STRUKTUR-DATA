#ifndef GRIMOIRE_H_INCLUDED
#define GRIMOIRE_H_INCLUDED

#include <string>
#include <vector>

struct WordOfPower {
    std::string name;
    std::string description;
    int poweer;
    int level;
};

class Grimoire {
public:
    void learnWord(const std::string& name, const std::string& description, int power);
    void openMenu(); // Menu for Read, Update, Delete

private:
    std::vector<WordOfPower> words;

    void listWords() const; // Read
    void upgradeWord(int index); // Update
    void forgetWord(int index); // Delete
};

#endif