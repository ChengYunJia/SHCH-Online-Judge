#include<bits/stdc++.h>
using namespace std;
#define MM vector<vector<long long>>

//x => p*q
//y => q*r
//result = x*y => p*r
int p = 3;
int q = 3;
int r = 3;
MM IM((1,0),(0,1));

//matrix multiplication
MM mat(MM &x,MM &y)
{
    MM result(p,vector<long long>(r,0));//initialize a matrix(p*r) whose elements are "zero"
    for(int i = 0 ; i < p ; i++ )
    {
        for(int j = 0 ; j < r ; j++ )
        {
            for(int k = 0 ; k < q ; k++ )
            {
                result[i][j] = x[i][k] * y[k][q];
            }
        }
    }
    return result;
}

MM MatrixPow(MM x, long long y)
{
    MM result = IM
}


int main()
{
    //Three colors: Red=0, Blue=1, Black=2
    //variable N is the length of the array
    //  |-----|-----|
    //  | N-1 |  N  |
    //  |-----|-----|



    return 0;
}
