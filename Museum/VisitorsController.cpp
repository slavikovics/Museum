#include "VisitorsController.h"

namespace MuseumNamespace
{
	VisitorsController::VisitorsController(MuseumStatusController& statusController)
	{
		_statusController = statusController;
	}

	void VisitorsController::AddVisitor(Visitor& visitor)
	{
		if (_statusController.GetCurrentStatus() == MuseumStatuses::Opened)
		_visitors.push_back(visitor);
	}

	void VisitorsController::RemoveVisitor(Visitor& visitor)
	{
		if (_statusController.GetCurrentStatus() != MuseumStatuses::Opened) return;
		int i = 0;

		for (Visitor _visitor : _visitors)
		{
			if (_visitor.GetId() == visitor.GetId())
			{
				_visitor.ExitMuseum();
				_visitors.remove(_visitor);
				break;
			}
			i++;
		}
	}

	int VisitorsController::GetVisitorsCount()
	{
		return _visitors.size();
	}

	std::list<Visitor> VisitorsController::GetVisitors()
	{
		return _visitors;
	}

	bool VisitorsController::CheckInVisitors(Visitor visitor)
	{
		for (Visitor _visitor : _visitors)
		{
			if (_visitor.GetId() == visitor.GetId())
			{
				return false;
			}
		}
	}
}