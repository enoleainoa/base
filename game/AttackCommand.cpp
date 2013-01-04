////////////////////
/// Advanced C++
/// Adventure Game 6
/// Rene Seger 1200684
/// rene.seger@gmail.com 
////////////////////
#include "AttackCommand.h"
#include "Game.h"
#include "Room.h"
////////////////////////////////////////////////////////////////////////////////
void AttackCommand::Execute()
{
  GetGame()->GetCurrentRoom()->OnAttack(this);
}
////////////////////////////////////////////////////////////////////////////////
