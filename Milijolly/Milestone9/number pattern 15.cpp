//number pattern 15

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int main()
{  int n,m;
   cout<<"enter the number of rows  ";
   cin>>n;
    
   for(int i=n;i>=1;i--)
   { m=i;
      for(int j=1;j<=n;j++)
      { 
        
        if(m<=5) 
        {
		cout<<m;
		 }
		else
		cout<<n; 
       m++;
      }
      
      cout<<endl;
   }
   		
	getch();
	return 0;
	
}
