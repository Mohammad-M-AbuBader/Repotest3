#include <iostream>
#include<vector>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{


    return 0;
}

bool increasingTriplet(vector<int>& v)
{
    int j=1,k=2 ;
    int  it =v.size();
    bool flag=false;
    for (int i=0; i < it-1; i++)
    {

        if ((v[i] < v[j]) &&(v[j] < v[k]))
            {
                return true;

            }
    }
    return flag;

}
