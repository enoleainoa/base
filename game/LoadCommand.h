////////////////////
/// Advanced C++
/// Adventure Game 6
/// Rene Seger 1200684
/// rene.seger@gmail.com 
////////////////////
#ifndef __LoadCommand_h__
#define __LoadCommand_h__
#include "Command.h"
#include "Game.h"
#include "IRenderer.h"
////////////////////////////////////////////////////////////////////////////////
class LoadCommand : public Command 
{
public:
  LoadCommand( Game *pGame ) : Command(pGame){}
  void Execute()
  {
  	GetGame()->GetRenderer()->Render("Previous game loaded..");
  }
};
////////////////////////////////////////////////////////////////////////////////
#endif
