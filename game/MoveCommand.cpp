////////////////////
/// Advanced C++
/// Adventure Game 6
/// Rene Seger 1200684
/// rene.seger@gmail.com 
////////////////////
#include "MoveCommand.h"
#include "Game.h"
#include "Room.h"
#include "TextRenderer.h"
////////////////////////////////////////////////////////////////////////////////
void MoveCommand::Execute()
{
  Room *pRoom = GetGame()->GetCurrentRoom();
  if ( pRoom ) {
    Room *newRoom = pRoom->OnMoveCommand(this);
    if ( newRoom )
      GetGame()->SetCurrentRoom(newRoom);
    else
      GetGame()->GetRenderer()->Render( "Cannot go that way\n");
  }
}
////////////////////////////////////////////////////////////////////////////////
