//? Leetcode problem no 8 string to integer

#include <iostream>
#include <climits>
#include <string.h>
#include <string>

using namespace std;

int myAtoi(string s)
{
    //* remove leading spaces
    int i = 0;
    while (s[i] == ' ')
        i++;
    s = s.substr(i); // leading spaces has been removed
    //* next step, check sign
    i = 0;
    int sign = 1;
    if (s[0] == '-')
    {
        sign = -1;
        i = 1;
    }
    else if (s[0] == '+')
        i = 1;
    long result = 0;
    //* traverse the string
    while (i < s.length())
    {
        if (s[i] == ' ' || !isdigit(s[i]))
            break;
        result = result * 10 + (s[i] - '0');
        if (sign == 1 && result >= INT_MAX)
            return INT_MAX;
        if (sign == -1 && result * sign <= INT_MIN)
            return INT_MIN;
        i++;
    }
    return result * sign;
}

int main(int argc, char const *argv[])
{
    cout << myAtoi(" -429300390900");
    return 0;
}
