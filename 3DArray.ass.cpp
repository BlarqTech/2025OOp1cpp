#include <iostream>
using namespace std;

int main() 
{
    int age[2][3][2];

    for(int i=0;i<2;i++) 
	{
        for(int j=0;j<3;j++) 
		{
            for(int k = 0;k<2;k++) 
			{
                cout<<"Age["<<i<<"]["<<j<<"]["<<k<<"]: "<<endl;
                cin>>age[i][j][k];
            }
        }
    }
    cout<<"....Ages...."<<endl;
    for(int i = 0; i < 2; i++) 
	{
        for(int j = 0; j < 3; j++) 
		{
            for(int k = 0; k < 2; k++) 
			{
                cout<<age[i][j][k]<<"\t";
            }
            cout<<endl;
        }
        cout<<endl;
    }

    return 0;
}
