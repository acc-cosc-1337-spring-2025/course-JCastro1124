//write include statements
#include <iostream>
#include "decisions.h"
using std::cout;
using std::cin;

int main() 
{
	int grade,option;
	char letter_grade;
	cout<<"    MAIN MENU    \n"<<"1-Letter grade using if \n"<<"2-Letter grade using switch \n"<<"3-Exit \n";
	cin>>option;
	switch (option)
	{
	case 1:
		cout<<"What is the grade: ";
		cin>>grade;
		if(grade<=100 && grade>=0)
		{
			letter_grade = get_letter_grade_using_if(grade);
		}
		else
		{
			cout<<"Sorry, out of range! \n";
		}
		break;
	case 2:
	cout<<"What is the grade: ";
	cin>>grade;
	if(grade<=100 && grade>=0)
	{
		letter_grade = get_letter_grade_using_switch(grade);
	}
	else
	{
		cout<<"Sorry, out of range! \n";
	}
	break;
	default:
		break;
	}
	if (letter_grade)
	{
		cout<<"The letter grade of "<<grade<<" is "<<letter_grade;
	}



	return 0;
}