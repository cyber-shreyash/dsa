class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n = skill.size();
        long long ans = 0;
        sort(skill.begin(), skill.end());

        int i = 0, j = n - 1;
        int flag = (skill[i] + skill[j]);

        while (i < j) {
            int sum = skill[i] + skill[j];

            if (flag == sum) {
                ans += skill[i] * skill[j];
            } else
                return -1;
            i++;
            j--;
        }
        return ans;
    }
};