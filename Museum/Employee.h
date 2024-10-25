#pragma once
#include <string>
#include "MuseumStatuses.h"
#include "Jobs.h"
#include "IPerson.h"
#include <list>

namespace MuseumNamespace
{
	class Employee : protected IPerson
	{
	  protected:

		Jobs _job;

	  public:

		virtual void DoJob(IPerson visitor);

		Jobs GetJob();

		Employee(std::string name, int id, bool isEnabled);

	};
}