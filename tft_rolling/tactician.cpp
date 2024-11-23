#include "tactician.h"
#include <iostream>

Tactician::Tactician(std::string tactician_name, int gold_spent, int level, int xp, int display) :
    tacticianName(tactician_name), goldSpent(gold_spent), playerLevel(level), playerXP(xp), displayXP(display) {}

std::string Tactician::get_tacticianName() const {

    return tacticianName;

}

int Tactician::get_goldSpent() const {

    return goldSpent;

}

int Tactician::get_level() const {

    return playerLevel;

}

int Tactician::get_playerXP() const {

    return playerXP;
}

int Tactician::get_displayXP() const {

    return displayXP;
}

void Tactician::LevelUp() {
    if (playerXP >= 278) {
        std::cout << "You are already at the Max Level (10)" << '\n';
    }
    else {
        goldSpent += 4;
        playerXP += 4;
        displayXP += 4;
        if (playerXP >= 278) {
            playerLevel = 10;
            displayXP = 278;
            std::cout << "You are level " << playerLevel << '\n'
                << "Maxed Level";
        }
        else if (playerXP >= 194) {
            playerLevel = 9;
            displayXP += 4;
            std::cout << "You are level " << playerLevel << '\n';
        }
        else if (playerXP >= 122) {
            playerLevel = 8;
            std::cout << "You are level " << playerLevel << '\n';
        }
        else if (playerXP >= 74) {
            playerLevel = 7;
            std::cout << "You are level " << playerLevel << '\n';
        }
        else if (playerXP >= 38) {
            playerLevel = 6;
            std::cout << "You are level " << playerLevel << '\n';
        }
        else if (playerXP >= 18) {
            playerLevel = 5;
            std::cout << "You are level " << playerLevel << '\n';
        }
        else if (playerXP >= 8) {
            playerLevel = 4;
            std::cout << "You are level " << playerLevel << '\n';
        }
        else if (playerXP >= 2) {
            playerLevel = 3;
            std::cout << "You are level " << playerLevel << '\n';
        }
    }
}

