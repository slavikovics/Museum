#ifndef MUSEUM_STATUSES_H
#define MUSEUM_STATUSES_H

#include "./MuseumStatusClosed.h"
#include "./MuseumStatusOpened.h"

namespace MuseumNamespace
{
	enum MuseumStatuses
	{
		Default,
		Closed,
		Opened
	};
}

#endif