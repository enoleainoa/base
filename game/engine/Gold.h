////////////////////
/// Advanced C++
/// Adventure Game 6
/// Rene Seger 1200684
/// rene.seger@gmail.com 
////////////////////
#ifndef __Gold_h__
#define __Gold_h__
////////////////////////////////////////////////////////////////////////////////
class GoldFactory;

////////////////////////////////////////////////////////////////////////////////
class Gold 
{
  friend class GoldFactory;
  friend class Game;

private:
  unsigned int m_nAmount;
  unsigned int m_totalAmount;
  Gold(unsigned int value);
  Gold();
  
public:
  virtual ~Gold();
  unsigned int GetAmount() const;
  unsigned int GetTotalAmount() const;
  void SetAmount( unsigned int value );
  void SetDefault( unsigned int value );
  
  int Gold::operator+( unsigned int value );
  int Gold::operator-( unsigned int value );
  
};
////////////////////////////////////////////////////////////////////////////////
#endif
