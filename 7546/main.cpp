// I’ve Been Everywhere, Man

#include <iostream>
#include <set>
#include <string>
using namespace std;
 
int main(){
  int a, b;
  string place;
  set<string> arr;
  cin >> a;
  while(a--){
    cin >> b;
    for(int i=0;i<b;i++){
      cin >> place;
      arr.insert(place);
    }
    cout << arr.size()<< endl;
    arr.clear();
  }
}
