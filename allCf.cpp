///****code 1


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int i;
//     cin >> i;
//     if(i< 0 || i>100){
//         return 0;
//     };
    
//     if(i > 2 && i % 2 == 0){
//         cout << "YES" << endl;
//     }
//     else{
//         cout << "NO" << endl;
//     }
//     return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     string s[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> s[i];
//         if(s[i].length() > 10){
//             cout << s[i][0] << s[i].length() - 2 <<  s[i].back() << endl;
//         }
//         else{
//             cout << s[i] << endl;
//         }

//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n,a,b,c,count = 0 ;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a >> b >> c;
//         if(a+b+c >= 2)
//             count++;
//     }
//     cout << count << endl;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int x = 0 , n;
//     cin >> n;
//     string s;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> s;
//           if(s == "++X" || s =="X++")
//          x = x+1 ;
//           if (s == "X--" || s == "--X")
//               x = x-1;
//     }
//      cout << x << endl;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int contestant, hScore,count=0;
//     cin >> contestant;
//     cin >> hScore;
//     int arr[contestant];
//     for (int i = 0; i < contestant; i++)
//     {
//         cin >> arr[i];
//     }
    
//     for (int i = 0; i < contestant; i++)
//     {
//         // if(arr[i] == 0)
//         //     count = 0;
//         if(arr[i] > 0 && arr[i] >= arr[hScore - 1])
//             count++;
//     }
//     cout << count << endl;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int m, n;
//     cin >> m >> n;
//     int out = round((m * n) / 2) ;
//     cout << out << endl;
// }




// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int count;
//     string s1, s2;
//     cin >> s1;
//     cin >> s2;
//     transform(s1.begin(), s1.end(), s1.begin(),
//               ::tolower);
//     // cout << s1;
//     transform(s2.begin(), s2.end(), s2.begin(),
//               ::tolower);
//     // cout << s2;
//     for (int i = 0; i < s1.length(); i++)
//     {
//         for (int j = 0; j < s2.length(); j++)
//         {
//             if(s1 == s2) {
//                 count = 0;
//             }
//             else if (s1 < s2)
//             {
//                 count = -1;
//             }
//             else{
//                 count = 1;
//             }
//         }     
//     }
//     cout << count << endl;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     cin >> s;
//     sort(s.begin(), s.end());
//     // cout << s <<endl;
//     int plus = s.size() / 2;
//     string res = "";
//     for (int i = plus; i < s.size()  ; i++)
//     { 
//         res += s[i];
//         if(i!=s.size()-1){
//           res += "+";
//         }
//     }
//     cout << res << endl;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     cin >> s;
//     s[0] = toupper(s[0]);
//     cout << s << endl;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main (){
//     string s;
//     cin >> s;
//     int size;
//             unordered_set<char> st;
//             for (int i = 0; i < s.size(); i++)
//             {
//                  st.insert(s[i]);
//             }
//             if(st.size() % 2 == 0)
//                  cout << "CHAT WITH HER!" << endl;
//             else
//                 cout << "IGNORE HIM!" << endl;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//      int a, b,count;
//      cin >> a >> b;
//      int i = 1;
//      for ( ;  ; i++)
//      {
//           a = a * 3;
//           b = b * 2;
//           if(a>b) break;
//      } 
//       cout << i << endl;    
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//      int n, count = 0;
//      cin >> n;
//      string s;
//      cin >> s;
//      for (int i = 0; i < s.size() ; i++){
//           if(s[i] == s[i+1])
//                count++;
//      }
//      cout << count << endl;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//      int x,res;
//      cin >> x;
//      if(x % 5 == 0 ){
//           res = x / 5;
//      }
//      else{
//           res = (x / 5) + 1;
//      }
//      cout << res << endl;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//      int k, n, w , total = 0 ,fT = 0;
//      cin >> k >> n >> w;
//      //  if(w == 1 && n >= k){
//      //    cout << total << endl;
//      //   }
//      //  else{
     
//        for (int i = 1; i < w+1 ; i++)
//        {
//           total += i * k;
//        }
//      //   cout << total << endl;
//        int res = abs(total - n);
//      //   cout << res << endl;
//        if(total > n) {
//             cout << res << endl;
//        }
//        else{
//             cout << fT << endl;
//        }
       
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   string s;
//   cin >> s;
//   int upper = 0, lower = 0;
//   for (int i = 0; i < s.size(); i++)
//   {
//     if(s[i] >= 'A' &&  s[i] <='Z')
//       upper++;
//       else
//         lower++;

//   }
// if(upper > lower){
//  transform(s.begin(), s.end(), s.begin(),
//               ::toupper);
// }
// else{
//   transform(s.begin(), s.end(), s.begin(),
//               ::tolower);
// }
// cout << s << endl;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int n, k ,r,x;
//   cin >> n >> k;
//   for (int i = 1; i < k+1; i++)
//   {
//     r = n % 10;
//     //  cout  << r << endl;
//     x = n / 10;
//     // cout  << x << endl;
//     if(r!=0) {
//       n = n - 1;
//     //  cout << n << endl;
//     }
//     else{
//       n = x;
//     }
//   }
//    cout << n << endl;
 
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   long long n,count = 0,count1=0;
//   cin >> n;
//   while(n>0){
//     int x = n % 10;
  
//   if(x == 4 || x==7 )
//   {
//     count++;
   
//   }
  
