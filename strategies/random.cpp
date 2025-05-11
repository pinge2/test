#include "strategy.hpp"


namespace strat{
  bool random_(bool pos, const GameHistory& game){
    return rand() % 2;
  }
}
