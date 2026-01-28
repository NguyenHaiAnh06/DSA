#include<iostream>
#include<math.h>
#include<time.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;
 
void matrannho(double a[10][10],double temp[10][10],int p,int q,int n){
    int i=0,j=0;
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            if(row!=p && col!=q){
                temp[i][j++]=a[row][col];
            } if(j==n-1){
                 j=0;
                 i++;
            }
        }
    }
}
 
double det(double a[10][10],int n){
   if(n==1)
   return a[0][0];
   if(n==2)
    return a[0][0]*a[1][1] - a[0][1]*a[1][0];
   
   double d=0;
   double temp[10][10];
    int sign=1;
   for(int f=0 ; f<n ;f++){
     matrannho(a,temp,0,f,n);
     d+= sign * a[0][f] * det(temp,n-1);
      sign=-sign;
   }
  return d;
}

void matranphuhop(double a[10][10],double aij[10][10],int n){
   if(n==1){
     aij[0][0]=1;    //em thuc hien tra ve ma tran don vi
   } return;
   double temp[10][10];
   int sign=0;
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
     matrannho(a,temp,i,j,n);
     sign=(( (i+j) % 2== 0 )? 1:-1);
     aij[j][i]=sign*det(temp,n); // phep tinh em chuyen vi ma tran
    }
   }
 }
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
//  #ifndef ONLINE_JUDGE
//    freopen("MATRAN.INP","r",stdin);
//    freopen("MATRAN.OUT","w",stdout);
//    #endif
   srand(time(NULL));
   int n;
   cin>>n;
   double a[10][10];
   for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      cin>>a[i][j];

 double d=det(a,n);
   if(d==0){
     cout<<"Ko co ma tran nghich dao\n"<<endl;
     return 0;
  }
  double aij[10][10]; double chuan[10][10];
  matranphuhop(a,aij,n);
   for (int i = 0; i < n; i++)
   {
    for(int j=0;j<n;j++){
        chuan[i][j]=aij[i][j]/d;
        cout<< fixed << setprecision(3) <<chuan[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<"detA la:"<<d;
  int y;
   double temp[10][10];
     matrannho(a, temp, 0, y, n);


for(int x = 0; x < n - 1; x++){
    for( y = 0; y < n - 1; y++){
        cout << fixed << setprecision(3) << temp[x][y] << " ";
    }
    cout << endl;
}
cout << endl;







    return 0;
}