#ifndef YESNOQUESTION_H
#define YESNOQUESTION_H
#include "Question.h"
#include <string>

class YesNoQuestion:public Question {
private:
	bool correctAns;
public:
	YesNoQuestion(std::string a, unsigned b, std::string c);
};
#endif // !YESNOQUESTION_H
