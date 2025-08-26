#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        if (s.size() < 1 || s.size() > 100000){
            return;
        }
        for (int i = 0, n = s.size(); i < n / 2; i++){
            if ((s[i] < 32 || s[i] > 126)){
                return;
            }
            swap(s[i], s[n-1-i]);
        }
    }
};

int main()
{
    Solution sol;
    vector<char> s = {'h','e','l','l','o'};
    sol.reverseString(s);
    for (int i=0; i<s.size(); i++){cout << s[i];}
    return 0;
}