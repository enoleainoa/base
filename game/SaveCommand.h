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
#include "Room.h"
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
		file << p.GetName() << "\r\n";
		file << p.GetRace() << "\r\n";
		file << p.GetClass() << "\r\n";
		file << p.GetAge() << "\r\n";
		file << p.GetGender() << "\r\n";
		file << p.GetExperience() << "\r\n";
		file << GetGame()->GetGold().GetTotalAmount() << "\r\n";
		file << GetGame()->GetCurrentRoom()->GetCurrentRoomId() << "\r\n";
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
