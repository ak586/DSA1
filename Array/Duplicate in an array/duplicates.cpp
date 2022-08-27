#include <iostream>
using namespace std;
#include <vector>

vector<int> findDuplicates(vector<int> &nums)
{
    vector<int> ans;
    int temp;
    for (int i = 0; i < nums.size(); i++)
    {
        temp = abs(nums[i]);
        cout << temp << endl;
        if (nums[temp - 1] < 0)
        {
            cout << "inside " << temp << endl;
            ans.push_back(temp);
        }
        else
        {
            nums[temp - 1] *= -1;
            cout << temp << "outside" << endl;
        }
    }
    for (int x : ans)
        cout << "element" << x << endl;
    return ans;
}
int main(int argc, char const *argv[])
{
    vector<int> v = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> ans = findDuplicates(v);
    for (auto x : ans)
        cout << x << " ";
    return 0;
}
