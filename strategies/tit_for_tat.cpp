#include "strategy.hpp"



namespace strat{
  bool tit_for_tat(bool pos, const GameHistory& game){
    if (game.empty()) return 1;
    return pos == 0 ? game.back().second : game.back().first;
  }
}
