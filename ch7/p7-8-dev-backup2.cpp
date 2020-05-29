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
	string cont;
	vector<Student> students;	
	// students.push_back(Student());

	while (line[0] != 'q')
	{
		cout << "Type q to quit.\n";
		cout << "Enter names of students and grade separated by space: \n";
		getline(cin, line);



		int c = 0;
		for (int i = 0; i < line.length(); i++) {
			if (line.substr(i,1) != " " && c == 0) {
				student.first_name += line.substr(i,1);
			}
			else if (line.substr(i,1) != " " && c == 1) {
				student.last_name += line.substr(i,1);
			}
			else if (line.substr(i,1) != " " && c == 2) {
				student.grade += line.substr(i,1);
			}
			else if (line.substr(i,1) == " ") {
				c++;
			}
		}
		students.push_back({student.first_name, student.last_name, student.grade});
	}
		// cout << students[0].first_name << endl;
	for (int i = 0; i < students.size(); i++) {
		cout << students[i].first_name << " " << students[i].last_name << " " << students[i].grade << endl;
	}
}
