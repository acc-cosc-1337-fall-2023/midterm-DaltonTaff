#include "question4.h"

bool test_config()
{
    return true;
}

bool is_palindrome(const std::string& str)
{
    int length = str.length();
    for (int i = 0; i < length / 2; i++)
    {
        if(str[i] != str[length - i - 1])
        {
            return false;
        }
    }
    return true;
}