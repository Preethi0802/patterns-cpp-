#include <iostream>                                                                                                     op:      1
using namespace std;                                                                                                            232
                                                                                                                               34543
int main() {                                                                                                                  4567654
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n;
    cin>>n;
    int i=1,j,k,x;
    while(i<=n){
        j=1;
        while(j<=n-i){
            cout<<" ";
            j++;
        }
        j=1;
        k=i;
        while(j<=i){
            cout<<k;
            k++;
            j++;
        }
        k-=2;
        x=i-1;
        while(x>=1){
            cout<<k;
            k--;
            x--;
        }
        cout<<endl;
        i++;
    }
}
