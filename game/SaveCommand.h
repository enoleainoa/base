////////////////////
/// Advanced C++
/// Adventure Game 6
/// Rene Seger 1200684
/// rene.seger@gmail.com 
////////////////////
#ifndef __SaveCommand_h__
#define __SaveCommand_h__
#include "Command.h"
#include "Game.h"
#include "IRenderer.h"
////////////////////////////////////////////////////////////////////////////////
class SaveCommand : public Command 
{
public:
  SaveCommand( Game *pGame ) : Command(pGame){}
  void Execute()
  {
	GetGame()->GetRenderer()->Render("Saving game...");
  }
};
////////////////////////////////////////////////////////////////////////////////
#endif
