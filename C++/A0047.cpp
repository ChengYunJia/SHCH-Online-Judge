#include<bits/stdc++.h>
using namespace std;

struct  Ans
{
    int begin;
    int end;
    int max;
};

Ans MaxSubArray(vector<int>);

int main()
{
    int n;
    cin >> n;
    vector<int> num;

    for(int i = 0 ; i < n ; i++)
    {
        int enter;
        cin >> enter;
        num.push_back(enter);
    }
    Ans ans = MaxSubArray(num);
    cout << ans.begin << " " << ans.end << endl;
    cout << ans.max;
}

Ans MaxSubArray(vector<int> list)
{
    int n = list.size();
    Ans NowIndexMax, AllMax;
    NowIndexMax.max = AllMax.max = list[0];
    NowIndexMax.begin = NowIndexMax.end = AllMax.begin = AllMax.end = 0;

    for(int i = 1 ; i < n ; i++)
    {
        NowIndexMax.end = i;
        if(NowIndexMax.max > 0)//接續加上去
        {
            NowIndexMax.max += list[i];
        }
        else//換現在
        {
            NowIndexMax.max = list[i];
            NowIndexMax.begin = i;
        }
        //是不是最大值
        if(NowIndexMax.max >= AllMax.max)
        {
            AllMax = NowIndexMax;
        }
    }
    return AllMax;
}

