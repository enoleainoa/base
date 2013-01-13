////////////////////
/// Advanced C++
/// Adventure Game 6
/// Rene Seger 1200684
/// rene.seger@gmail.com 
////////////////////
#ifndef __Dungeon_h__
#define __Dungeon_h__
#include "Room.h"
#include "Enemy.h"
#include "Player.h"
#include "IRenderer.h"
#include "Game.h"
#include <sstream>
////////////////////////////////////////////////////////////////////////////////

class Dungeon : public Room
{
private:

public:
  Dungeon() : Room(0)
  {
    SetDescription("You are locked up in a dungeon.");
  }
  void Update()
  {
    
  }
};
////////////////////////////////////////////////////////////////////////////////
#endif
