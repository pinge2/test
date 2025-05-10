#include "strategy.hpp"


namespace strat{
  bool random(bool pos, const GameHistory& game){
    return rand() % 2;
  }
}
