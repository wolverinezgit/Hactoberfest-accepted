#include <bits/stdc++.h>
using namespace std;

int main() {    

int n;
cin>>n;
int a[n];
int i;
for(i=0;i<n;i++)
    cin>>a[i];
 //ASSUMPTION:1)ALL THE ELEMENTS TO THE LEFT SIDE OF LOW ARE ZERO
        //2)ALL THE ELEMENTS TO THE RIGHT SIDE OF HIGH ARE TWO
        //3)TRY TO TRAVERSE THE aAY WITH MID POINTER
         //4)IF MID POINTER IS POINTING TO 1 THEN ONLY MOVE THE MID POINTER
         //IF MID IS POINTING TO 0 THEN SWAP WITH LOW DO LOW++
        //IF MID IS POINTING TO 2 THEN SWAP WITH HIGH AND DO HIGH--

int low=0,high=n-1,mid=0;

while(mid<=high)
{
if(a[mid]==1)
{
    mid++;
}
else if(a[mid]==0)
{
    swap(a[mid],a[low]);
    low++;
    mid++;

}
else
{
    swap(a[mid],a[high]);
    high--;
}
}
    
      for(i=0;i<n;i++)
        cout<<a[i]<<" ";

    
   
    return 0;
}
