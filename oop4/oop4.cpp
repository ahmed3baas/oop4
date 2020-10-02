using namespace std;
#include"Operation.h"
#include"Subject.h"
#include <iostream>

void askForTheOption() {

	cout << "Please select the option that you want to do:" << endl;
	cout << "Type 1 to add a new subject." << endl;
	cout << "Type 2 to change subject's ." << endl;
	cout << "Type 3 to print total mark." << endl;
	cout << "Or type anything else to close the program" << endl;
}
int main()
{
	Operation student;
	while (true)
	{
		askForTheOption();
		int op;
		cin >> op;
		if (op == 1)
		{
			cout << "-----------starting adding subject-----------" << endl;
			cout << "Please enter the name" << endl;
			string name;
			cin >> name;
			int fullMark;
			cout << "Please enter the fullMark" << endl;
			cin >> fullMark;
			int studentMark;
			cout << "Please enter the studentMark" << endl;
			cin >> studentMark;
			Subject sub;
			sub.setName(name);
			sub.setFullMark(fullMark);
			sub.setStudentMark(studentMark);
			student.addNewSubject(sub);
			cout << "-----------finished adding subject-----------" << endl;
		}
		else if (op == 2)
		{
			cout << "-----------starting changing subject info" << endl;
			cout << "changing subject info" << endl;
			string name;
			int newFm,newSm;
			cout << "Please enter the subject name" << endl;
			cin >> name;
			cout << "Please enter the new Full mark" << endl;
			cin >> newFm;
			cout << "Please enter the new Student mark" << endl;
			cin >> newSm;
			student.changeSubjectInfo(name,newFm,newSm);
			cout << "-----------finished changing subject info-----------" << endl;

		}
		else if (op == 3)
		{
			cout << "--total mark--" << endl;
			student.printTotalMark();
			
		}
		else {
			return 0;
		}
	}
    
}

