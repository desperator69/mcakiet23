#include<iostream>
#include<algorithm>
using namespace std;
/*void print(int * myArr,int n){
    for(int i=0;i<n;i++)
    {cout<<myArr[i]<<" ";}
    cout<<endl;
}*/

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {cin>>arr[i];}
    sort(arr,arr+n);
   /*print(arr,n);*/
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
    return 0;
}