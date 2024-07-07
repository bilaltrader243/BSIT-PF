#include<iostream>
using namespace std;

int main()
{ 
int width;
cout<<"Enter the width of diamond: ";
cin>>width;
    for(int j{1}; j<=width; j++)
    {
     for(int s{width}; s>j; s--)
     {
      cout<<' ';
     }
     for(int i{1}; i<=j; i++)
       { 
       cout<<"*"<<' ';
       }
       cout<<endl;
    }
    
    for(int h{width}; h>=1; h--)
      {
       for(int sp{width};sp>=h; sp--)
        {
         cout<<' ';
        }
        for(int r{1}; r<h; r++)
        {
        cout<<"*"<<' ';
        }
        cout<<endl;
      }
    return 0;
}