
#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int>& nums) {
        int maxelement=nums[0];
        int frequency=1;
        for(int i=0;i<nums.size()-1;i++){
            if(maxelement==nums[i+1]) {
                frequency++;
            }
            else frequency--;

            if(frequency==0) {
                maxelement=nums[i+1];
                frequency=1;
            }
        }
        return maxelement;
    }
int main() {
/////////////////leetcode practice
return 0; 
}

