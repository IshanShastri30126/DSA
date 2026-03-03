// date 03-03-26 leetcode daily solution solved by me
class Solution {
public:
    char findKthBit(int n, int k) {
        string s = binary(n);
        return s[k-1]; // kth element return
    }

    // binary string generator 
    string binary(int n)
    {
        if(n == 1){
            return "0";   // base case
        }

        string strt = binary(n-1);
        string inv = invert(strt);

        reverse(inv.begin(), inv.end()); // reversing the inverted string

        string ans = strt + "1" + inv;
        return ans;
    }

    // inverse function 
    string invert(string s)
    {
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '0')
                s[i] = '1';
            else
                s[i] = '0';   
        } 
        return s;
    }
};
