#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char *str[30],*temp;
    int n,cmp;
    cout<<"How many names to be entered : ";
    cin>>n;
    
    //Input names
    cout<<"Enter names : ";
    for(int i=0;i<n;i++)
    {
        str[i]=new char[20];
        cin>>str[i];
    }
    
    //sorting-Ascending Order
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            cmp=strcmp(str[j],str[j+1]);
            if(cmp>0)
            {
                temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    }
     //Print sorted list
    cout<<endl<<"Sorted list in Ascending order: ";
    for(int i=0;i<n;i++)
        cout<<endl<<i+1<<".) "<<str[i];
        
        //sorting-Descending Order
for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            cmp=strcmp(str[j],str[j+1]);
            if(cmp<0)
            {
                temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    }
    //Print sorted list
    cout<<endl<<"Sorted list in Descending Order: ";
    for(int i=0;i<n;i++)
        cout<<endl<<i+1<<".) "<<str[i];

    return 0;
}