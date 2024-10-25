#pragma once
#include <string>

namespace MuseumNamespace
{
	class IPerson
	{
	  protected:

		std::string _name;

		int _id;

	  public:

		virtual std::string GetName() = 0;

		virtual int GetId() = 0;
	};
}