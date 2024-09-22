#include<iostream>
using namespace std;
void add(int a[][n],int b[][n],int c[][n])
{
 int i,j;
 for(i=0;i<n,i++)
  for(j=0;j<n,j++)
   c[i][j]=a[i][j]+b[i][j]
}
int main()
{
 int a[n][n]={{1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
 int b[n][n]={{1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
 int c[n][n];
 int i,j;
 add(a,b,c);
 cout<<"result is"<<endl;
 for(i=0;i<n;i++)
 {
   for(j=0;j<n;j++)
   { 
     cout<<c[i][j]<<endl;
   }
 }
return 0;
}



OUTPUT

result is
2222
4444
6666
8888