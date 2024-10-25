#include "MuseumStatusController.h"

namespace MuseumNamespace
{
	MuseumStatusController::MuseumStatusController()
	{
		_currentStatus = MuseumStatus();
		_museumStatuses = Default;
	}

	void MuseumStatusController::ChangeStatus(MuseumStatuses newStatus)
	{
		_museumStatuses = newStatus;

		switch (_museumStatuses)
		{
			case Default: _currentStatus = MuseumStatus(); break;

			case Closed: _currentStatus = MuseumStatusClosed(); break;

			case Opened: _currentStatus = MuseumStatusOpened(); break;
		}
	}

	MuseumStatuses MuseumStatusController::GetCurrentStatus()
	{
		return _museumStatuses;
	}
}
