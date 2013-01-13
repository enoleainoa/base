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
#include "Player.h"
#include "globals.h"
#include <iostream>
#include <fstream>
////////////////////////////////////////////////////////////////////////////////
class LoadCommand : public Command 
{
public:
  LoadCommand( Game *pGame ) : Command(pGame){}
  void Execute()
  {
	//Create Player object for saves state player
	Player p;
			
	ifstream f("savedstate.txt");
	
	if (f.is_open())
	{
	  int iTmp;
	  string strTmp;
	  int g;
	  f >> strTmp; p.SetName(strTmp);
	  f >> strTmp; p.SetRace(strTmp);
	  f >> iTmp; p.SetClass((Class)iTmp);
	  f >> iTmp; p.SetAge(iTmp);
	  f >> g; p.SetGender( (g == 'm' ? Male : Female) );
	  f >> iTmp; p.SetExperience(iTmp);
	  
	  f >> iTmp; GetGame()->GetGold() + iTmp;
	  //f >> iTmp; currentRoom = rooms[iTmp];
	  	
	  f.close();
	}
	
	GetGame()->SetPlayer(p);
	GetGame()->GetRenderer()->Render("Previous game loaded..");
	
	}
};
////////////////////////////////////////////////////////////////////////////////
#endif
