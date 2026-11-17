class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, j = s.size() - 1;
        while (i <= j) {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9')) {
                    if ((s[j] >= 'a' && s[j] <= 'z') || (s[j] >= 'A' && s[j] <= 'Z') || (s[j] >= '0' && s[j] <= '9')) {
                        if (tolower(s[i]) == tolower(s[j])) {
                            i++;
                            j--;
                            // cout<<1<< " "<< i<< " "<< j<< endl;
                        } else {
                            return false;
                        }
                    } else {
                        j--;
                        // cout<<2<< " "<< i<< " "<< j<< endl;
                    }
                } else {
                    i++;
                    // cout<<3<< " "<< i<< " "<< j<< endl;
                }
        }

        return true;
    }
};
