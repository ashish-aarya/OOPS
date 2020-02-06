#include<conio.h>
#include<iostream.h>
#include<string.h>
 int i;
class student {
private : char a[20];
	   int b;
	   int m[5];
	   float s;
public:  void setdata(char * a1,int r,int *m1)
	     {  float d;
	      strcpy(a,a1);
		  b=r;
		  d=0;

		  for(i=0;i<5;i++)
		  {   m[i]=m1[i];
				     d=d+m[i];
			       }
		s=(d/500)*100;
			       }

void display(){
	if(s>96)
	cout<<"computer science";
	else if(s>91&&s<95)
	      cout<<"electronics";
	else if(s>86&&s<90)
	       cout<<"mechanical";
	 else if(s>81&&s<85)
		cout<<"electrical";
	  else if(s>76&&s<80)
		  cout<<"chemical";
	   else if(s>71&&s<75)
		 cout<<"civil";
	    else cout<"no stream";
		    }
		    };
 void main()
 { clrscr();
  student s1;
   int m2[5];
   char n[20];
   int r2;
   cout<<"enter the marks" ;
   for(i=0;i<5;i++)
    cin>>m2[i];
   cout<<endl<<"enter your name";
   cin>>n;
  cout<<endl<<"enter the roll no.";
   cin>>r2;
  s1.setdata(n,r2,m2);
  s1.display();
  getch();
  }



