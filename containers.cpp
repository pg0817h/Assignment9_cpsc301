#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <stack>
#include <string>
#include <vector>
#include "Student.h"

void readData(std::vector<Student> & vec) {
	// File I/O code can also be used in the other readData functions
	std::ifstream file;
	file.open("input.txt");
	std::string fn, ln;
	int id;
	int i = 0;
	float test1, test2, test3, test4, test5 =0;
	Student *s = NULL;
//	float average = test1 + test2 + test3 + test5 / 5;
	file >> fn;
	while (!file.eof()) {
		file >> ln >> id >> test1 >> test2 >> test3 >> test4 >> test5;
		std::cout << fn << " " << ln << " " << id << " " << test1 << " " << test2 << " " << test3 << " " << test4 << " " << test5 << std::endl;
		// implement logic to store data in STL container
		
		vec.emplace_back(fn,ln,id,test1);
		vec[i].setfirstName(fn);
		vec[i].setLastName(ln);
		vec[i].setStudentId(id);
		vec[i].setClassGrade(test1);

		file >> fn;
		i++;
	}
}

void readData(std::stack<Student> & vec) {
	
	


	//vec[0].getLastName();
}

void readData(std::queue<Student> & vec) {

}

void readData(std::list<Student> & vec) {

}

void readData(std::map<int, Student> & vec) {

}


int main() {
	std::vector<Student> studentVec;
	std::stack<Student> studentStack;
	std::queue<Student> studentQueue;
	std::list<Student> studentList;
	std::map<int, Student> studentMap; // use the student ID for the key

	//readData(studentVec);
	//std::cout<< studentVec[0].getFirstName();
	//  std::cout << studentStack.pop();

	std::ifstream file;
	file.open("input.txt");
	std::string fn, ln;
	Student fna;
	Student lna;
	Student Sid;
	Student te;
	int id;
	int i = 0;
	float test1, test2, test3, test4, test5 = 0;
	
	//float average = test1 + test2 + test3 + test5 / 5;
	if (file.is_open()) {
		file >> fn;
		while (!file.eof()) {
			file >> ln >> id >> test1 >> test2 >> test3 >> test4 >> test5;
			
			studentList.emplace_front(fn,ln,id,test1);
			file >> fn;
		}
	}
	std::list<Student>::iterator it;
	/*
	while (!studentList.empty()) {
		std::cout << studentList.front().getFirstName() << "\n";
		studentList.pop_front();
	}
	*/
	//studentList.sort();
	
	Student s("Geon", "p", 3, 3.0);
	studentList.insert(studentList.begin(), s);
	float max = studentList.front().getClassGrade();
	while (studentList.size() != 1 ) {
		studentList.pop_front();
 		if (studentList.front().getClassGrade() > max) {
			max = studentList.front().getClassGrade();
		}
		
		//studentList.sort();
	}
	std::cout << "Max grade is" << max;
	system("pause");
	return 0;
}
