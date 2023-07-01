#include <iostream>
using namespace std;
int main()
{
    int n;
   cin>>n;
    // sum start
    int m=n;
    int sum=0;
    int multi=1;
    while (n!=0)
    {
        int rem=n%10;
        sum=sum +rem;
        n=n/10;
        
    }
    cout<<sum<<" ";
    // sum stop
    // multi start
    while (m!=0)
    {
        int remi=m%10;
        multi=multi*remi;
		
        m=m/10;
    }
    cout<<multi<<" ";
    cout<<multi-sum<<" "; 
    

    
}
