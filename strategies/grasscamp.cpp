#include "strategy.hpp"


namespace strat{
  bool grasscamp(bool pos, const GameHistory& game){
    if (game.empty()) return 1;
    bool think = pos == 0 ? game.back().second : game.back().first;
    return game.size() == 50 ? 0 : think;
  }
}
