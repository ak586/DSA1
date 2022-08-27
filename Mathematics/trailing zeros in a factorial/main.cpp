#include <bits/stdc++.h>
using namespace std;

/*
 *Count number of trailing zeros in a factorial
 ! time complexity = Olog(n)
 */
int count_trailing_zeoros(int n)
{
    int res = 0;
    for (int i = 5; i <= n; i = i * 5)
    {
        res = res + (n / i);
    }
    return res;
}

int main(int argc, char const *argv[])
{
    int num;
    cin >> num;
    cout << count_trailing_zeoros(num) << endl;

    return 0;
}
