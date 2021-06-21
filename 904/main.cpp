///Increase by 2

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int test;
  cin >> test;
  int arr[test];
  for(int i=0;i<test;i++){
    cin >> arr[i];
    if(arr[i] >= 0){
      arr[i]+=2;
     }
  }

  for(int i=0;i<test;i++){
    cout << arr[i] << " ";
  }
  return 0;
}
