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
    string reverse_dna = "";
    for (int i = dna.size()-1; i >= 0; i--)
    {
        reverse_dna += dna[i];
    }
    string dna_complement = "";
    for (int i = 0; i < reverse_dna.size(); i++)
    {
        if(reverse_dna == "A")
        {
            dna_complement += "T";
        }
        else if(reverse_dna == "T")
        {
            dna_complement += "A";
        }
        else if(reverse_dna == "C")
        {
            dna_complement += "G";
        }
        else if(reverse_dna == "G")
        {
            dna_complement += "C";
        }
    }
    return dna_complement;
}