class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int left = 0;
        int right = 0;

        while (right < typed.size()) {
            if (left < name.size() && name[left] == typed[right]) {
                left++;
                right++;
                
            }
            else if (right > 0 && typed[right] == typed[right - 1]) {
                right++;
            }
            else {
                return false;
            }
        }

        return left == name.size();
    }
};