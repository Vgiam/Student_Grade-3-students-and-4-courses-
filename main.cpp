#include <iostream>
#include<string>
#include<iomanip>
#include<cctype>
#include<math.h>
void printArray(std::string arr[], int size);
void makeUpper(std::string &arg);
int main() {
	
	//Students
	std::string students[3];
	for (int i = 0; i<3; i++) {
		std::cout << "Insert student firstname" << std::endl;
		std::string firstName;
		
		std::getline(std::cin, firstName);
		makeUpper(firstName);
		
		
		std::cout << "Insert student lastname" << std::endl;
		std::string lastName;
		std::getline(std::cin, lastName);
		
		makeUpper(lastName);
		
		students[i] = firstName + " " + lastName;
		std::cout << std::endl;

		
	}

	printArray(students, 3);

	//Courses
	std::string courses[4];
	
	for (int i = 0; i < 4; i++) {
		std::cout << "Insert new course: ";
		std::string course;
		std::getline(std::cin, course);
		
		makeUpper(course);

		
		courses[i] = course;
		
	}

	printArray(courses, 4);

	//Grades
	const int rows = 3;
	const int cols = 4;
	double grades[rows][cols];

	

	
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			std::cout << "Enter grade for "+ students[i] + " and course  " + courses[j]+ ": ";
			std::cin >> grades[i][j];

			std::cin.ignore();
		}
	}

	for (int i = 0; i < 3; i++) {
		std::cout <<std::left<< std::setw(20)<< students[i] << "\t";
		for (int j = 0; j < 4; j++) {
			std::cout <<std::setw(6)<< courses[j] << "\t"<<grades[i][j]<<"\t";
		}
		std::cout << "\n\n";
	}

	//Average Grades
	
	for (int i = 0; i < 3; i++) {
		double sum{ 0 };
		std::cout << "The student " << students[i] << "has an average grade of ";
		for (int j = 0; j < 4; j++) {
			sum += grades[i][j];
		}
		std::cout<<std::setprecision(2) << sum/4 << std::endl;
	}
	

	return 0;

	

}

void printArray(std::string arr[],int size) {
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << std::endl;
	}
	std::cout << "\n";
}

void makeUpper(std::string &arg) {
	if (!arg.empty()) {
		arg[0] = std::toupper(arg[0]);
	}

}

