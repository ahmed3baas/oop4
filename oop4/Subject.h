#include <iostream>
using namespace std;

#pragma once

class Subject
{
private:
	string name;
	int fullMark, studentMark;

public:
	void setName(string n);
	string getName();
	void setFullMark(int fm);
	int getFullMark();
	void setStudentMark(int sm);
	int getStudentMark();
	Subject operator +(Subject s2);

	Subject();
	Subject(string n, int fm, int sm);
};

