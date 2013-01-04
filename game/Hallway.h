////////////////////
/// Advanced C++
/// Adventure Game 6
/// Rene Seger 1200684
/// rene.seger@gmail.com 
////////////////////
#ifndef __Hallway_h__
#define __Hallway_h__
#include "Room.h"
#include <sstream>
////////////////////////////////////////////////////////////////////////////////
class Hallway : public Room
{
public:
  Hallway()
  {
    SetDescription("You are standing in a pretty damp hallway.");
  }
  
  void Update()
  {
    
  }
};
////////////////////////////////////////////////////////////////////////////////
#endif
