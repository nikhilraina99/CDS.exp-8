// Nikhil
// 23070123093
// experiment 8
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d , i , j ,k , e, f;
    cout<< "Enter Matrix-1 rows: ";
    cin>> a ;
    cout<<"Enter Matrix-1 columns: ";
    cin>> b;
    cout<<"Enter Matrix-2 rows: ";
    cin>> c ;
    cout<<"Enter Matrix-2 columns: ";
    cin>> d;

    int mat1[a][b];
    int mat2[c][d];
    int add[a][b];
    int multi[a][d];
    
 if ( a!=c || b!=d)
    {  cout<< "Matrix cannot be added as dimension do not match."<<endl;
    }
  else
{cout<<"Enter Matrix-1 elements"<<endl;
 for (i=0 ; i < a ; i++)
    {
        for(j = 0 ; j < b ; j++)
        {   cout<< "Enter elements- ("<<i<< "," <<j<<"): "  ;
            cin>>mat1[i][j];
        }
    }

cout<<"Enter Matrix-2 elements"<<endl;
    for (i=0 ; i < c ; i++)
    {
        for(j = 0 ; j < d ; j++)
        {   cout<< "Enter elements- ("<<i<< "," <<j<<"): "  ;
            cin>>mat2[i][j];
        }
    }

for (i=0 ; i < a ; i++)
    {
        for(j = 0 ; j < b ; j++)
        {  add[i][j] = mat1[i][j] + mat2 [i][j];
        }
    }
cout<<"Addition of Matrix: "<<endl;
for (i=0 ; i< a ; i++)
{
    for(j = 0; j< b ; j++ )
    { cout<< " " <<add[i][j];
    }
    cout<<endl;
}}

    if( b != c)
{   cout<< "Matrices cannot be multiplied as dimensions do not match." <<endl;
    return 1;
}
for(i = 0; i<a ; i++)
{
    for( j = 0; j<d ; j++)
    {
        multi[i][j] = 0;
        for( k=0; k<b ; k++)
        {
            multi[i][j] += mat1[i][k] * mat2[k][j];
        }
    }
}
cout << "Multiplication of Matrix: "<<endl;
for (i=0 ; i< a ; i++)
{
    for(j = 0; j< b ; j++ )
    {  cout<< " " <<multi[i][j];
    }
    cout<<endl;
}
}