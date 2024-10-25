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

	Employee::Employee(std::string name, int id, bool isEnabled)
	{
		_name = name;
		_id = id;
		_isEnabled = isEnabled;
		_job = NoJob;
	}
}


