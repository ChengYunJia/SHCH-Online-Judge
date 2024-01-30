#include<bits/stdc++.h>
using namespace std;

int main()
{
    //Three colors: Red=0, Blue=1, Black=2
    //variable N is the length of the array
    //  |-----|-----|
    //  | N-1 |  N  |
    //  |-----|-----|

    int N;
    cin >> N;
    int DP[N][3];
    //DP means all the combinations when the array is "first index" long,
    //and the color of the last element is "second index"
    DP[0][0] = DP[0][1] = DP[0][2] = 1;

    //now Blacks cannot be adjacent
    for(int i = 1 ; i < N ; i++ )
    {
        DP[i][0] = DP[i-1][0] + DP[i-1][1] + DP[i-1][2];
        DP[i][1] = DP[i-1][0] + DP[i-1][1] + DP[i-1][2];
        DP[i][2] = DP[i-1][0] + DP[i-1][1] ;
    }
    cout <<  DP[N-1][0] + DP[N-1][1] + DP[N-1][2] << endl;

    return 0;
}