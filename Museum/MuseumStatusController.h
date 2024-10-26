#ifndef MUSEUM_STATUS_CONTROLLER_H
#define MUSEUM_STATUS_CONTROLLER_H

#include "./MuseumStatuses.h"

namespace MuseumNamespace
{
	class MuseumStatusController
	{
	  private:

		MuseumStatuses _museumStatuses;

		MuseumStatus _currentStatus;

	  public:

		MuseumStatusController();

		void ChangeStatus(MuseumStatuses newStatus);

		MuseumStatuses GetCurrentStatus();
	};
}

#endif