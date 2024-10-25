#pragma once
#include <string>
#include "MuseumStatuses.h"
#include "Jobs.h"
#include "IPerson.h"

namespace MuseumNamespace
{
	class Employee : protected IPerson
	{

	  private:

		Jobs _job;

	  protected:

		virtual void Action() override;

	  public:

		virtual void DoJob();

		Jobs GetJob();

		virtual void JobDone();

		Employee(int id, bool isEnabled);
	};
}