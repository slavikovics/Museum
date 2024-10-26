#ifndef MUSEUM_STATUS_H
#define MUSEUM_STATUS_H

#include <string>

namespace MuseumNamespace
{
	class MuseumStatus
	{
	  protected:

		std::string _statusName;

		bool _isOpenedForVisitors;

	  public:

	    std::string GetSatusName();

		bool IsOpenedForVisitors();

		MuseumStatus();
	};
}

#endif
