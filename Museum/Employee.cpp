#include <string>
#include "MuseumStatuses.h"
#include "Jobs.h"

namespace MuseumNamespace
{
	class Employee
	{

	  private:

		int _id;

		bool _isEnabled;

		Jobs _job;

	  public:

		virtual void DoJob()
		{
			_isEnabled = true;
			_job = NoJob;
		}

		Employee(int id, bool isEnabled)
		{
			_id = id;
			_isEnabled = isEnabled;
			_job = NoJob;
		}
	};
}


