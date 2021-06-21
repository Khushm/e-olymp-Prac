// Sum of elements

#include <iostream>
#include <numeric>
using namespace std;

int main(){
  int test;
  cin >> test;
  double arr[test];
  for(int i=0;i<test;i++){
    cin >> arr[i];
  }
  double sum = 0.0;
  sum = accumulate(arr, arr+test, sum);
  cout << sum;
  return 0;
}
