#include "game.cpp"
#include "strategies.hpp"


GameStrategy strategies[] = {
  strat::tit_for_tat, strat::friedman, strat::joss,
  strat::grasscamp, strat::tester, strat::sample,
  strat::random, strat::wolf, strat::juggernaut
};

int results[9] = {};


int main(){
  srand(time(0));
  Game main_tour;

  for (int i = 0; i < 9; ++i){
    for (int j = 0; j < 9; ++j){
      main_tour.set_strategies(strategies[i], strategies[j]);
      main_tour.play(200);
      results[i] += main_tour.get_results().first;
    }
  }
}
