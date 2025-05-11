#pragma once

#include <iostream>
#include <vector>
#include <utility>
#include <cstdlib>
#include <ctime>


using GameHistory = std::vector<std::pair<bool, bool>>;
typedef bool (*GameStrategy)(bool, const GameHistory&);
