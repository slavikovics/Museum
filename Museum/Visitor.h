#pragma once
#include "IPerson.h"
#include <list>
#include "Museum.h"

namespace MuseumNamespace
{
	class Visitor : public IPerson
	{
	  private:

		  bool _hasTicket;

	  public:

		  Visitor(std::string name, int id);

		  void ThrowLitter();

		  void BreakExhibit();

		  void BuyTicket();

		  void EnterMuseum(Museum museum);

		  void ExitMuseum();

		  virtual int GetId() override;

		  virtual std::string GetName() override;
	};
}


