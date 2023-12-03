#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;

    cin >> n >> m;

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Output the entire matrix
  int f=0;
  bool ans=true;
  for(int i=0;i<m;i++){
    ans=true;
    for(int j=0;j<n;j++){
        if(arr[j][i]!=1){
            ans=false;
            break;
        }
    }
    if(ans){
        f++;
    }
    
  }
  cout<<f;

    return 0;
}
