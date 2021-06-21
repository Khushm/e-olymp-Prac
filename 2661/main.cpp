// Price labels

#include <iostream>
#include <iterator>
#include <set>
using namespace std;
 
int main(){
  int a, b, num;
  set<int> arr;
  cin >> a;
  for(int i = 0; i<a; i++){
    cin >> num;
    arr.insert(num);
  }
  cin >> b;
  for(int i = 0; i<b; i++){
    cin >> num;
    arr.insert(num);
  }
  set<int>::iterator it;
  for (it = arr.begin(); it != arr.end(); it++){
    cout << *it<<" ";
  }
}
