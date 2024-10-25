#pragma once
#include "Employee.h"

namespace MuseumNamespace
{
	class Guard : public Employee
	{

		virtual void DoJob(IPerson visitor) override;

		Guard(std::string name, int id, bool isEnabled);

	};
}


