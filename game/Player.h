////////////////////
/// Advanced C++
/// Adventure Game 6
/// Rene Seger 1200684
/// rene.seger@gmail.com 
////////////////////
#ifndef __Player_h__
#define __Player_h__
#include <string>
#include "GameObject.h"
class Game;
////////////////////////////////////////////////////////////////////////////////
class Player : public GameObject
{
private:
  Game *game;
public:
  Player();

  virtual ~Player();
  void SetGame( Game * game );
  void Attack( GameObject *pObject);

  void PrintSummary();
  static void AskInfo( Player & p );

};
////////////////////////////////////////////////////////////////////////////////
#endif
