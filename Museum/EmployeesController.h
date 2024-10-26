#ifndef EMPLOYEE_CONTROLLER_H
#define EMPLOYEE_CONTROLLER_H

#include "Employee.h"
#include "MuseumStatusController.h"

namespace MuseumNamespace
{
	class EmployeesController
	{
	private:

		MuseumStatusController _statusController;

		std::list<Employee> _employees;

	public:

		EmployeesController(MuseumStatusController& statusController);

		EmployeesController();

		bool CheckInEmployees(Employee& employee);

		int GetEmployeesCount();

		void AddEmployee(Employee& employee);

		void RemoveEmployee(Employee& employee);

	};
}

#endif 

