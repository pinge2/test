#include "strategy.hpp"


namespace strat{
  bool tester(bool pos, const GameHistory& game){
    static bool test;
    
    if (game.empty()) return 0;
    if (game.size() == 1) test = pos == 0 ? game.back().second : game.back().first;
    else{
      if (test == 1) return game.size() % 2 == 0;
      return pos == 0 ? game.back().second : game.back().first;
    }
  }
}
