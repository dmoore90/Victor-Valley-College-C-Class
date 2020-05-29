/*Define a structure Student with a first name, last name, and course grade (A, B, C, D, or F). 
Write a program that reads input in which each line has the first and last name and course grade, 
separated by spaces. After reading all the students, your program should print all students with grade A, 
then all students with grade B, and so on.
*/
#include <iostream>
#include <string>

using namespace std;

struct Student {
	string first_name;
	string last_name;
	string grade;
};

int main()
{
	Student students;
	string line;
	cout << "Enter names of students and grade separated by space: \n";
	getline(cin, line);

	int c = 0;
	for (int i = 0; i < line.length(); i++) {
		if (line.substr(i,1) != " " && c == 0) {
			students.first_name += line.substr(i,1);
		}
		else if (line.substr(i,1) != " " && c == 1) {
			students.last_name += line.substr(i,1);
		}
		else if (line.substr(i,1) != " " && c == 2) {
			students.grade += line.substr(i,1);
		}
		else if (line.substr(i,1) == " ") {
			c++;
		}
	}

}
