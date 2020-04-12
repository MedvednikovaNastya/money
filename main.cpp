#include <iostream>

using namespace std;

int main()
{
    int n, m, a[50][50];
    cin >> n >> m;
    a[1][1]=1;
    for (int i = 2; i <= n; i++)
        for (int j = 2; j <= m; j++)
        a[i][j]=a[i-1][j-2]+a[i-2][j-1];
    cout << a[n][m];
    return 0;
}
