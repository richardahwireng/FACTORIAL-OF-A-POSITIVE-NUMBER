#include <iostream>
using namespace std;
int main()
{
   int i,factorial=1,n;

  cout<<" Enter any Number: ";
 cin>>n;
  for(i=1;i<=n;i++){
      factorial=factorial*i;
  }
  cout<<"Factorial of " <<n<<" is: "<<factorial<<endl;
  return 0;
}
