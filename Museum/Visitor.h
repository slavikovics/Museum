#pragma once
#include "IPerson.h"
#include <list>

namespace MuseumNamespace
{
	class Visitor : public IPerson
	{
	  private:

		  bool hasTicket;

	  public:

		  Visitor(std::string name, int id, bool isEnabled);

		  void ThrowLitter();

		  void BreakExhibit();

		  void BuyTicket();

		  void EnterMuseum();

		  void ExitMuseum();

		  int GetId();
	  
	};
}


