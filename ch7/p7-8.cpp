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
