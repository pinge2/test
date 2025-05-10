#include "strategy.hpp"


namespace strat{
  bool juggernaut(bool pos, const GameHistory& game){
    static int slashes = 7;
    
    if (game.empty()) return 1;
    
    bool opponent = pos == 0 ? game.back().second : game.back().first;

    if (opponent == 0){
      // OMNISLASH🥷🥷🥷
      if (slashes > 0) --slashes;
      else{
        slashes = 7;
        return 1;
      }
      return 0;
    }
    return 1;
  }
}
