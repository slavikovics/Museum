#include "EmployeesController.h"

namespace MuseumNamespace
{
	EmployeesController::EmployeesController(MuseumStatusController& statusController)
	{
		_statusController = statusController;
	}

	EmployeesController::EmployeesController()
	{

	}

	bool EmployeesController::CheckInEmployees(Employee& employee)
	{
		for (Employee _employee : _employees)
		{
			if (_employee.GetId() == employee.GetId())
			{
				return false;
			}
		}
	}

	int EmployeesController::GetEmployeesCount()
	{
		return _employees.size();
	}

	void EmployeesController::AddEmployee(Employee& employee)
	{
		if (_statusController.GetCurrentStatus() != MuseumStatuses::Opened) return;
		if (!CheckInEmployees(employee))
			_employees.push_back(employee);
	}

	void EmployeesController::RemoveEmployee(Employee& employee)
	{
		if (_statusController.GetCurrentStatus() != MuseumStatuses::Opened) return;
		int i = 0;

		for (Employee _employee : _employees)
		{
			if (_employee.GetId() == employee.GetId())
			{
				_employee.Fire();
				_employees.remove(_employee);
				break;
			}
			i++;
		}
	}
}