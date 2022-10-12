/*
Chapter Assignment
Problem Statement: Multiplication (Recursive)
Problem Level: EASY
Problem Description:
Given two integers M & N, calculate and return their multiplication using recursion. You can only use subtraction and addition for your calculation. No other operators are allowed.
Input format :
Line 1 : Integer M
Line 2 : Integer N

Output format :
M x N

Constraints :
0 <= M <= 1000
0 <= N <= 1000
*/

#include<bits/stdc++.h>
using namespace std;

int recursiveMultiplication(int M,int N)
{

	if(N==0)
		return 0;
	else
		return M+recursiveMultiplication(M,N-1);
}

int main(){
int m;
int n;
cin>>m>>n;
cout<<recursiveMultiplication(m,n)<<endl;
return 0;
}