void Tactician::Shop(int level) {
    goldSpent += 2;
    int slot1 = 1; int slot2 = 1; int slot3 = 1; int slot4 = 1; int slot5 = 1;
    int random_num1 = rand() % 100 + 1;
    int random_num2 = rand() % 100 + 1;
    int random_num3 = rand() % 100 + 1;
    int random_num4 = rand() % 100 + 1;
    int random_num5 = rand() % 100 + 1;

    if (level == 2) {
        std::cout << " - - - - - " << "\n";
        std::cout << "|" << slot1 << "|" << slot2 << "|" << slot3 << "|" << slot4 << "|" << slot5 << "|" << "\n";
        std::cout << " - - - - - " << "\n";
    }
    else if (level == 3) {
        if (random_num1 <= 25) {
            slot1 = 2;
        }
        if (random_num2 <= 25) {
            slot2 = 2;
        }
        if (random_num3 <= 25) {
            slot3 = 2;
        }
        if (random_num4 <= 25) {
            slot4 = 2;
        }
        if (random_num5 <= 25) {
            slot5 = 2;
        }
        std::cout << " - - - - - " << "\n";
        std::cout << "|" << slot1 << "|" << slot2 << "|" << slot3 << "|" << slot4 << "|" << slot5 << "|" << "\n";
        std::cout << " - - - - - " << "\n";
    }
    else if (level == 4) {
        if (random_num1 <= 15) {
            slot1 = 3;
        }
        else if (random_num1 > 15 && random_num1 <= 45) {
            slot1 = 2;
        }
        if (random_num2 <= 15) {
            slot2 = 3;
        }
        else if (random_num2 > 15 && random_num2 <= 45) {
            slot2 = 2;
        }
        if (random_num3 <= 15) {
            slot3 = 3;
        }
        else if (random_num3 > 15 && random_num3 <= 45) {
            slot3 = 2;
        }
        if (random_num4 <= 15) {
            slot4 = 3;
        }
        else if (random_num4 > 15 && random_num4 <= 45) {
            slot4 = 2;
        }
        if (random_num5 <= 15) {
            slot5 = 3;
        }
        else if (random_num5 > 15 && random_num5 <= 45) {
            slot5 = 2;
        }
        std::cout << " - - - - - " << "\n";
        std::cout << "|" << slot1 << "|" << slot2 << "|" << slot3 << "|" << slot4 << "|" << slot5 << "|" << "\n";
        std::cout << " - - - - - " << "\n";
    }
    else if (level == 5) {
        if (random_num1 <= 2) {
            slot1 = 4;
        }
        else if (random_num1 > 2 && random_num1 <= 22) {
            slot1 = 3;
        }
        else if (random_num1 > 22 && random_num1 <= 55) {
            slot1 = 2;
        }
        if (random_num2 <= 2) {
            slot2 = 4;
        }
        else if (random_num2 > 2 && random_num2 <= 22) {
            slot2 = 3;
        }
        else if (random_num2 > 22 && random_num2 <= 55) {
            slot2 = 2;
        }
        if (random_num3 <= 2) {
            slot3 = 4;
        }
        else if (random_num3 > 2 && random_num3 <= 22) {
            slot3 = 3;
        }
        else if (random_num3 > 22 && random_num3 <= 55) {
            slot3 = 2;
        }
        if (random_num4 <= 2) {
            slot4 = 4;
        }
        else if (random_num4 > 2 && random_num4 <= 22) {
            slot4 = 3;
        }
        else if (random_num4 > 22 && random_num4 <= 55) {
            slot4 = 2;
        }
        if (random_num5 <= 2) {
            slot5 = 4;
        }
        else if (random_num5 > 2 && random_num5 <= 22) {
            slot5 = 3;
        }
        else if (random_num5 > 22 && random_num5 <= 55) {
            slot5 = 2;
        }
        std::cout << " - - - - - " << "\n";
        std::cout << "|" << slot1 << "|" << slot2 << "|" << slot3 << "|" << slot4 << "|" << slot5 << "|" << "\n";
        std::cout << " - - - - - " << "\n";
    }
    else if (level == 6) {
        if (random_num1 <= 5) {
            slot1 = 4;
        }
        else if (random_num1 > 5 && random_num1 <= 30) {
            slot1 = 3;
        }
        else if (random_num1 > 30 && random_num1 <= 70) {
            slot1 = 2;
        }
        if (random_num2 <= 5) {
            slot2 = 4;
        }
        else if (random_num2 > 5 && random_num2 <= 30) {
            slot2 = 3;
        }
        else if (random_num2 > 30 && random_num2 <= 70) {
            slot2 = 2;
        }
        if (random_num3 <= 5) {
            slot3 = 4;
        }
        else if (random_num3 > 5 && random_num3 <= 30) {
            slot3 = 3;
        }
        else if (random_num3 > 30 && random_num3 <= 70) {
            slot3 = 2;
        }
        if (random_num4 <= 5) {
            slot4 = 4;
        }
        else if (random_num4 > 5 && random_num4 <= 30) {
            slot4 = 3;
        }
        else if (random_num4 > 30 && random_num4 <= 70) {
            slot4 = 2;
        }
        if (random_num5 <= 5) {
            slot5 = 4;
        }
        else if (random_num5 > 5 && random_num5 <= 30) {
            slot5 = 3;
        }
        else if (random_num5 > 30 && random_num5 <= 70) {
            slot5 = 2;
        }
        std::cout << " - - - - - " << "\n";
        std::cout << "|" << slot1 << "|" << slot2 << "|" << slot3 << "|" << slot4 << "|" << slot5 << "|" << "\n";
        std::cout << " - - - - - " << "\n";

    }
    else if (level == 7) {
        if (random_num1 <= 1) {
            slot1 = 5;
        }
        else if (random_num1 > 1 && random_num1 <= 11) {
            slot1 = 4;
        }
        else if (random_num1 > 11 && random_num1 <= 51) {
            slot1 = 3;
        }
        else if (random_num1 > 51 && random_num1 <= 81) {
            slot1 = 2;
        }
        if (random_num2 <= 1) {
            slot2 = 5;
        }
        else if (random_num2 > 1 && random_num2 <= 11) {
            slot2 = 4;
        }
        else if (random_num2 > 11 && random_num2 <= 51) {
            slot2 = 3;
        }
        else if (random_num2 > 51 && random_num2 <= 81) {
            slot2 = 2;
        }
        if (random_num3 <= 1) {
            slot3 = 5;
        }
        else if (random_num3 > 1 && random_num3 <= 11) {
            slot3 = 4;
        }
        else if (random_num3 > 11 && random_num3 <= 51) {
            slot3 = 3;
        }
        else if (random_num3 > 51 && random_num3 <= 81) {
            slot3 = 2;
        }
        if (random_num4 <= 1) {
            slot4 = 5;
        }
        else if (random_num4 > 1 && random_num4 <= 11) {
            slot4 = 4;
        }
        else if (random_num4 > 11 && random_num4 <= 51) {
            slot4 = 3;
        }
        else if (random_num4 > 51 && random_num4 <= 81) {
            slot4 = 2;
        }
        if (random_num5 <= 1) {
            slot5 = 5;
        }
        else if (random_num5 > 1 && random_num5 <= 11) {
            slot5 = 4;
        }
        else if (random_num5 > 11 && random_num5 <= 51) {
            slot5 = 3;
        }
        else if (random_num5 > 51 && random_num5 <= 81) {
            slot5 = 2;
        }
        std::cout << " - - - - - " << "\n";
        std::cout << "|" << slot1 << "|" << slot2 << "|" << slot3 << "|" << slot4 << "|" << slot5 << "|" << "\n";
        std::cout << " - - - - - " << "\n";
    }
    else if (level == 8) {
        if (random_num1 <= 3) {
            slot1 = 5;
        }
        else if (random_num1 > 3 && random_num1 <= 25) {
            slot1 = 4;
        }
        else if (random_num1 > 25 && random_num1 <= 57) {
            slot1 = 3;
        }
        else if (random_num1 > 57 && random_num1 <= 82) {
            slot1 = 2;
        }
        if (random_num2 <= 3) {
            slot2 = 5;
        }
        else if (random_num2 > 3 && random_num2 <= 25) {
            slot2 = 4;
        }
        else if (random_num2 > 25 && random_num2 <= 57) {
            slot2 = 3;
        }
        else if (random_num2 > 57 && random_num2 <= 82) {
            slot2 = 2;
        }
        if (random_num3 <= 3) {
            slot3 = 5;
        }
        else if (random_num3 > 3 && random_num3 <= 25) {
            slot3 = 4;
        }
        else if (random_num3 > 25 && random_num3 <= 57) {
            slot3 = 3;
        }
        else if (random_num3 > 57 && random_num3 <= 82) {
            slot3 = 2;
        }
        if (random_num4 <= 3) {
            slot4 = 5;
        }
        else if (random_num4 > 3 && random_num4 <= 25) {
            slot4 = 4;
        }
        else if (random_num4 > 25 && random_num4 <= 57) {
            slot4 = 3;
        }
        else if (random_num4 > 57 && random_num4 <= 82) {
            slot4 = 2;
        }
        if (random_num5 <= 3) {
            slot5 = 5;
        }
        else if (random_num5 > 3 && random_num5 <= 25) {
            slot5 = 4;
        }
        else if (random_num5 > 25 && random_num5 <= 57) {
            slot5 = 3;
        }
        else if (random_num5 > 57 && random_num5 <= 82) {
            slot5 = 2;
        }
        std::cout << " - - - - - " << "\n";
        std::cout << "|" << slot1 << "|" << slot2 << "|" << slot3 << "|" << slot4 << "|" << slot5 << "|" << "\n";
        std::cout << " - - - - - " << "\n";
    }
    else if (level == 9) {
        if (random_num1 <= 10) {
            slot1 = 5;
        }
        else if (random_num1 > 10 && random_num1 <= 40) {
            slot1 = 4;
        }
        else if (random_num1 > 40 && random_num1 <= 65) {
            slot1 = 3;
        }
        else if (random_num1 > 65 && random_num1 <= 85) {
            slot1 = 2;
        }
        if (random_num2 <= 10) {
            slot2 = 5;
        }
        else if (random_num2 > 10 && random_num2 <= 40) {
            slot2 = 4;
        }
        else if (random_num2 > 40 && random_num2 <= 65) {
            slot2 = 3;
        }
        else if (random_num2 > 65 && random_num2 <= 85) {
            slot2 = 2;
        }
        if (random_num3 <= 10) {
            slot3 = 5;
        }
        else if (random_num3 > 10 && random_num3 <= 40) {
            slot3 = 4;
        }
        else if (random_num3 > 40 && random_num3 <= 65) {
            slot3 = 3;
        }
        else if (random_num3 > 65 && random_num3 <= 85) {
            slot3 = 2;
        }
        if (random_num4 <= 10) {
            slot4 = 5;
        }
        else if (random_num4 > 10 && random_num4 <= 40) {
            slot4 = 4;
        }
        else if (random_num4 > 40 && random_num4 <= 65) {
            slot4 = 3;
        }
        else if (random_num4 > 65 && random_num4 <= 85) {
            slot4 = 2;
        }
        if (random_num5 <= 10) {
            slot5 = 5;
        }
        else if (random_num5 > 10 && random_num5 <= 40) {
            slot5 = 4;
        }
        else if (random_num5 > 40 && random_num5 <= 65) {
            slot5 = 3;
        }
        else if (random_num5 > 65 && random_num5 <= 85) {
            slot5 = 2;
        }
        std::cout << " - - - - - " << "\n";
        std::cout << "|" << slot1 << "|" << slot2 << "|" << slot3 << "|" << slot4 << "|" << slot5 << "|" << "\n";
        std::cout << " - - - - - " << "\n";
    }
    else if (level == 10) {
        if (random_num1 <= 25) {
            slot1 = 5;
        }
        else if (random_num1 > 25 && random_num1 <= 65) {
            slot1 = 4;
        }
        else if (random_num1 > 65 && random_num1 <= 85) {
            slot1 = 3;
        }
        else if (random_num1 > 85 && random_num1 <= 95) {
            slot1 = 2;
        }
        if (random_num2 <= 25) {
            slot2 = 5;
        }
        else if (random_num2 > 25 && random_num2 <= 65) {
            slot2 = 4;
        }
        else if (random_num2 > 65 && random_num2 <= 85) {
            slot2 = 3;
        }
        else if (random_num2 > 85 && random_num2 <= 95) {
            slot2 = 2;
        }
        if (random_num3 <= 25) {
            slot3 = 5;
        }
        else if (random_num3 > 25 && random_num3 <= 65) {
            slot3 = 4;
        }
        else if (random_num3 > 65 && random_num3 <= 85) {
            slot3 = 3;
        }
        else if (random_num3 > 85 && random_num3 <= 95) {
            slot3 = 2;
        }
        if (random_num4 <= 25) {
            slot4 = 5;
        }
        else if (random_num4 > 25 && random_num4 <= 65) {
            slot4 = 4;
        }
        else if (random_num4 > 65 && random_num4 <= 85) {
            slot4 = 3;
        }
        else if (random_num4 > 85 && random_num4 <= 95) {
            slot4 = 2;
        }
        if (random_num5 <= 25) {
            slot5 = 5;
        }
        else if (random_num5 > 25 && random_num5 <= 65) {
            slot5 = 4;
        }
        else if (random_num5 > 65 && random_num5 <= 85) {
            slot5 = 3;
        }
        else if (random_num5 > 85 && random_num5 <= 95) {
            slot5 = 2;
        }
        std::cout << " - - - - - " << "\n";
        std::cout << "|" << slot1 << "|" << slot2 << "|" << slot3 << "|" << slot4 << "|" << slot5 << "|" << "\n";
        std::cout << " - - - - - " << "\n";
    }
}