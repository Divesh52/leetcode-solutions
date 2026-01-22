// Problem 1700: Number of Students Unable to Eat Lunch
// Approach: Queue simulation with rotation counter
// Time Complexity: O(n^2) in worst case
// Space Complexity: O(1) 

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n=students.size();
        int cnt=n;
        int dis=0;
        while(!sandwiches.empty()&&dis<n)
        {
            if(students[0]==sandwiches[0])
            {
                students.erase(students.begin());
                sandwiches.erase(sandwiches.begin());
                cnt--;
                dis=0;
            }
            else
            {
                int tmp=students[0];
                students.erase(students.begin());
                students.push_back(tmp);
                dis++;
            }
        }
        return cnt;
    }
};
