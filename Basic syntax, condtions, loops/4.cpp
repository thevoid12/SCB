#include <iostream>
using namespace std;

int main() {
    //Simple calculator(switch case)
    char p='+';
    int a=10;
    int b=20;
switch(p) {
  case '+':
    cout<<b+a<<endl;
    break;
  case '-':
    cout<<b-a<<endl;
    break;
   case '*':
    cout<<b*a<<endl;
    break;
  case '/':
    cout<<b/a<<endl;
    break;
}
	return 0;
}
