
#include <bits/stdc++.h>
using namespace std;

int F(vector<int> A, vector<int> B, int N, int M)
{
    long long int res = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            // cout<<A[i]<<" "<<B[j-1]<<" "<<i-1<<" "<<j-1<<endl;
            res += ((long long int)A[i] * B[j] * (i + j + 2)) % 998244353;
        }
    }

    return res;
}

int F_manipulate(vector<int> &A, vector<int> &B, int N, int M, int x, int i, int j, int old_F)
{
    long long int res = old_F;

    if (x == 2)
    {
        for (int k = 0; k < M; k++)
        {
            res -= ((long long int)A[i] * B[k] * (i + k + 2)) % 998244353;
            res -= ((long long int)A[j] * B[k] * (j + k + 2)) % 998244353;
        }
        swap(A[i], A[j]);
        swap(i, j);
        for (int k = 0; k < M; k++)
        {
            res += ((long long int)A[i] * B[k] * (i + k + 2)) % 998244353;
            res += ((long long int)A[j] * B[k] * (j + k + 2)) % 998244353;
        }
    }
    else if (x == 3)
    {
        for (int k = 0; k < N; k++)
        {
            res -= ((long long int)A[k] * B[i] * (i + k + 2)) % 998244353;
            res -= ((long long int)A[k] * B[j] * (j + k + 2)) % 998244353;
        }
        swap(B[i], B[j]);
        swap(i, j);
        for (int k = 0; k < N; k++)
        {
            res += ((long long int)A[k] * B[i] * (i + k + 2)) % 998244353;
            res += ((long long int)A[k] * B[j] * (j + k + 2)) % 998244353;
        }
    }
    else if (x == 1)
    {
        for (int k = 0; k < M; k++)
        {
            res -= ((long long int)A[i] * B[k] * (i + k + 2)) % 998244353;
            // res -= (long long int)A[j] * B[k] * (j + k + 2) % 998244353;
        }

        for (int k = 0; k < N; k++)
        {
            res -= ((long long int)A[k] * B[j] * (j + k + 2)) % 998244353;
        }

        res += (long long int)A[i] * B[j] * (i + j + 2) % 998244353;
        swap(A[i], B[j]);
        for (int k = 0; k < M; k++)
        {
            res += ((long long int)A[i] * B[k] * (i + k + 2)) % 998244353;
            // res -= (long long int)A[j] * B[k] * (j + k + 2) % 998244353;
        }
        for (int k = 0; k < N; k++)
        {
            res += ((long long int)A[k] * B[j] * (j + k + 2)) % 998244353;
        }

        res -= ((long long int)A[i] * B[j] * (i + j + 2)) % 998244353;
    }

    return res;
}

vector<int> array_queries(int N, int M, vector<int> A, vector<int> B, int Q, vector<vector<int>> queries)
{
    vector<int> res{F(A, B, N, M)};

    for (int a = 1; a <= Q; a++)
    {
        int x = queries[a - 1].at(0);
        int i = queries[a - 1].at(1) - 1;
        int j = queries[a - 1].at(2) - 1;
        // cout<<res[a-1]<<endl;
        int new_F = F_manipulate(A, B, N, M, x, i, j, res[a - 1]);

        res.push_back(new_F);
    }

    return res;
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for (int t_i = 0; t_i < T; t_i++)
    {
        int N;
        cin >> N;
        int M;
        cin >> M;
        vector<int> A(N);
        for (int i_A = 0; i_A < N; i_A++)
        {
            cin >> A[i_A];
        }
        vector<int> B(M);
        for (int i_B = 0; i_B < M; i_B++)
        {
            cin >> B[i_B];
        }
        int Q;
        cin >> Q;
        vector<vector<int>> queries(Q, vector<int>(3));
        for (int i_queries = 0; i_queries < Q; i_queries++)
        {
            for (int j_queries = 0; j_queries < 3; j_queries++)
            {
                cin >> queries[i_queries][j_queries];
            }
        }

        vector<int> out_;
        out_ = array_queries(N, M, A, B, Q, queries);
        cout << out_[0];
        for (int i_out_ = 1; i_out_ < out_.size(); i_out_++)
        {
            cout << " " << out_[i_out_];
        }
        cout << "\n";
    }
}