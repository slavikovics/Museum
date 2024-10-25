#ifndef GUARD_H
#define GUARD_H

#include "Employee.h"

namespace MuseumNamespace
{
	class Guard : public Employee
	{
	  public:

		virtual void IteractionWithVisitor(Visitor& visitor, VisitorsController& visitorsController) override;

		Guard(std::string name, int id);

	};
}

#endif
