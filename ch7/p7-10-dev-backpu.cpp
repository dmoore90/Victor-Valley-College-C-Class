#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Course;

struct Student
{
	string name;
	vector<Course*> courses;
};

struct Course
{
	string name;
	vector<Student*> students;
};

void enroll(Student* student, Course* course)
{
	for (int i = 0; i < course->students.size(); i++)
	{
		if (course->name == course->students[i]->name)
		{
			
		}
	}
	student->courses.push_back(course);
	course->students.push_back(student);
}

void print_student(Student* student)
{
	cout << student->name << " is enrolled in these courses:" << endl;

	for (int i = 0; i < student->courses.size(); i++)
	{
		cout << student->courses[i]->name << endl;
	}

}

void print_course(Course* course)
{
	cout << course->name << " has the following students:" << endl;

	for (int i = 0; i < course->students.size(); i++)
	{
		cout << course->students[i]->name << endl;
	}
}



int main()
{
	Student student;
	Course course;

	enroll(&student, &course);
	student.name = "John Doe";
	course.name = "History";

	enroll(&student, &course);
	course.name = "Physics";


	print_student(&student);
	print_course(&course);
}