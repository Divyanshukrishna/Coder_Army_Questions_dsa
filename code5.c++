//Armstrong Number
#include <iostream>
#include <math.h>
using namespace std;

int countdigit(int n){
  int count=0;
  while(n!=0){
    count++;
    n/=10;
  }
  return count;
}

bool armstrong_number(int n,int digits){
  int num=n,ans=0,rem;
  while(n){
    rem=n%10;
    ans=ans+pow(rem,digits);
    n=n/10;
  }
  if(num == ans)
    return true;
  else
    return false;
}
int main(){
  int n;
  cin >> n;
  int digits=countdigit(n);
  cout<< armstrong_number(n,digits);
}