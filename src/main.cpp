#include <iostream>
using namespace std;
class Person {
public:
	virtual void work()
	{
		cout << "Person is working" << endl;
	}
	void function(Person& arg)
	{
		arg.work();
	}
};
class Student : public Person {
	void work()
	{
		cout << "Student is working" << endl;
	}
};
class Teacher : public Person {
	void work()
	{
		cout << "Teacher is working" << endl;
	}
};
int main()
{
	int y = 1024;
	int* ptr = &y;
	cout << "BOOOM!" << endl;
	cout << ptr << "   " << ptr++ << "    " << ptr + 10 << endl;
	cout << "--------------------------------------------------" << endl;

	Student s;
	Teacher t;
	Person p;
	p.function(s);
	Person *ps = &s;
	Person *pt = &t;
	p.work();
	ps->work();
	pt->work();

	return 0;
}