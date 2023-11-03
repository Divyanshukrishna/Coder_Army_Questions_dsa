//BISHOP(CHESS)
#include <iostream>
using namespace std;

int main(){
  int A,B,v;
  cin >> A >> B;
  int v=solve(A,B);
  count << v;
}
int solve(int A,int B){
    int count=0;
    count+=min(A-8,B-8);
    count+=min(A-8,B-1);
    count+=min(A-1,B-1);
    count+=min(A-1.8-B);

    return count;
}