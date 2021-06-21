// Different-different

#include <iostream>
#include <iterator>
#include <set>
using namespace std;
 
int main(){
    int a, b, num;
    set<int> arr;
    cin >> a;
    for(int i=0;i<a;i++){
        cin >> num;
        arr.insert(num);
    }
    cout << arr.size();
}
