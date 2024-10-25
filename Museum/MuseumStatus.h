#pragma once
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


