#include<iostream>
using namespace std;

int count(int data[],int N)
{
    set<int> myset;
    for(int i=0;i<N;i++)
    {
        myset.insert(data[i]);
    }
    return myset.size();
    
    
}


