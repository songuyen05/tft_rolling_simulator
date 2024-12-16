#pragma once
#ifndef TACTICIAN_H
#define TACTICIAN_H

#include <iostream>
#include <string>
#include <vector>

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
    std::vector <std::string> one_cost = { "Amumu", "Darius", "Draven", "Irelia", "Lux", "Maddie",
"Morgana", "Powder", "Singed", "Steb", "Trundle", "Vex", "Violet", "Zyra" };
    std::vector <std::string> two_cost = { "Akali", "Camille", "Leona", "Nocturne", "Rell",
    "Renata Glasc", "Sett", "Tristana", "Urgot", "Vander", "Vladimir", "Zeri", "Ziggs" };
    std::vector <std::string> three_cost = { "Blitzcrank", "Cassiopeia", "Ezreal", "Gangplank",
    "Kog'Maw", "Loris", "Nami", "Nunu & Willump", "Renni", "Scar", "Smeech", "Swain", "Twisted Fate" };
    std::vector <std::string> four_cost = { "Ambessa", "Corki", "Dr. Mundo", "Ekko", "Elise", "Garen",
    "Heimerdinger", "Illaoi", "Silco", "Twitch", "Vi", "Zoe" };
    std::vector <std::string> five_cost = { "Caitlyn", "Jayce", "Jinx", "LeBlanc", "Malzahar",
    "Mordekaiser", "Rumble", "Sevika" };

    void Shop(int level);
    void LevelUp();
};



#endif // TACTICIAN_H