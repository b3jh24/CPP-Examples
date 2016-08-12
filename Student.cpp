/*
 * Student.cpp
 *
 *  Created on: Jul 27, 2016
 *      Author: BHornak
 */

#include "Student.h"
#include <cstring>

Student::Student(string n, int a) {
	// TODO Auto-generated constructor stub
	age = a;
	name = n;
}

Student::~Student() {
	// TODO Auto-generated destructor stub
}

void Student::changeName(string n){
	name = n;
}

string Student::getName(){
	return name;
}

void Student::setAge(int a){
	age = a;
}

int Student::getAge(){
	return age;
}

