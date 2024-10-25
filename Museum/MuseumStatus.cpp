#include "MuseumStatus.h"

namespace MuseumNamespace
{
	std::string MuseumStatus::GetSatusName()
	{
		return _statusName;
	}

	MuseumStatus::MuseumStatus()
	{
		_statusName = "Default";
		_isOpenedForVisitors = false;
	}

	bool MuseumStatus::IsOpenedForVisitors()
	{
		return _isOpenedForVisitors;
	}
}