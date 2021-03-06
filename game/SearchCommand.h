////////////////////
/// Advanced C++
/// Adventure Game 6
/// Rene Seger 1200684
/// rene.seger@gmail.com 
////////////////////
#ifndef __SearchCommand_h__
#define __SearchCommand_h__
#include <cstdlib>
#include "GoldFactory.h"
#include "Gold.h"
#include "Game.h"
#include <sstream>
#include "IRenderer.h"
////////////////////////////////////////////////////////////////////////////////
class SearchCommand : public Command
{
public:
  SearchCommand( Game *pGame ) : Command(pGame) {}
  void Execute()
  {
    if ( rand()%1000 < 436 )
    {
      GoldFactory f;
      Gold *g = f.Create( 1+rand()%100 );
      std::ostringstream s;
	  
	  int amount = g->GetAmount();
      s << "You found " << amount << " gold!\n";
	  GetGame()->GetRenderer()->Render(s.str());	  
	  
	  GetGame()->GetGold() + amount;	  
	  int total = GetGame()->GetGold().GetTotalAmount();	  
	  cout << "Total amount " << total << " of gold." << endl;
	  
      delete g;
    }
    else {
      GetGame()->GetRenderer()->Render( "You found nothing.\n");
    }
  }
};
////////////////////////////////////////////////////////////////////////////////
#endif
