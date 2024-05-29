#include <iostream>
#include <limits.h>
using namespace std;
#define maxN 20	
char m[maxN][maxN];
int minP=INT_MAX;
int n;
bool way = false;
void init()
{int i, j;
do
{cout << "n= ";
cin >> n;
}while(n<1||n>20);
do
{cout << ":"<<endl;
for (i=0; i<=n-1; i++)
for (j=0; j<=n-1; j++)
cin >> m[i][j];
}while(m[0][0]!='0');
}
void writelab()
{int k, l;
cout << endl;
for (k=0; k<=n-1; k++)
{for (l=0; l<=n-1; l++)
cout << m[k][l] << " ";
cout << endl;
}
}
void Path(int i, int j,int pathLength)
{
    
    if (i==n-1 && j==n-1){
        m[i][j]='*';
        if(pathLength<minP)
        {
            minP=pathLength;
            writelab();
        }
         way = true;

        
    }
else
if (i>=0 && i<=n-1 && j>=0 && j<=n-1)
if(m[i][j] == '0')
{m[i][j]='*';
Path(i+1,j,pathLength+1);
Path(i,j+1,pathLength+1);
Path(i-1,j,pathLength+1);
Path(i,j-1,pathLength+1);
m[i][j] = '0';
}
}
int main()
{init();
Path(0,0,0);
if(!way) cout << "Niama pat";
else
{
    cout<<endl;
    cout<<"Min Path= "<<minP;
}
return 0;
}
