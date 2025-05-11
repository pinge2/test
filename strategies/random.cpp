#include "strategy.hpp"


namespace strat{
  bool random_strat(bool pos, const GameHistory& game){
    return rand() % 2;
  }
}
