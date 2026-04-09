#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        int b_c = 0; // boat count
        sort(people.begin(), people.end());
        int i = 0;
        int j = n - 1;
        while (i<=j) {
            if (people[i] + people[j] <= limit) {
                b_c++;
                j--;
                i++;
            }
            else{
                b_c++;
                j--;
            }
        }
        return b_c;
    }
};

int main() {
    Solution sol;
    vector<int> people = {5, 1, 4, 2};
    int limit = 3;
    cout << sol.numRescueBoats(people, limit) << endl;
    return 0;
}