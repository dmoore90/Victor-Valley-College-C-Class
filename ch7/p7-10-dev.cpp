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



void print_student(Student* s)
{
	cout << s->name << " is enrolled in these courses:" << endl;

	for (int i = 0; i < s->courses.size(); i++)
	{
		cout << s->courses[i]->name << endl;
	}
	cout << endl;
}

void print_course(Course* c)
{
	cout << c->name << " has the following students:" << endl;

	for (int i = 0; i < c->students.size(); i++)
	{
		cout << c->students[i]->name << endl;
	}
	cout << endl;
}
// English 101 CIS 202 Physics 123
// Mary John David

void enroll(Student* s, Course* c)
{
		s->courses.push_back(c);
		c->students.push_back(s);	
}

int main()
{
	Student student_names[3];
	Course course_names[3];

	s[0].name = "Mary";
	s[1].name = "John";
	s[2].name = "David";

	c[0].name = "English 101";
	c[1].name = "CIS 201";
	c[2].name = "Physics 123";

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			enroll(&s[i], &[j]);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		print_student(&s[i]);
	}
	for (int i = 0; i < 3; i++)
	{
		print_course(&c[i]);
	}

}