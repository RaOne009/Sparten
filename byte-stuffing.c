  /*
  RAone00
  Rohit sharma
  */

  #include <bits/stdc++.h>
  using namespace std;

  typedef long long ll;
  typedef long double ld;
  typedef pair < ll, ll > pll;
  typedef vector < vector < ll > > matrix;
  typedef vector < ll > vll;

  #define pb push_back
  #define debug(x) cout << (#x) << " is " << (x) << endl
  #define fast_io() ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)

  const ll mod = 1e9 + 7;
  const ll inf = LLONG_MAX;
  const ll N = 1e5 + 10;

  
  int main() {
      fast_io();
      ll int isSubstring(string s1, string s2) 
{ 
    ll M = s1.length(); 
    ll N = s2.length(); 
    for (int i = 0; i <= N - M; i++) { 
        int j;   
        for (j = 0; j < M; j++) 
            if (s2[i + j] != s1[j]) 
                break; 
        if (j == M) 
            return i; 
    } 
    return -1; 
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    #ifndef ONLINE_JUDGE
  freopen("in.txt","r",stdin);
  freopen("out.txt","w",stdout);
    #endif

    string s;
    string s1 = "FLAG", s2 = "ESC";
    cin>>s;
    ll ind1 = isSubstring(s1,s);
    ll ind2 = isSubstring(s2,s);
    vector<char> v;
    for(ll i=0;i<s.length();i++){
      if(s[i]=='F'){
      v.push_back('F');
      v.push_back('L');
      v.push_back('A');
      v.push_back('G');
      }
      if(s[i]=='E'){
        v.push_back('E');
        v.push_back('S');
        v.push_back('C');
      }
      v.push_back(s[i]);
    }
    for(ll i=0;i<v.size();i++){
      cout<<v[i];
    }
    cout<<endl;
      return 0;
  }

 