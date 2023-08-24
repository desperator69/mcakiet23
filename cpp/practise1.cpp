#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;
/*void rotatearray(vector<vector<int>>&vec){
    int n=vec.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(vec[i][j],vec[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        reverse(vec[i].begin(),vec[i].end());
    }
    return ;
}*/

  /*  int x,y,s;

x = 5;

y = ++x * ++x;

cout << x << y;

 

y = x++ * ++x;

cout << x << y;
    if(s)cout<<5;
    else cout<<2;
    
    for(int i=5;i>0;i--)
    { cout << i;} 

void square(int *x, int *y)
{

   *x = (*x) * --(*y);
}*/

int main ()
{

   int x=10;
   int &y= x;
   y++;
   x++;
   
    return 0;
}