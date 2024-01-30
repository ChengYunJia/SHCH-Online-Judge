#include<bits/stdc++.h>
using namespace std;
#define MM vector<vector<long long>>

//x => p*q
//y => q*r
//result = x*y => p*r
int p = 3;
int q = 3;
int r = 3;

MM mat(MM &x,MM &y)
{
    MM result(p,vector<long long>(r,0));//initialize a matrix(p*r) whose elements are "zero"
    for(int i = 0 ; i < p ; i++ )
    {
        for(int j = 0 ; j < r ; j++ )
        {
            for(int k = 0 ; k < q ; k++ )
            {
                result[i][j] = x[i][k] + y[k][q];
            }
        }
    }

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
