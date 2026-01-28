#include<iostream>
#include<time.h>
using namespace std;

int patision(int a[],int left,int right){
  int pivot=a[right];
  int i=left-1;
  for (int j = left; j < right; j++)
  {
    if(a[j]<=pivot){
        i++;
        swap(a[i],a[j]);
    }
  }
  i++;
  swap(a[i],a[right]);
  return i;
}

void quicksoft(int a[],int left,int right){
    if (left>=right)
    { return;}
        int p=patision(a,left,right);
        quicksoft(a,left,p-1);
        quicksoft(a,p+1,right);
   
}

int main(){
int n;
cin>>n;
int a[10000];
srand(time(NULL));
for (int i = 0; i < n; i++)
{
    a[i]=rand()%10000;
    // cin>>a[i];
}
quicksoft(a,0,n-1);
for (int i = 0; i < n; i++)
{
    cout<<a[i]<<" ";
}

return 0;
}