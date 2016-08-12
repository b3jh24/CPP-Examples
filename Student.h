/*
 * Student.h
 *
 *  Created on: Jul 27, 2016
 *      Author: BHornak
 */

#ifndef STUDENT_H_
#define STUDENT_H_
#include <string>

using namespace std;
class Student {
public:
	int age;
	string name;
	Student(string n, int a);
	virtual ~Student();
	void changeName(string newName);
	string getName();
	void setAge(int a);
	int getAge();
};

#endif /* STUDENT_H_ */
