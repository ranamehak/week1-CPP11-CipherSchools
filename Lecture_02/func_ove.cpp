#include <bits/stdc++.h>
using namespace std;
int maxi(int n1, int n2)
{
    if (n1 < n2)
        return n2;
    return n1;
}
int maxi(int n1, int n2, int n3)
{
    if (n1 > n2)
    {
        if (n1 > n3)
            return n1;
        return n3;
    }
    else
    {
        if (n2 > n3)
            return n2;
        return n3;
    }
}
int maxi(int n1, int n2, int n3, int n4)
{
    // 1st method
    //  int a =maxi(n1,n2);
    //  int b= maxi(n3,n4);
    //  return maxi(a,b);
    //  2nd method
    int a = maxi(n1, n2, n3);
    return maxi(a, n4);
}
int main()
{
    cout << maxi(2, 5);
    cout << endl;
    cout << maxi(2333, 454, 66);
    cout << endl;
    cout << maxi(23, 532, 245, 78);
}