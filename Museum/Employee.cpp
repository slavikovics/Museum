#include "Employee.h"

namespace MuseumNamespace
{
	void Employee::Action()
	{

	}

	void Employee::DoJob()
	{
		_job = NoJob;
		Action();
	}

	void Employee::JobDone()
	{
		_job = NoJob;
	}

	Jobs Employee::GetJob()
	{
		return _job;
	}

	Employee::Employee(int id, bool isEnabled)
	{
		_id = id;
		_isEnabled = isEnabled;
		_job = NoJob;
	}
}


