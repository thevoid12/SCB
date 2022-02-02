#include <iostream>
using namespace std;

int main() {
    //Sum of N natural numbers(1 to N)
 
   int sum=1;
   int n;
   cin>>n;
   for(int i=2;i<=n;i++)
   sum+=i;
   cout<<sum;
	return 0;
}
