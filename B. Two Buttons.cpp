#include <iostream>
using namespace std;

int main(){
   int n, m, count = 0; cin >> n >> m;
   if(m < n){
      cout << n - m << endl;
      return 0;
   }
   while(n < m){
      if(m % 2 == 0) m /= 2;
      else m++;
      count++;
   }
   cout << abs(count + n - m) << endl;

   return 0;
}