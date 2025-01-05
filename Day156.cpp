class Solution {
public:
    int magicalString(int n) {
      if( n <= 3 ) return 1 ; 
      string s = "122";
      int p1 = 2 , p2 =2 ; 
      int cnt = 1 ; 
      while( s.size() <= n )
      {
          int t = s[p1]-'0';
          char c = (s[p2]=='1'  ? '2' : '1'); 
          while(t--)
          {   
              s.push_back(c);
              ++p2;
          }
          ++p1;
      }
      cnt = 0 ; 
      for( int i = 0 ; i < n ; ++i )
      {
          if( s[i] == '1') ++cnt;
      }
      return cnt;
    }
};
