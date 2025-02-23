//write include statement for decisions header
#include "decisions.h"
#include <iostream>
//Write code for function(s) code here
char get_letter_grade_using_if(int grade)
{
    if (grade >= 90)
    {
        return 'A';
    }
    else if (grade <=89 && grade >= 80)
    {
        return 'B';
    }
    else if (grade <=79 && grade >= 70)
    {
        return 'C';
    }
    else if (grade <=69 && grade >= 60)
    {
        return 'D';
    }
    else if (grade < 60)
    {
        return 'F';
    }
    return 'E';
}


char get_letter_grade_using_switch(int grade)
{
    char letter;
    switch(grade/10)
    {
    case 10:
    case 9:
        letter = 'A';
        break;
    case 8:
        letter = 'B';
        break;
    case 7:
        letter = 'C';
        break;
    case 6:
        letter = 'D';
        break;
    default:
        letter = 'F';
        break;
    }
    return letter;
}
