#ifndef VISITOR_H
#define VISITOR_H

#include "IPerson.h"
#include "EmployeesController.h"
#include "VisitorsController.h"

#include <list>
#include "Museum.h"

namespace MuseumNamespace
{
	class Visitor : public IPerson
	{
	  private:

		  bool _hasTicket;

		  EmployeesController _employeesController;

		  VisitorsController _visitorsController;

	  public:

		  Visitor(std::string name, int id, EmployeesController& employeesController, VisitorsController& visitorsController);

		  Visitor();

		  Visitor(const Visitor& other);

		  //void ThrowLitter();

		  //void BreakExhibit();

		  //void SeeExhibit();

		  //void BuyTicket();

		  //void BuySouvenir();

		  //void EnterMuseum();

		  //void ExitMuseum();

		  //std::string AskGuide();

		  virtual int GetId() override;

		  virtual std::string GetName() override;
	};
}

#endif
