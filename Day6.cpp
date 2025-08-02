class Solution {
public:
    bool isValid(string s) {
        vector<int> pstack;
        bool flag = true;
        int idx = -1;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                pstack.push_back('(');
                idx++;
            } else if (s[i] == '[') {
                pstack.push_back('[');
                idx++;
            } else if (s[i] == '{') {
                pstack.push_back('{');
                idx++;
            } else if (s[i] == ')') {
                if (idx >= 0 && pstack[idx] == '(') {
                    pstack.pop_back();
                    idx--;
                } else {
                    flag = false;
                    break;
                }
            } else if (s[i] == ']') {
                if (idx >= 0 && pstack[idx] == '[') {
                    pstack.pop_back();
                    idx--;
                } else {
                    flag = false;
                    break;
                }
            } else if (s[i] == '}') {
                if (idx >= 0 && pstack[idx] == '{') {
                    pstack.pop_back();
                    idx--;
                } else {
                    flag = false;
                    break;
                }
            }
        }

        if (idx != -1) flag = false;
        return flag;
    }
};
