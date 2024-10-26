#include "Guide.h"

namespace MuseumNamespace
{
	void Guide::IteractionWithVisitor(Visitor& visitor, VisitorsController& visitorsController)
	{
		// visitorsController.RemoveVisitor(visitor); visitorsController.AnswerVisitor(visitor, answer)
	}

	Guide::Guide(std::string name, int id) : Employee(name, id)
	{

	}
}