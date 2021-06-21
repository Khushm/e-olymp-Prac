// Sets Union

#include <iostream>
#include <iterator>
#include <set>
using namespace std;
 
int main(){
  int a, b, num;
  set<int> arr;
  cin >> a;
  while(a--){
    cin >> b;
    for(int i = 0; i<b; i++){
      cin >> num;
      arr.insert(num);
    }
  }
  cout << arr.size();
}
