#pragma once
#include "MuseumStatusController.h"
#include "VisitorsController.h"
#include <list>
#include "Visitor.h"
#include "Employee.h"
#include "IPerson.h"

namespace MuseumNamespace
{
	class Museum
	{
	  private:

		std::string _name;

		std::string _address;

		double _balance;

		MuseumStatusController _statusController;

		VisitorsController _visitorsController;

		std::list<Employee> _employees;

		bool CheckInEmployees(Employee employee)
		{
			for (Employee _employee : _employees)
			{
				if (_employee.GetId() == employee.GetId())
				{
					return false;
				}
			}
		}

	  public:

		Museum(std::string name, std::string address);

		void Open()
		{
			_statusController.ChangeStatus(MuseumStatuses::Opened);
		}

		void Close()
		{
			if (_visitorsController.GetVisitorsCount() != 0) return;
			if (_visitorsController.GetEmployeesCount() != 0) return;
			_statusController.ChangeStatus(MuseumStatuses::Closed);
		}

		int GetEmployeesCount()
		{
			return _employees.size();
		}

		void AddEmployee(Employee& employee)
		{
			if (_statusController.GetCurrentStatus() != MuseumStatuses::Opened) return;
			if (!CheckInEmployees(employee))
			_employees.push_back(employee);
		}

		void RemoveEmployee(Employee& employee)
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
	};
}

