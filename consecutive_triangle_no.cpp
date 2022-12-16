#include<iostream>                                                                                              op:1
using namespace std;                                                                                               23
                                                                                                                   3456
                                                                                                                   45678
int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  int j,n,i=1,k=1;
  cin>>n;
  while(i<=n){
       j=1;
	   k=i;
      while(j<=i){
          cout<<k;
          k++;
          j++;
      }
      cout<<endl;
      i++;
  }
}
