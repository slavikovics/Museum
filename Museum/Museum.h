#pragma once
#include "MuseumStatusController.h"
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

		MuseumStatusController _statusController;

		std::list<Visitor> _visitors;

		std::list<Employee> _employees;

		bool CheckPersonInVisitors(IPerson person)
		{
			for (IPerson _person : _visitors)
			{

			}
		}

	  public:

		Museum(std::string name, std::string address);

		void Open();

		void Close();

		std::list<Visitor> GetVisitors()
		{
			return _visitors;
		}

		void AddVisitor(Visitor visitor)
		{
			_visitors.push_back(visitor);
		}

		void RemoveVisitor(Visitor visitor)
		{
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

		int GetVisitorsCount()
		{
			return _visitors.size();
		}

		void AddEmployee(Employee employee)
		{
			_employees.push_back(employee);
		}

		void RemoveEmployee(Employee employee)
		{
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

		bool CheckPerson(IPerson)
		{

		}



	};
}

