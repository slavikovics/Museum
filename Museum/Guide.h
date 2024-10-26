#ifndef GUIDE_H
#define GUIDE_H

#include "Employee.h"

namespace MuseumNamespace
{
	class Guide : public Employee
	{
	  public:

		virtual void IteractionWithVisitor(Visitor& visitor, VisitorsController& visitorsController) override;

		Guide(std::string name, int id);
	};
}

#endif
