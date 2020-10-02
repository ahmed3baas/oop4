#include <iostream>
#include "Subject.h"
using namespace std;
#pragma once
class Operation
{
private:
	Subject subjects[100];
	int subjectIndex;
public:
	void addNewSubject(Subject sub);
	void changeSubjectInfo(string name, int newFm, int newSm);
	void printTotalMark();
	Operation();
};


