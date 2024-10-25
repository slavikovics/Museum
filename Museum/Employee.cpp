#include "Employee.h"

namespace MuseumNamespace
{
	void Employee::DoJob(IPerson visitor)
	{
	}

	Jobs Employee::GetJob()
	{
		return _job;
	}

	Employee::Employee(std::string name, int id)
	{
		_name = name;
		_id = id;
		_job = NoJob;
	}
}


