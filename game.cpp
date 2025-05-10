#include "strategies/strategy.hpp"



class Game{
  GameHistory m_game;
  bool (*m_strat1)(GameHistory*);
  bool (*m_strat2)(GameHistory*);

public:
  Game() = default;

  void set(
}
