#include <iostream>
#include <string>

using namespace std;

class Student
{
	private:
		string name;
		int total_score = 0;
		int number_of_quizzes = 0;

	public:
		Student (string name) 
		{ 
			this->name = name; 
		}

		void add_quiz(int score) 
		{
			total_score += score;
			number_of_quizzes += 1;
		}

		int get_total_score() const
		{
			return total_score;
		}

		double get_avg_score() const
		{
			if (number_of_quizzes == 0) { return 0; } 
			else { return total_score / number_of_quizzes; }
		}
};

int main()
{
	Student student("Daniel");
	student.add_quiz(10);
	student.add_quiz(15);
	student.add_quiz(12);
	
	cout << student.get_avg_score() << " is avg score" << endl;
	cout << student.get_total_score() << " is total score" << endl;
}