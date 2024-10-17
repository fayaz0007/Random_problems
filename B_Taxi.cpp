#include <bits/stdc++.h>
using namespace std;

void carNeed(vector<int>& nums){
    sort(nums.begin(), nums.end());
    int count = 0, maxCount = 0;
    int n = nums.size() - 1; // Tracking the number of remaining people
    int i = nums.size() - 1; // Pointer starting from the largest group
    int j = 0; // Pointer starting from the smallest group

    while (n >= 0) {
        if (nums[i] == 4) { 
            // A group of 4 people needs one car
            count++;
            i--;
            n--;
        } 
        else if (nums[i] == 3) { 
            // A group of 3 people
            if (nums[j] == 1) { 
                // Combine a group of 3 with a group of 1
                count++;
                j++;
                i--;
                n -= 2;
            } else { 
                // No group of 1 available to combine
                count++;
                i--;
                n--;
            }
        } 
        else if (nums[i] == 2) { 
            // A group of 2 people
            if (i > j && nums[i - 1] == 2) { 
                // Combine two groups of 2 people
                count++;
                i -= 2;
                n -= 2;
            } else if (nums[j] == 1 && nums[j+1] == 1 && maxCount + nums[i] <= 4) { 
                // Combine a group of 2 with two groups of 1
                count++;
                j++;
                i--;
                n -= 2;
            }else if (nums[j] == 1 && maxCount + nums[i] <= 4) { 
                // Combine a group of 2 with two groups of 1
                count++;
                j++;
                i--;
                n -= 2;
            }
                else { 
                // No possible combination, use a separate car for the group of 2
                count++;
                i--;
                n--;
            }
        } 
        else if (nums[i] == 1) { 
            // Handle the remaining groups of 1
            maxCount += nums[i];
            n--;
            if (maxCount == 4) {
                // A car is filled when there are 4 people
                count++;
                maxCount = 0;
            }
            i--;
        }
    }

    if (maxCount > 0) {
        // If there's any group of people left in the car, count it
        count++;
    }

    cout << count << endl;
}

int main(){
    vector<int> nums;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        nums.push_back(a);
    }
    carNeed(nums);
}
