#include <iostream>
#include <string>
using namespace std;

int sumArray(int arr[],int i,int n){
    if(i == n){
        return 0;
    }

   return arr[i]+ sumArray(arr,i+1,n);
}

int main() {
  int arr[]={3,5,6};
  cout<<sumArray(arr,0,3);
}