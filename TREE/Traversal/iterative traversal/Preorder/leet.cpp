#include <bits/stdc++.h>
using namespace std;
int arithmeticTriplets(vector<int> &nums, int diff)
{
    int sum = 0;
    int one = 0;
    int three = 0;
    int i = 0;
    vector<int> v;
    vector<int> v2;

    while (one < nums.size())
    {
        cout << "one: " << one << endl;
        if (sum < 2 * diff)
        {
            sum = nums[three] - nums[one];

            if (three < nums.size() - 1 and sum != 2 * diff)
            {
                three = three + 1;
            }
        }
        else if (sum == 2 * diff)
        {
            v.push_back(one);
            v2.push_back(three);
            one++;
            sum = nums[three] - nums[one];

        }
        else
        {
            sum = sum - nums[one];
            one = one + 1;
            sum = sum + nums[one];
        }
        // cout << "End of while" << endl;
    }
    cout << "zEnd" << endl;
    int count = 0;
    for (int i = 0; i < v.size(); i++)
    {
        int temp = v[i] + diff;
        for (int j = 0; j < nums.size(); j++)
        {
            auto it = find(nums.begin(), nums.end(), temp);
            int place = it - nums.begin();
            if (place > v[i] and place < v2[i])
            {
                count++;
            }
        }
    }

    return count;
}

int main(int argc, char const *argv[])
{
    vector<int> vect{0, 1, 4, 6, 7, 10};
    cout << arithmeticTriplets(vect, 3);
    return 0;
}
