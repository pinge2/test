#include <iostream>
#include <vector>
#include <pair>


using GameHistory = std::vector<std::pair<bool, bool>>;
typedef bool (*GameStrategy)(GameHistory&);
