// Module 4.2.8 - Assume that the test results of a batch of students are stored in three different
// classes.Class Students are storing the roll number.Class Test stores the marks
// obtained in two subjects and class result contains the total marks obtained in
// the test.The class result can inherit the details of the marks obtained in the
// test and roll number of students. (Multilevel Inheritance)

#include<iostream>
#include<conio.h>

using namespace std;

class Students {
public:
	int r_num;
	int roll_n() {
		cout << "Enter the student roll number: " << endl;
		cin >> r_num;
		return 0;
	}
};

class Test : public Students{
public: 
	int sub1, sub2;
	int marks() {
		cout << "Enter the marks in subject 1 and subject 2: " << endl;
		cin >> sub1 >> sub2;
		return 0;	
	}
};

class result : public Test {
public:
	float t_marks;
	int total() {
		t_marks = (float)(sub1 + sub2) / 2;
		cout << "Total marks is: " << t_marks;
		return 0;
	}
};

int main() {
	result r1{};
	r1.roll_n();
	r1.marks();
	r1.total();
}
