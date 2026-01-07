```bash
 .oooooo..o oooo            o8o                    oooo                   o8o
d8P'    `Y8 `888            `"'                    `888                   `"'
Y88bo.       888  oooo     oooo  .ooooo.  oooo d8b  888 .oo.    .ooooo.  oooo  ooo. .oo.  .oo.
 `"Y8888o.   888 .8P'      `888 d88' `88b `888""8P  888P"Y88b  d88' `88b `888  `888P"Y88bP"Y88b
     `"Y88b  888888.        888 888   888  888      888   888  888ooo888  888   888   888   888
oo     .d8P  888 `88b.      888 888   888  888      888   888  888    .o  888   888   888   888
8""88888P'  o888o o888o     888 `Y8bod8P' d888b    o888o o888o `Y8bod8P' o888o o888o o888o o888o
                            888
                        .o. 88P
                        `Y888P
```

###

<div align="center">
  <!-- <img src="https://visitor-badge.laobi.icu/badge?page_id=kukingkux"/> -->
</div>

###

<h1 align="left">A College Project: Skjorheim (Simple Narrative Game)</h1>

###

<h3 align="left">👩‍💻  About This Project</h3>

###

People in this project:
<br>

- <svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" class="icon icon-tabler icons-tabler-outline icon-tabler-code"><path stroke="none" d="M0 0h24v24H0z" fill="none"/><path d="M7 8l-4 4l4 4" /><path d="M17 8l4 4l-4 4" /><path d="M14 4l-4 16" /></svg> Keishin Naufa Alfaridzhi (<a href="https://github.com/kukingkux">103112400061</a>)
- <svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" class="icon icon-tabler icons-tabler-outline icon-tabler-telescope"><path stroke="none" d="M0 0h24v24H0z" fill="none"/><path d="M6 21l6 -5l6 5" /><path d="M12 13v8" /><path d="M3.294 13.678l.166 .281c.52 .88 1.624 1.265 2.605 .91l14.242 -5.165a1.023 1.023 0 0 0 .565 -1.456l-2.62 -4.705a1.087 1.087 0 0 0 -1.447 -.42l-.056 .032l-12.694 7.618c-1.02 .613 -1.357 1.897 -.76 2.905l-.001 0" /><path d="M14 5l3 5.5" /></svg> Reza Sahrul Nuramdani (<a href="https://github.com/solTTeucas">103112400265</a>)
- <svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" class="icon icon-tabler icons-tabler-outline icon-tabler-device-gamepad-2"><path stroke="none" d="M0 0h24v24H0z" fill="none"/><path d="M12 5h3.5a5 5 0 0 1 0 10h-5.5l-4.015 4.227a2.3 2.3 0 0 1 -3.923 -2.035l1.634 -8.173a5 5 0 0 1 4.904 -4.019h3.4" /><path d="M14 15l4.07 4.284a2.3 2.3 0 0 0 3.925 -2.023l-1.6 -8.232" /><path d="M8 9v2" /><path d="M7 10h2" /><path d="M14 10h2" /></svg> Dafa Awal Wahyu Pambudi (<a href="https://github.com/3mptysouls">103112400275</a>)
- <svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" class="icon icon-tabler icons-tabler-outline icon-tabler-book"><path stroke="none" d="M0 0h24v24H0z" fill="none"/><path d="M3 19a9 9 0 0 1 9 0a9 9 0 0 1 9 0" /><path d="M3 6a9 9 0 0 1 9 0a9 9 0 0 1 9 0" /><path d="M3 6l0 13" /><path d="M12 6l0 13" /><path d="M21 6l0 13" /></svg> Elfan Endriyanto (<a href="https://github.com/endriyanto-beep">103112430040</a>)

###

<h3 align="left">🛠 Language and tools</h3>

###

<div align="left">
  <img src="https://cdn.jsdelivr.net/gh/devicons/devicon@latest/icons/cplusplus/cplusplus-original.svg" height="40" alt="c++ logo"  />
</div>

###

# Skjorheim

Skjorheim is a C++ text-based RPG that invites players into a mythic, Skyrim-inspired world. The game features a branching narrative, turn-based combat, and a "Words of Power" magic system managed via a custom Grimoire data structure.

## Overview

In Skjorheim, you play as a protagonist awakening in a cold, hostile land. Your journey involves making critical choices that affect your alignment (Order vs. Chaos vs. Balance), engaging in combat with creatures like wolves and dragons, and discovering ancient Words of Power.

## Key Features

- **Branching Storyline:** A narrative engine built on a binary tree structure (`StoryTree`), allowing for impactful choices and multiple endings.
- **Turn-Based Combat:** A strategic battle system (`BattleSystem`) where you manage Health Points (HP) and choose between Light Attacks, Heavy Attacks, and Magic (Words of Power).
- **Grimoire System:** A custom linked-list implementation (`Grimoire`) to manage learned spells (CRUD operations: Create/Learn, Read/View, Update/Upgrade, Delete/Forget).

## Data Structures

The project demonstrates the use of several fundamental data structures:

1.  **Binary Tree (`StoryTree` & `StoryNode`)**:

    - Used to model the narrative flow.
    - Each node represents a story event or decision point.
    - Traversals (Left/Right) correspond to player choices.
    - Special nodes handle complex routing (e.g., checking Grimoire state) without expanding the tree structure.

2.  **Singly Linked List (`Grimoire` & `GrimoireNode`)**:

    - Manages the player's collection of "Words of Power".
    - Supports dynamic addition (learning words), removal (forgetting words), and modification (upgrading words).
    - Chosen over `std::vector` to demonstrate manual memory management and pointer manipulation.

3.  **Finite State Machine (Implicit)**:
    - The `BattleSystem` operates as a simple turn-based state machine (Player Turn <-> Enemy Turn), handling win/loss conditions.

## Grimoire & Story Impact

The **Grimoire** is not just a list of spells; it directly influences the narrative:

- **0 Words:** The protagonist is "silent" and may be perceived as weak or prey by powerful entities like the Dragon.
- **1 Word:** The protagonist has potential, unlocking specific dialogue options and recognition from NPCs.
- **Upgraded/Multiple Words:** The protagonist is a true "Voice Bearer," commanding respect (or fear) and altering the endings significantly.

Certain story paths and endings are only accessible based on your mastery of the Voice.

## How to Build and Run

### Requirements

- A C++ compiler (GCC recommended).
- Standard C++ libraries.

### Compilation

Navigate to the project root directory and run:

Go to directory ([Parent]/) then run below commands in the terminal/console.

```bash
g++ -Iinclude src/*.cpp -o skjorheim
```

then,

```bash
./skjorheim
```

###
