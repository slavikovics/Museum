#include "Museum.h"

namespace MuseumNamespace
{
	Museum::Museum(std::string name, std::string address)
	{
		_name = name;
		_address = address;
		_statusController = MuseumStatusController();
		_visitorsController = VisitorsController(_statusController);
		_employeesController = EmployeesController(_statusController);
	}

	void Museum::Open()
	{
		_statusController.ChangeStatus(MuseumStatuses::Opened);
	}

	void Museum::Close()
	{
		if (_visitorsController.GetVisitorsCount() != 0) return;
		if (_employeesController.GetEmployeesCount() != 0) return;
		_statusController.ChangeStatus(MuseumStatuses::Closed);
	}
}

