#include "strategy.hpp"



namespace strat{
  bool friedman(bool pos, const GameHistory& game){
    static bool revenge = 0;
    
    bool opponent = pos == 0 ? game.back().second : game.back().first;
    if (revenge == 1) return 0
    if (opponent == 0) revenge = 1;
    return 1;
  }
}
