#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    

    for (int i=1; i <=n; i++)
        {
            for (int j=1;j<=n; j++)
                {
                    char abc='A'+i-1;
                    cout<<abc<<" ";
                    

                }
             cout<<endl;
        }
    return 0;
}

