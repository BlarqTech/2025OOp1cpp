#include <iostream>
using namespace std;

int main()
{
	int a[2][2],b[2][2],sum[2][2],r,c;
	 cout<<"...matrix A..."<<endl;
       for (r=0; r<2; r++)
	   {
	   	for(c=0; c<2; c++)
		   {
			  cout<<"A:"<<r<<c<<endl;
               cin>>a[r][c];
		   }
		}
		cout<<"\n...matrix B..."<<endl;
       for (r=0; r<2; r++)
	   {
	   	for(c=0; c<2; c++)
		   {
			   cout<<"B:"<<r<<c<<"\t";
               cin>>b[r][c];
		   }
        }
        for (r=0; r<2; r++)
	   {
	   	for(c=0; c<2; c++)
		   {
			   sum[r][c] = a[r][c]+b[r][c];
		   }
	   }   
	   cout<<"...sum of A and B:"<<endl;
	    for (r=0; r<2; r++)
	   {
	   	for(c=0; c<2; c++)
		   {
		   	 cout<<sum[r][c]<<"\t";
		   }
		   cout<<endl;
	   }
	return 0;
}