#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

int patision(int a[],int left,int right){
    int i = left-1;
    int pivot=a[right];
   for(int j = left; j < right; j++)
       if(a[j] <= pivot){
         i++;
         swap(a[i],a[j]);
       }
       i++;
       swap(a[i],a[right]);
       return i;
}
void quicksoft(int a[],int left,int right){
    if(left>=right){return;}
        int p = patision(a,left,right);
            quicksoft(a,left,p-1);
            quicksoft(a,p+1,right);
}

int sogiongnhau(int a[],int n){
    quicksoft(a,0,n-1);
    for(int i = 1 ; i < n; i++){
        if(a[i]==a[i-1]){
            return 1;
        }
    }
   return -1;
}
// void demsoam(int arr[],int n){
//     int count=0 , countsum=0;
//     for(int i = 0 ; i < n; i++){
//        for(int j = i + 1 ; j< n;j++){
//          if(arr[i]<0){
//             count++;
//          }
//          if(count<=2){
//             countsum++;
//             break;
//          }
//        }
//     }
//     int p=countsum;
// }

int main(){
int n;
cin>>n;
int a[n];
srand(time(NULL));
for(int i=0;i<n;i++){
    cin>>a[i];
//   a[i]=rand() % 30-10;
}
for (int i = 0 ; i < n ; i++ ){
    quicksoft(a,0,n-1);
    cout<<a[i]<<" ";
}
   int s=sogiongnhau(a,n);
 
 if(s==1){
    cout<<"Yes\n";

} else{

    cout<<"NO\n";

}
       int p;
    //    demsoam(a,n);
    //     cout<<p<<" ";
    return 0;
}
// int dem = 0;
// for (int i = 0; i < n - 2; i++) {
//     for (int j = i + 1; j < n - 1; j++) {
//         for (int k = j + 1; k < n; k++) {
//             // Kiểm tra xem trong 3 số a[i], a[j], a[k] 
//             // có đúng 2 số âm và ít nhất 1 số dương không
//             int soAm = 0;
//             int soDuong = 0;

//             if (a[i] < 0) soAm++; else if (a[i] > 0) soDuong++;
//             if (a[j] < 0) soAm++; else if (a[j] > 0) soDuong++;
//             if (a[k] < 0) soAm++; else if (a[k] > 0) soDuong++;

//             if (soAm == 2 && soDuong >= 1) {
//                 dem++;
//                 // In ra để kiểm tra: cout << a[i] << " " << a[j] << " " << a[k] << endl;
//             }
//         }
//     }
// }