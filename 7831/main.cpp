// Sum without Maximum

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
  int a = arr.back() ;
  arr.remove(a);
  int sum = 0;
  int n = arr.size();
  for (auto it = arr.begin(); it != arr.end(); ++it)
    sum += *it;
  cout << sum;
  return 0;
}
