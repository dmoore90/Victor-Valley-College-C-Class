/*Define a structure Student with a first name, last name, and course grade (A, B, C, D, or F). 
Write a program that reads input in which each line has the first and last name and course grade, 
separated by spaces. After reading all the students, your program should print all students with grade A, 
then all students with grade B, and so on.
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Student {
	string first_name;
	string last_name;
	string grade;
};

int main()
{
	Student student;
	string line;
	// string cont;
	vector<Student> students;	

	while (line != "no")
	{
		cout << "Enter names of students and grade separated by space: \n";
		cin >> student.first_name >> student.last_name >> student.grade;
		while (student.grade != "A" && student.grade != "B" && student.grade != "C" && student.grade != "D" && student.grade != "F")
		{
			cout << "Grade must be A, B, C, D, F. Re-enter grade:\n";
			cin >> student.grade;
		}

		students.push_back({student.first_name, student.last_name, student.grade});
		cout << "Would you like to continue? Type yes or no.\n";
		cin >> line;
	}



	// students.push_back({"Daniel", "Moore", "D"});
	// students.push_back({"Tyler", "Jersy", "A"});
	// students.push_back({"James", "Willis", "A"});
	// students.push_back({"Diego", "Sanchez", "B"});


	for (int i = 0; i < students.size(); i++) {
		if (students[i].grade == "A")
		{
			cout << students[i].first_name << " " << students[i].last_name << " " << students[i].grade << endl;
		}
	}

	for (int i = 0; i < students.size(); i++) {
		if (students[i].grade == "B")
		{
			cout << students[i].first_name << " " << students[i].last_name << " " << students[i].grade << endl;
		}
	}

	for (int i = 0; i < students.size(); i++) {
		if (students[i].grade == "C")
		{
			cout << students[i].first_name << " " << students[i].last_name << " " << students[i].grade << endl;
		}
	}

	for (int i = 0; i < students.size(); i++) {
		if (students[i].grade == "D")
		{
			cout << students[i].first_name << " " << students[i].last_name << " " << students[i].grade << endl;
		}
	}

		for (int i = 0; i < students.size(); i++) {
		if (students[i].grade == "F")
		{
			cout << students[i].first_name << " " << students[i].last_name << " " << students[i].grade << endl;
		}
	}
}
