#include "Guard.h"

namespace MuseumNamespace
{
	void Guard::DoJob(IPerson visitor)
	{
		_job = Jobs::Guard;
		
	}

	Guard::Guard(std::string name, int id, bool isEnabled) : Employee(name, id, isEnabled)
	{

	}
}