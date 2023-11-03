//converting lower_case to upper_case
#include <iostream>
using namespace std;
char lowerCase(char s){
  char ans=s-'a'+'A';
  return ans;
}
int main() {
  cout << "Hello World!\n";
  char s;
  cin >> s;
 cout << lowerCase(s);
}

//Java
import java.util.*;
public class Main
{
	public static void main(String[] args) {
	   Scanner sc=new Scanner(System.in);
	   String s=sc.nextLine();
	   String to_store = s.toUpperCase();
	   System.out.println(to_store);
	}
}