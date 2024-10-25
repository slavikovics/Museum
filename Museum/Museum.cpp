#include "Museum.h"

namespace MuseumNamespace
{
	Museum::Museum(std::string name, std::string address)
	{
		_name = name;
		_address = address;
		_statusController = MuseumStatusController();
	}

	void Museum::Open()
	{
		_statusController.ChangeStatus(Opened);
	}

	void Museum::Close()
	{
		_statusController.ChangeStatus(Closed);
	}
}

