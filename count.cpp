// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;
//
// void countSort(vector<int> &arr){
//   int n = arr.size();
//   int maxElement = INT_MIN;
//   for(int i=0; i<n; i++){
//     int maxElement = max(arr[i], maxElement);
//   }
//
// // frequency array
//   vector<int> fre(maxElement+1,0);
//   for(int i=0;i<n; i++){
//     fre[arr[i]]++;
//   }
//
//   for(int i=1; i<=maxElement; i++){
//       fre[i] += fre[i-1];
//   }
// // Answer array
//   vector<int> ans(n);
//   for(int i=n-1; i>=0; i--){
//     ans[--fre[arr[i]]] = arr[i];
//   }
// // copying
//   for(int i=0; i<n; i++){
//     arr[i] = ans[i] ;
//   }
//
// }
//
// int main()
// {
//   int n;
//   cin>>n;
//   vector<int> arr(n);
//   for(int i=0; i<n; i++){
//     cin>>arr[i];
//   }
//
//   countSort(arr);
//
//   for(int i=0; i<n; i++){
//     cout<<arr[i]<<" ";
//   }cout<<endl;
//
//   return 0;
// }



#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void countSort(vector<int> &arr) {
    int n = arr.size();
    int maxElement = INT_MIN;
    for (int i = 0; i < n; i++) {
        maxElement = max(arr[i], maxElement);
    }

    // frequency array
    vector<int> fre(maxElement + 1, 0);
    for (int i = 0; i < n; i++) {
        fre[arr[i]]++;
    }

    for (int i = 1; i <= maxElement; i++) {
        fre[i] += fre[i - 1];
    }

    // Answer array
    vector<int> ans(n);
    for (int i = n - 1; i >= 0; i--) {
        ans[--fre[arr[i]]] = arr[i];
    }

    // copying
    for (int i = 0; i < n; i++) {
        arr[i] = ans[i];
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    countSort(arr);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

