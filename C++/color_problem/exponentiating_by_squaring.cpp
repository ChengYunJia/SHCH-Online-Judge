//solving color problem with 'exponentiating by squaring' and 'matrix multiplication'
#include<bits/stdc++.h>
using namespace std;
#define MM vector<vector<long long>>

//x => p*q
//y => q*r
//result = x*y => p*r
int p = 3;
int q = 3;
int r = 3;
MM IM = {{1,0,0},{0,1,0},{0,0,1}};

//matrix multiplication
MM matrix_mat(MM x,MM y)
{
    MM result(p,vector<long long>(r,0));//initialize a matrix(p*r) whose elements are "zero"
    for(int i = 0 ; i < p ; i++ )
    {
        for(int j = 0 ; j < r ; j++ )
        {
            for(int k = 0 ; k < q ; k++ )
            {
                result[i][j] = result[i][j] + x[i][k] * y[k][j];
            }
        }
    }
    return result;
}

//exponentiating by squaring but matrix version
MM MatrixPow(MM x, long long y)
{
    MM result = IM, tmp = x;
    for( ; y ; y >>= 1, tmp = matrix_mat(tmp,tmp))
    {
        if( y & 1 )
        {
            result = matrix_mat(result,tmp) ;
        }
    }
    return result;
}


int main()
{
    //Three colors: Red=0, Blue=1, Black=2
    //variable N is the length of the array
    //  |-----|-----|
    //  | N-1 |  N  |
    //  |-----|-----|

    int N;
    cin >> N;

    //now Blacks cannot be adjacent
    MM transformation = {{1,1,1},{1,1,1},{1,1,0}};
    MM start = {{1},{1},{1}};

    start = matrix_mat( MatrixPow(transformation,N-1) , start );
    int ans = start[0][0] + start[1][0] + start[2][0];
    cout << ans << endl;


    return 0;
}
