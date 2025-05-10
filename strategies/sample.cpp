#include "strategy.hpp"


namespace strat{
  bool sample(bool pos, const GameHistory& game){
    if (game.size() < 3) return 1;
    bool last = pos == 0 ? game.back().second : game.back().first;
    std::pair<bool, bool> before_last_pair = game[game.size() - 2];
    bool before_last = pos == 0 ? before_last_pair.second : before_last_pair.first;
    if ((last == 0) && (before_last == 0)) return 0;
    return 1;
  }
}
