#include<iostream>
#include<cstdio>
using namespace std;
int binarysearch(int a[],int x,int left,int right){
    while (left<=right)
    {
        int mid=(left+right)/2;
        if(a[mid]==x){
            return 1;
        } else if (x>a[mid])
        {
            left=mid+1;
        } else{
            right=mid-1;
        }
        
    }
    return -1;
}

int main(){
int n,x;
cin >>n;
int a[n];
for (int i = 0; i < n; i++)
{
    cin>>a[i];
}
    cin>>x;
    int res=binarysearch(a,x,0,n-1);
    if(res==1){
    cout<<"YES\n"<< endl;
    } else{
        cout<<"NO\n"<<endl;
    }
return 0;
}