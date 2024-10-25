#pragma once
#include "Visitor.h"

namespace MuseumNamespace
{
	class VisitorsController
	{
	  private:

		MuseumStatusController _statusController;

		std::list<Visitor> _visitors;

		bool CheckInVisitors(Visitor visitor);

	  public:

		VisitorsController(MuseumStatusController& statusController);

		VisitorsController();
 
		std::list<Visitor> GetVisitors();

		void AddVisitor(Visitor& visitor);

		void RemoveVisitor(Visitor& visitor);

		int GetVisitorsCount();
	};
}



