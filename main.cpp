#include "game.cpp"
#include "strategies.hpp"


GameStrategy strategies[] = {
  strat::tit_for_tat, strat::friedman, strat::joss,
  strat::grasscamp, strat::tester, strat::sample,
  strat::random, strat::wolf, strat::juggernaut
};


int main(){
  Game main_tour;
  
}
