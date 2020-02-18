#include<iostream>
#include<windows.h>
using namespace std;

int main(int argc, char **argv)
{
     int matA[2][3]={5,5,5,5,5,5};
     int matB[3][2]={2,3,2,3,2,3};
     cout<<"Matriks A"<<endl;
     for(int i=0; i<2; i++)
    {
         for(int j=0; j<3; j++)
         {
            cout<<matA[i][j]<<" ";
         }
         cout<<endl;
     }
     cout<<"Matriks B"<<endl;
     for(int i=0; i<3; i++)
     {
        for(int j=0; j<2; j++)
        {
          cout<<matB[i][j]<<" ";
        }
        cout<<endl;
     }
     cout<<"Hasil perkalian Matriks A dan B "<<endl;
     for(int i=0; i<2; i++)
     {
        for(int j=0; j<2; j++)
        {
          cout<<matA[i][0]*matB[0][j]+matA[i][1]*matB[1][j]+matA[i][2]*matB[2][j]<<" ";
        }
        cout<<endl;
     }
     system("PAUSE");
     return 0;
}

