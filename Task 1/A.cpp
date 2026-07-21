#include <iostream>
using namespace std;
int main ()
{
int n ;
cout<<"enter the number of problems : ";
cin>>n;

int Count = 0;
for (int i=0 ; i<n ; i++)
{
int a, b ,c ;
cin >> a>> b>> c ;

if (a+b+c>=2){
Count++;
}
cout <<"The Number of Participants : " << Count;
}return 0 ;}