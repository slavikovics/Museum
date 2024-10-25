#include <string>

class Employee
{
private:

	int _id;

	bool _isEnabled;

	std::string _role;

public:

	Employee(int id, bool isEnabled, std::string role)
	{
		_id = id;
		_isEnabled = isEnabled;
		_role = role;
	}
};
