#include "strategy.hpp"


namespace strat{
  bool wolf(bool pos, const GameHistory& game){
    static int angry_count = 1;
    static int counter = 1;
    
    if (game.empty()) return 0;

    bool opponent = pos == 0 ? game.back().second : game.back().first;
    if (opponent == 0){
      angry_count *= counter;
      ++counter;
      return 0;
    }else{
      --angry_count;
      if (angry_count <= 0){
        angry_count = 1;
        return 1
      }
    }
  }
}
