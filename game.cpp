#include "strategies/strategy.hpp"


/*
Main game class
How to use:
```
...
int main(){
  Game game;
  game.set_strategies(strats::tit_for_tat, my_strat);
  game.play(200);
  std::cout << game.get_results() << std::endl;
}
...
```
*/
class Game{
  GameHistory m_game;
  GameStrategy m_strat1, m_strat2;
  unsigned int m_count1, m_count2;


public:
  Game(): m_count1(0), m_count2(0){}


  void set_strategies(GameStrategy strat1, GameStrategy strat2){
    m_strat1 = strat1;
    m_strat2 = strat2;
  }


  void play_round(){
    std::pair<bool, bool> game;
    game.first = m_strat1(0, m_game);
    game.second = m_strat2(1, m_game);
    
    if ((game.first == 1) && (game.second == 1)){
      m_count1 += 3;
      m_count2 += 3;
    }else if (game.first != game.second){
      if (game.first == 1) m_count2 += 5;
      else m_count1 += 5;
    }else{
      ++m_count1;
      ++m_count2;
    }

    m_game.push_back(game);
  }


  void play(size_t count){
    m_game.reserve(count);
    for (size_t i = 0; i < count; ++i) play_round();
  }


  std::pair<int, int> get_results(){
    return std::make_pair(m_count1, m_count2);
  }
}
