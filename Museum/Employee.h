#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include "MuseumStatuses.h"
#include "Jobs.h"
#include "Visitor.h"
#include <list>

namespace MuseumNamespace
{
	class Employee : public IPerson
	{
	  protected:

		Jobs _job;

	  public:

		virtual void IteractionWithVisitor(Visitor& visitor, VisitorsController& visitorsController);

		Jobs GetJob();

		Employee(std::string name, int id);

		virtual int GetId() override;

		virtual std::string GetName() override;
	};
}

#endif