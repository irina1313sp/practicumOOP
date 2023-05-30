#ifndef QUESTION_H
#define QUESTION_H
#include <string>

class Question {
private:
	std::string content;
	unsigned points;
	const std::string YES;
	const std::string NO;
public:
	Question(std::string cont, unsigned point);
	virtual ~Question();
	virtual void ask() const = 0;
	unsigned grade();
	void print();

	static bool validYesOrNoAnswer(const std::string ans);
	static bool correctYesNoAnswer(const std::string& ans, bool correct_is_yes);
};


#endif // !QUESTION_H
