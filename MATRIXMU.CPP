#include<iostream.h>
#include<conio.h>
void main()
{
	int a[20][20], b[20][20];
	int n,m,q,r; int i,j,k,l; int sum=0;
	clrscr();
	cout<<"Enter the row size of first matrix: ";
	cin>>n;
	cout<<"Enter the column size of first matrix: ";
	cin>>m;
	q=m;
	cout<<"Enter the column size of second matrix: ";
	cin>>r;
	cout<<"\nEnter elements of first matrix: \n";
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"\nThe first matrix: \n";
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}

	cout<<"\nEnter elements of second matrix: \n";
	for(i=0; i<q; i++)
	{
		for(j=0; j<r; j++)
		{
			cin>>b[i][j];
		}
	}
	cout<<"\nThe second matrix: \n";

		for(i=0; i<q; i++)
	{
		for(j=0; j<r; j++)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<"\n";
	}

	cout<<"\n\nAfter Multiplying: \n";
	for(i=0; i<n; i++)
	{
	    for(k=0; k<r; k++)
	    {
		sum=0;
		j=0; l=0;
		while(l<q)
		{
		      sum+=a[i][j]*b[l][k];
		      l++; j++;
		}
	    cout<<sum<<" ";
	    }
	    cout<<"\n";
	}
	getch();
}