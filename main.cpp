/*
 * main.cpp
 *
 *  Created on: Jul 27, 2016
 *      Author: BHornak
 */
#include "Student.h"
#include <cstring>
#include <iostream>

using namespace std;

int main (void){
	Student s("Brian Hornak", 19);
	cout << "Student: " << s.getName() << "\t\tAge: " << s.getAge() << endl;
	s.changeName("Calum von Moger");
	s.setAge(26);
	cout << "Student: " << s.getName() << "\tAge: " << s.getAge() << endl;
	return 0;
}


