#include "strategy.hpp"


namespace strat{
  bool joss(bool pos, const GameHistory& game){
    if (game.empty()) return 1;
    bool think = pos == 0 ? game.back().second : game.back().first;
    return rand() % 11 == 1 ? 0 : think;
  }
}
