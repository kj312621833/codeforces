#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int n,k;
    while (t--)
    {
        cin >> n>>k;
        k--;
        cout<<(k+(n%2)*k/(n/2))%n+1<<endl;
    }
}
