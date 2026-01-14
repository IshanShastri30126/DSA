/*Given a time in 12-hour AM/PM format, convert it to military (24-hour) time.

Note: - 12:00:00AM on a 12-hour clock is 00:00:00 on a 24-hour clock.
- 12:00:00PM on a 12-hour clock is 12:00:00 on a 24-hour clock. 
*/
#include <bits/stdc++.h>
#include <string>
using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
string s1="AM";
string s2="PM";
 if(s.find(s1)!=std::string::npos)
 {
    s.pop_back();
    s.pop_back();
    string sub=s.substr(0,2);
   if(sub=="12")
   {
        s.replace(0,2,"00");
        return s;
   }
   else
   {
    return s;
   }
 }
 else{
    s.pop_back();
    s.pop_back();
    string sub=s.substr(0,2);
   if(sub=="12")
   {
       return s;
   }
   else
   {
        int w=stoi(sub);
        int ans=12+w;
        string replace =to_string(ans);
          s.replace(0,2,replace);
          return s;
         }
 }
 
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
