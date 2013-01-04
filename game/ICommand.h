////////////////////
/// Advanced C++
/// Adventure Game 6
/// Rene Seger 1200684
/// rene.seger@gmail.com 
////////////////////
#ifndef __ICommand_h__
#define __ICommand_h__
////////////////////////////////////////////////////////////////////////////////
/// Interface for all commands.
class ICommand
{
public:
  /// Executes command.
  virtual void Execute() = 0;
};
////////////////////////////////////////////////////////////////////////////////
#endif