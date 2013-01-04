////////////////////
/// Advanced C++
/// Adventure Game 6
/// Rene Seger 1200684
/// rene.seger@gmail.com 
////////////////////
#ifndef __CommandFactory_h__
#define __CommandFactory_h__
#include <string>
class Game;
class ICommand;
////////////////////////////////////////////////////////////////////////////////
class CommandFactory 
{
private:
  Game * m_pGame;
public:
  CommandFactory( Game *pGame ) : m_pGame(pGame) {}
  virtual ~CommandFactory() {}
  
  ICommand * Create( const std::string & str );
};
////////////////////////////////////////////////////////////////////////////////

#endif
