
#include<iostream>
#include<windows.h>
using namespace std;

int main(int argc, char **argv)
{
     int matA[2][2]={4,8,2,10};
     int transpose[2][2];
     cout<<"Matriks A"<<endl;
     for(int i=0; i<2; i++)
    {
         for(int j=0; j<2; j++)
         {
            cout<<matA[i][j]<<" ";
         }
         cout<<endl;
     }
     for(int i=0;i<2;i++)
     {
         for(int j=0;j<2;j++)
         {
             transpose[j][i]=matA[i][j];
         }
     }
     cout<<"Hasil Operasi Transpose Matriks A "<<endl;
     for(int i=0; i<2; i++)
     {
        for(int j=0; j<2; j++)
        {
          cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
     }
     system("PAUSE");
     return 0;
}
