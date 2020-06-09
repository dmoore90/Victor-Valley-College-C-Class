#include <iostream>

using namespace std;

class Person
{
public:
	Person (string name) {
		this->name = name;
	}

	void befriend (Person p) {
		friends += p.name + " ";
	}

	void unfriend (Person p) {
		int pos = friends.find(p.name);
		string friend_name = p.name;
		int end_pos = friend_name.length();
		friends.erase(pos, end_pos);
	}

	string get_friend_names () const {
			cout << friends << endl;
	}

private:
	string name;
	string friends;
};

int main()
{
	Person person("Jason");
	Person person2("Sara");
	Person person3("Connor");
	Person person4("Jeff");
	person.befriend(person2);
	person.befriend(person3);
	person.befriend(person4);
	person.unfriend(person2);
	person.get_friend_names();
}