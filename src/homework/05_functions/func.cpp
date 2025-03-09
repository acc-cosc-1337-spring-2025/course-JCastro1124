//add include statements
#include "func.h"
//add function code here
double get_gc_content(string dna)
{
    double content_total = 0;

    for(int i =0;i<dna.size();i++)
    {
        if(dna[i]==content[0] || dna[i]==content[1])
        {
            content_total ++;
        }
    }
    return content_total/dna.size();
}

string get_dna_complement(string dna)
{
    string reverse_dna = reverse_string((dna));

    string dna_complement = "";
    for (size_t i = 0; i < reverse_dna.size(); i++)
    {
        if(reverse_dna[i] == all[0])
        {
            dna_complement += "T";
        }
        else if(reverse_dna[i] == all[2])
        {
            dna_complement += "A";
        }
        else if(reverse_dna[i] == all[1])
        {
            dna_complement += "G";
        }
        else if(reverse_dna[i] == all[3])
        {
            dna_complement += "C";
        }
    }
    return dna_complement;
}

string reverse_string(string dna)
{
    string reverse_dna = "";
    for (int i = dna.size()-1; i >= 0; i--)
    {
        reverse_dna += dna[i];
    }
    return reverse_dna;
}