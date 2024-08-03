#include<iostream>
#include<vector>
using namespace std;
int d(int &a, int &b){
  int g= a;
  a = b;
  b=g;
  return a, b;
}

void bubble(vector<int> &v){
  int n = v.size();
  for(int i=0; i<(n-1); i++){
    for(int j=0; j<(n-1-i); j++){
      if(v[j]>v[j+1]){
        d(v[j], v[j+1]);
      }
    }
  }
  return;
}

int main()
{
  int n;
  cin>>n;
  vector<int> v(n);
  for(int i=0; i<n; i++){
    cin>>v[i];
  }
  bubble(v);
  for(int i=0; i<n; i++){
    cout<<v[i]<<" ";
  }cout<<endl;

  return 0;
}
