#include <iostream>
#include <string>
using namespace std;
int main(){
    int n=4;
//    cin>>n;
    // int k =1;
    for (int i = 1; i <= n; i++)
    {
        
        for (int j = 1; j <= i; j++)
        {
            char ch='A'+n-i+j-1;
            cout<<ch<<" ";
            
            
        }
        
        cout<<endl;
    }
    
    return 0;
}
