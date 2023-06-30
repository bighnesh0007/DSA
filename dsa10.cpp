#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k=1;
    

    for (int i=1; i <=n; i++)
        {
            for (int j=1;j<=i; j++)
                {
                    char ch='A'+k-1;
                    cout<<ch<<" ";
                    k+=1;
                }
             cout<<endl;
        }
    return 0;
}
