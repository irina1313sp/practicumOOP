#include"Question.h"
#include <string>
#include <iostream>
Question::Question(std::string cont, unsigned point)
{
	content = cont;
	points = point;
	
}

Question::~Question()
{

}

unsigned Question::grade()
{
	return points;
}

void Question::print()
{
	std::cout << content;
}

bool Question::validYesOrNoAnswer(const std::string ans)
{
	if (ans=="yes"||ans=="no")
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Question::correctYesNoAnswer(const std::string& ans, bool correct_is_yes)
{
	if ((correct_is_yes == true && ans == "yes")
		|| (correct_is_yes == false && ans =="no"))
	{
		return true;
	}
	else
	{
		return false;
	}
}
