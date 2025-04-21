#include "text_output.h"
using std::cout;using std::cin;
using std::ofstream;using std::ifstream;using std::getline;


void output_data_to_file()
{
    cout<<"Create the file object...\n";
    ofstream myfile;
    cout<<"open my file\n";
    myfile.open("example.dat");

    cout<<"Write to file...\n";
    myfile<<"Write to file..\n";
    myfile.close();
}

void read_file_from_data()
{
    std::string line;

    cout<<"Create the file object /var...\n";

    

}