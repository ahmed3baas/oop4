#include "Operation.h"
#include <iostream>
using namespace std;
void Operation::addNewSubject(Subject sub)
{
	subjects[subjectIndex] = sub;
	subjectIndex++;
}

void Operation::changeSubjectInfo(string name, int newFm, int newSm)
{
	for (int i = 0; i < subjectIndex; i++)
	{
		if (subjects[i].getName() == name) {
			subjects[i].setFullMark(newFm);
			subjects[i].setStudentMark(newSm);
			break;
		}
	}
}

void Operation::printTotalMark()
{	
	Subject totalsub=Subject("totalMark",0,0);
	for (int i = 0;i < subjectIndex;i++)
	{
		totalsub = totalsub +subjects[i];
	}
	cout << "the total subjectsMark is "<<totalsub.getStudentMark()<<"/"<<totalsub.getFullMark()<< endl;
}

Operation::Operation():subjectIndex(0)
{
}
