#include <iostream.h>
#include <conio.h>
     void mulp()
	{
 int ar[10][10],arr[10][10],n,m,ans[10][10];
 cout<<"Enter the row and col." ;
 cin>>n;
 cin>>m;
 cout<<"Enter the data";
 for (int i=0;i<n;i++)
    {
     for (int j=0;j<m;j++)
     cin>>ar[i][j];
    }

 cout<<"Enter the data";
 for (i=0;i<n;i++)
    {
     for (int j=0;j<m;j++)
     cin>>arr[i][j];
    }

 for ( i=0;i<n;i++)
 {
 for (int j=0;j<m;j++)
 {     ans[i][j] =0;
     for(int k=0;k<n;k++)
     ans[i][j]+=ar[i][k]* arr[k][j] ;
    }
 }
 for (i=0;i<n;i++)
     {         cout<<"\n ";
     for (int j=0;j<m;j++)
     cout << ans[i][j]<<" ";
  }

}
void main ()
{
mulp();
getch();

}