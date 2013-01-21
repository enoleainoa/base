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
  
public:
  Gold(unsigned int value);
  Gold();
  virtual ~Gold();
  unsigned int GetAmount() const;
  unsigned int GetTotalAmount() const;
  void SetAmount( unsigned int value );
  void SetDefault( unsigned int value );
  
  template<typename T>
  T Gold::operator+( T value )
  {
    m_totalAmount = m_totalAmount + value;
  };
  
  //Specialized template goes like this, but as I did not create template class for this Gold object I will not use double type specialization
  /*template<double T>
  T Gold::operator+( T value )
  {
    m_totalAmount = m_totalAmount + value;
  };*/
   
  template<typename T>
  T Gold::operator-( T value )
  {
    m_totalAmount = m_totalAmount - value;
  }
   
};


////////////////////////////////////////////////////////////////////////////////
#endif

