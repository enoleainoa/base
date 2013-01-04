////////////////////
/// Advanced C++
/// Adventure Game 6
/// Rene Seger 1200684
/// rene.seger@gmail.com 
////////////////////
#ifndef __QuitCommand_h__
#define __QuitCommand_h__
#include "Command.h"
#include "Game.h"
////////////////////////////////////////////////////////////////////////////////
class QuitCommand : public Command 
{
public:
  QuitCommand( Game *pGame ) : Command(pGame){}
  void Execute()
  {
    GetGame()->SetRunning(false);
  }
};
////////////////////////////////////////////////////////////////////////////////
#endif
