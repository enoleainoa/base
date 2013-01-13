////////////////////
/// Advanced C++
/// Adventure Game 6
/// Rene Seger 1200684
/// rene.seger@gmail.com 
////////////////////
#ifndef __Game_h__
#define __Game_h__
////////////////////////////////////////////////////////////////////////////////
class IRenderer;
class Room;
////////////////////////////////////////////////////////////////////////////////
enum RoomId { kDungeon, kHallway, kMonster, kChambers, kNumRooms };
#include "Player.h"
#include "Enemy.h"
#include "Gold.h"
////////////////////////////////////////////////////////////////////////////////
class Game 
{
private:
  bool running;
  Player player;
  Gold gold;
  IRenderer *renderer;
  Room      *rooms[kNumRooms]; ///< Map.
  Room      *currentRoom;
public:
  Game();
  virtual ~Game();
  void Play();
  void SetRenderer( IRenderer *pRenderer );
  IRenderer * GetRenderer() const;
  bool IsRunning() const;
  void SetRunning(bool bFlag ) ;
  Player & GetPlayer();
  void SetPlayer(Player p);
  Room * GetCurrentRoom();
  void SetCurrentRoom( Room *pRoom );
  Gold & GetGold();
  void SetGold(Gold gold);
};
////////////////////////////////////////////////////////////////////////////////
#endif
