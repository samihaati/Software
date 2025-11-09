#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, b, d, sum = 0, c = 0;
    cin >> n >> b >> d;

    for(int i = 0;i < n; i++) {
        int a;
        cin >> a;
        if (a>b)
        continue;
        else {
            sum +=a;
            if(sum > d){
                ++c;
                sum = 0;
            }
        }

    }

    cout << c;


}