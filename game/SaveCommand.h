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
#include <iostream>
#include <fstream>

using namespace std;
////////////////////////////////////////////////////////////////////////////////
class SaveCommand : public Command 
{
public:
  SaveCommand( Game *pGame ) : Command(pGame){}
  void Execute()
  {
	Player p = GetGame()->GetPlayer();
	
	ofstream file("savedstate.txt");
	if (file.is_open())
	{
		file << "#player" << p.GetName() << p.GetRace() << p.GetClass() << p.GetAge() << p.GetGender() << p.GetExperience();
		file.close();
	}
	else
	{
		cout << "Unable to open file." << endl;
	}
	
	cout << "Game saved for player: " << p.GetName() << endl;
  }
};
////////////////////////////////////////////////////////////////////////////////
#endif
