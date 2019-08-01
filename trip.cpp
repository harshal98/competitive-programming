/**************************************************************
Name: Harshal S Somani
Computer T. Y.
PRN: 10303320171124513004
                    Code for "The Trip problem"
***************************************************************/
#include<iostream>
using namespace std;
int main()
{
    int s;
    cin>>s;
    float *st=new float[s];
    for(int i=0;i<s;i++)
    {
        cin>>st[i];
    }
    float sum=0;
    for(int i=0;i<s;i++)
    {
        sum=sum+st[i];
    }
    float avg=sum/s;
    avg=int(avg*100)/100;
    float ex=0;
    for(int i=0;i<s;i++)
    {
        if(avg>st[i])
        ex=ex+(avg-st[i]);
    }
    cout<<"$"<<ex;
    return 0;
}