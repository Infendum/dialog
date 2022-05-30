main


#include <iostream>
#include "Group.h"
#include "Student.h"
#include "Teacher.h"

int main()
{
	setlocale(LC_ALL, "ru");

	Group grup;
	Group tech;
	Student first("Иванов Сергей", "16");
	Teacher second("Сальва Остап", "35");
	grup.add(first);
	tech.add(first);
	grup.add(Student("Аманбаев Алимжан", "17"));
	grup.add(Student("Костенко Владислав", "18"));
	grup.add(Student("Джонатан Джостар", "27"));
	grup.add(Student("Джозеф Джостар", "27"));
	grup.add(Student("Джотаро Куджо", "27"));
	grup.add(Student("Джоске Хигашиката", "27"));
	grup.add(Student("Джорно Джованна", "27"));
	grup.add(Student("Джолин Куджо", "28"));
	grup.add(Student("Ханма Баки", "18"));
	std::cout << grup << std::endl;
	std::cout << "---------------------" << std::endl;

	tech.add(Teacher("Ханма Юдзиро", "35"));

	grup.remove(first);
	std::cout << grup << std::endl;
	std::cout << tech << std::endl;

	return 0;
}



group.h


#pragma once
#include <iostream>
#include "Student.h"
#include "Teacher.h"
#include <vector>
class Group
{
	std::vector<Student> students;
	std::vector<Teacher> teacher;
public:
	void add(Student st);
	void add(Teacher tch);
	void remove(Student st);
	friend std::ostream& operator<<(std::ostream& os, const Group gp);
};


group.cpp

#include "Group.h"

void Group::add(Student st)
{
	students.push_back(st);
	
}

void Group::add(Teacher tch)
{
	teacher.push_back(tch);
}

void Group::remove(Student st)
{
	auto size = students.size();
	std::vector<Student> vs;
	for (auto i = 0; i < size; i++)
		if (!students[i].equal(st))
			vs.push_back(students[i]);
	students = vs;
}

std::ostream& operator<<(std::ostream& os, const Group gp)
{
	auto size = gp.students.size();
	for (auto i = 0; i < size; i++)
		os << gp.students[i] << std::endl;
	return os;
}

student.h

#pragma once
#include <iostream>
#include <vector>
class Student
{
	std::string name;
	std::string age;
public:
	Student(const char* nm, const char* ag);
	std::string get_name();
	std::string get_age();
	bool equal(const Student st);
	friend std::ostream& operator<<(std::ostream& os, const Student& st);
};

student.cpp

#include "Student.h"

Student::Student(const char* nm, const char* ag)
{
	name = nm;
	age = ag;
}

std::string Student::get_name()
{
	return name;
}

std::string Student::get_age()
{
	return age;
}

bool Student::equal(const Student st)
{
	return name == st.name && age == st.age;
}

std::ostream& operator<<(std::ostream& os, const Student& st)
{
	os << "<" << st.name << "> - <" << st.age << ">";
	return os;
}

teacher.h

#pragma once
#include <iostream>
#include <vector>
class Teacher
{
	std::string name;
	std::string group;
public:
	Teacher(const char* nm, const char* gp);
	std::string get_name();
	std::string get_group();
	bool equal(const Teacher tch);
	friend std::ostream& operator<<(std::ostream& os, const Teacher& tch);
};

teacher.cpp

#include "Teacher.h"

Teacher::Teacher(const char* nm, const char* gp)
{
	name = nm;
	group = gp;
}

std::string Teacher::get_name()
{
	return name;
}

std::string Teacher::get_group()
{
	return group;
}

bool Teacher::equal(const Teacher tch)
{
	return name == tch.name && group == tch.group;
}

std::ostream& operator<<(std::ostream& os, const Teacher& tch)
{
	os << "<" << tch.name << "> - <" << tch.group << ">";
	return os;
}
