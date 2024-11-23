#pragma once
#ifndef TACTICIAN_H
#define TACTICIAN_H

#include <iostream>
#include <string>

class Tactician {

    std::string tacticianName;
    int goldSpent;
    int playerLevel;
    int playerXP;
    int displayXP;

public:
    Tactician(std::string tactician_name, int gold_spent, int level, int playerXP, int displayXP);

    std::string get_tacticianName() const;
    int get_goldSpent() const;
    int get_level() const;
    int get_playerXP() const;
    int get_displayXP() const;

    void Shop(int level);
    void LevelUp();
};



#endif // TACTICIAN_H