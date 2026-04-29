class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
            sort(people.begin(), people.end());
            // 1 2 2 3 3 
            int n = people.size();
            int i = 0, j = n-1;
            int ans = 0;
            while(i<=j){
                if(people[j]>limit) j--;
                else if(people[j]==limit) {
                    ans++;
                    j--;
                }
                else if(people[j]<limit){
                    int sum = people[i] + people[j];
                    if(sum>limit){
                        ans++;
                        j--;
                    }
                    else if(sum<=limit || i==j){
                        ans++;
                        j--;
                        i++;
                    }
                }
            }
            return ans;
    }
};