#include "YesNoQuestion.h"
YesNoQuestion::YesNoQuestion(std::string a, unsigned b, std::string c)
	:Question(a, b)
{
	if (c=="yes")
	{
		correctAns = true;
	}
	else
	{
		correctAns = false;
	}
}
