#include "func.h"
using std::cin;
using std::cout;

int main() 
{
	int option;
	string DNA;
	double temp1;
	string temp2;
	do
	{
		cout<<"1-Get GC Content \n"<<"2-Get DNA Complement \n"<<"3-Exit \n";
		cin>>option;
		if(option == 1)
		{
			cout<<"What is the DNA(All Caps): ";
			cin>>DNA;
			temp1=get_gc_content(DNA);
			cout<<"The GC content is "<<temp1<<"\n";
		}
		else if(option == 2)
		{
			cout<<"What is the DNA(All Caps): ";
			cin>>DNA;
			temp2=get_dna_complement(DNA);
			cout<<"The DNA complement is "<<temp2<<"\n";
		}
		else if(option == 3)
		{
			break;
		}
	} while (true);
	return 0;
}
