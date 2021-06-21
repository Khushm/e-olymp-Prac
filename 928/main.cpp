// The sum of the largest and the smallest

#include <iostream>
#include <list>
using namespace std;

int main(){
  int test, e;
  cin >> test;
  list<int> arr;
  for(int i=0;i<test;i++){
    cin >> e;
    arr.push_back(e);
  }
  arr.sort();
  int min = arr.back();
  int max = arr.front();
  cout << min+max;
  return 0;
}
