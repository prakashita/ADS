class Solution {
public:
    int romanToInt(string s) {
        map<char, int> rtoi;
        rtoi['I'] = 1;
        rtoi['V'] = 5;
        rtoi['X'] = 10;
        rtoi['L'] = 50;
        rtoi['C'] = 100;
        rtoi['D'] = 500;
        rtoi['M'] = 1000;

        int sum = 0;

        for (int i = 0; i < s.size(); i++) {
            
            if (i + 1 < s.size() && rtoi[s[i]] < rtoi[s[i + 1]]) {
                sum -= rtoi[s[i]];
            } else {
                sum += rtoi[s[i]];
            }
        }

        return sum;
    }
};
