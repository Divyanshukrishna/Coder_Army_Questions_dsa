// trailing zero in factorial 


//METHOD 1 -- C++
 int trailing_zeroes(int N){
        int count=0;
        while(n>=5){
            count=count + N/5;
            N/=5;
        }
        return count;
    }



//METHOD 2 -- JAVA
#include <iostream>
#include <math.h>
using namespace std;

int zero(int n){
  int f=1;
  for(int i=1;i<=n;i++){
    f=f*i;
  }
  if(f<4)
    return 0;
  if(f>10){
  if(f%2 == 0 && f%5==0)
    return 1;
  else
    return 0;
  }
  return 0;
}

int main(){
  int n;
  cin >> n;
  cout << zero(n);
}
