//write include statement for if header
bool is_num_in_range(int min, int max, int num)
{
    bool in_range = false;
    in_range = num >= min && num <= max;
    return in_range;
}
bool is_vowel(char letter)
{
    return letter == 'a' or letter == 'e' or letter == 'i' || letter == 'u' || letter == 'o';
}
bool is_consant(char letter)
{
    return not letter == 'a' or not letter == 'e' or not letter == 'i' || not letter == 'u' || not letter == 'o';
}
bool is_num_even(int num)
{
    return num % 2 == 0;
}
//write code for function named overtime that accepts a double hours and returns true if 
//hours over 40, false otherwise