//   n = n / 10;
//   }
//    if(count == 4 || count == 7)
//      cout << "YES" << endl;
//      else
//        cout << "NO" << endl;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int n,count=0,c=0;
//   cin >> n;
//   string s;
//   cin >> s;
//   for (int i = 0; i < s.size(); i++)
//   {
//     if(s[i] == 'A') {
//       count++;
//     }
//     else if(s[i] == 'D'){
//       c++;
//     }
//   }
//   // cout << count << " " << " "<<c << endl;
//   if(count > c){
//     cout << "Anton" << endl;
//   }
//   else if(count < c){
//     cout << "Danik" << endl;
//   }
//   else{
//     cout << "Friendship" << endl;
//   }
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   string s1, s2;
//   cin >> s1 >> s2;
  
//   reverse(s1.begin(), s1.end());
//   // cout << s1 << endl;
//   if(s1==s2)
//     cout << "YES" << endl;
//     else
//       cout << "NO" << endl;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int n,x=0 ,ans =0;
//   cin >> n;
//   int a[n + 2], b[n + 2],res[n+2];
//   for (int i = 0; i < n; i++)
//   {
//     cin >> a[i]>>b[i];
//     res[i] = x - a[i] + b[i];
//     x = res[i];
//   }
  
//   for (int i = 0; i < n; i++)
//   {
//     if(ans < res[i]){
//       ans = res[i];
//     }
    
//   }
//   cout << ans << endl;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, h,ans = 0;
//     cin >> n >> h;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         if(arr[i] <= h){
//             ans = ans + 1;
//         }
        
//         else{
//             ans = ans + 2;
//        }
        
//     }
//    cout << ans << endl;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int y,a,b,c,d;
//     cin >> y;
//     while(true){
//         y++;
//         a = y / 1000;
//         b = (y / 100) % 10;
//         c = (y / 10) % 10;
//         d = (y % 10);
//         if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
//             cout << y << endl;
//             break;
//         }
//     }

// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,count=0;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         if(arr[i] == 1){
//             count++;
//         }
//     }
//     if(count>=1){
//         cout << "HARD" << endl;
//     }
//     else{
//         cout << "EASY" << endl;
//     }
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, p, q,count=0;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> p >> q;
//         if(q-p >=2)
//             count++;
//     }
//     cout << count << endl;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long n,res;
//     cin >> n;
//      res = pow(-1,n) * (n + 1) / 2;
//     cout << res << endl;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,x;
//     double res, sum = 0;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> x;
//         sum = sum + x;
//     }
//     // cout << sum;
//     res = sum / n;
//     cout << fixed << setprecision(12) << res << endl;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,count = 0;
//     cin >> n;
//     int arr[n+2];
//      for (int i = 0; i < n; i++)
//      {
//          cin >> arr[i];
//      }
//      for (int i = 0; i < n; i++)
//      {
//        if(arr[i] != arr[i+1])
//            count++;

//      }
//      cout << count << endl;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     string s;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> s;
//         cout << s.replace(s.size() - 2 , 2 ,"i") << endl;
//     }
    
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
   
//     while (n--)
//     {
//         int count = 0;
//         string s;
//         cin >> s;
//         if(s.size() > 1){
//             for (int  i = 0; i < s.size()-1; i++)
//             {
        
//                if(s[i] == s[i+1])
//                   {
//                     count++;
//                     break;
//                   }
//             }
            
//            }
            
//    if(count>0){
//     cout << count << endl;
// }
// else{
//     cout << s.size() << endl;
// }
//     }
   
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a, b, c, d, count = 0;
//     cin >> a >> b >> c >> d;
//     if(a == b || a == c || a == d){
//         count++;
//     }
//      if( b == c || b == d){
//         count++;
//     }
//      if( c == d){
//         count++;
//     }
//     cout << count << endl;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//        if (i % 2 == 1){
//            cout << " I hate ";
//        }
//        else{
//            cout << " I love  ";
//        }
//        if( i < n){
//            cout << " that ";
//        }

//     }
//     cout << " it ";
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n ;
//     cin >> n;
//     int a[n], b[n];
    
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i] >> b[i];
//     }
// for (int i = 0; i < n; i++)
// {
//     int count = 0;
//     if( a[i] % b[i] == 0)
//        {
//         //    count = 0;
//            cout << count<<endl;
//        }
//         else{
// while (a[i] % b[i] != 0)
//     {

//         // a[i]++;
//         // count++;
//         // if (a[i] % b[i] == 0)
//         // {
//             cout << b[i] - (a[i] % b[i])<<endl;
//             break;
//         // }
        
//     }
//         }
// }

    
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n ,count;
//     cin >> n;
//     int a, b;
//     cin >> a ;
//     set<int> st;

//     int p[a];
//     for (int i = 0; i < a; i++)
//     {
//         cin >> p[i];
//         st.insert(p[i]);
//     }
//     cin >> b;
//     int q[b];
//     for (int i = 0; i < b; i++)
//     {
//         cin >> q[i];
//         st.insert(q[i]);
//     }
//    if(st.size() == n){
//        cout << "I become the guy." << endl;
//    }
//    else{
//        cout << "Oh, my keyboard!" << endl;
//    }
   
// }










// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n, res, count = 0;
//     cin >> n;
//     while(n > 0){
//         if(n>=100)
//        { n = n - 100;
//     count++;
//     // cout << n << endl;
//     // cout << "c" <<count << endl;
//     }
//     else if(n>=20)
//        { n = n - 20;
//         count++;
//         // cout << n << endl;
//         // cout << "c" <<count << endl;
//         }
//     else if(n>=10)
//        { n = n - 10;
//         count++;
//         // cout << n << endl;
//         // cout << "c" <<count << endl;
//         }
//     else if(n>=5)
//      {   n = n - 5;
//         count++;
//         // cout << "c" <<count << endl;
//         // cout << n << endl;
//         }
//     else if(n>=1)
//       {  n = n - 1;
//         count++;
//         // cout << "c" <<count << endl;

//     // cout << n << endl;
//     }
//     }

//     cout << count << endl;
// }
