/**************************************************************
Name: Harshal S Somani
Computer T. Y.
PRN: 10303320171124513004
                    Code for "The 3n+1 problem"
***************************************************************/
#include<iostream>
using namespace std;
int main()
{
 double a,b;
 cin>>a>>b;
 int st[int(b-a+1)];
for(int i=a;i<=b;i++)
{
    int c=i;
    int count=1;
    while(c!=1)
    {
        
        if(c%2==0)
            {
                c=c/2;
                count++;
            }
        else
            {
                c=c*3+1;
                count++;
            }
    }     
    st[int(i-a)]=count;
}
int max=st[0];
int i=0;
while(i<(b-a))
{
    if(max<st[i])
    {
        max=st[i];
    }
    i++;
}
cout<<a<<" "<<b<<" "<<max;
return 0;
}