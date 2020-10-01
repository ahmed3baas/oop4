#include "Subject.h"

void Subject::setName(string n)
{
	name = n;
}

string Subject::getName()
{
	return name;
}

void Subject::setFullMark(int fm)
{
	fullMark = fm;
}

int Subject::getFullMark()
{
	return fullMark;
}

void Subject::setStudentMark(int sm)
{
	studentMark = sm;
}

int Subject::getStudentMark()
{
	return studentMark;
}

Subject Subject::operator+(Subject s2)
{
	Subject res;

	res.studentMark = studentMark + s2.studentMark;
	res.fullMark = fullMark + s2.fullMark;

	return res;
}

Subject::Subject()
{
}

Subject::Subject(string n, int fm, int sm)
{
	name = n;
	fullMark = fm;
	studentMark = sm;
}
