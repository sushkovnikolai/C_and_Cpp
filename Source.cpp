#include<iostream>


int str_str(const char* text, const char* pattern)
{
    int i = 0;
    int j = 0;
    int z = -1;
    if (*text == '\0') return -1;
    if (*pattern == '\0') return 0;
    else 
    {
        for (i = 0; text[i] != '\0'; i++)
        {
            if (text[i] == pattern[j])
            {
                z = i;
                while (text[i] == pattern[j])
                {
                    i++;
                    j++;
                    if (pattern[j] == '\0') return z;
                }

                if (text[i] != pattern[j])
                {
                    i -= j;
                    j = 0;
                }
            }
        }
    }
    return -1;
}


int main()
{

    std :: cout << str_str("aaaaaaf", "aaaf");
    return 0;
}