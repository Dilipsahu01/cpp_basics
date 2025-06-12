#include<iostream>
#include<vector>
#include<climits>
#include <algorithm>


using namespace std;
int main() {

                      //      target by sum of pair with optimium approach  //best for sorted array//


vector<int> v ={5,6,3,-8,0,3};
vector<int> ans;
sort(v.begin(), v.end());
int target=-8,st=0,ed=(v.size()-1);
while(st<ed) {
    if(v[st]+v[ed]<target) st++;
    else if(v[st]+v[ed]>target) ed--;
    else {
       ans.push_back(v[st]);
       ans.push_back(v[ed]);
       break;
    }
}

for(int result : ans) {
    cout << result<<"\t" ;
}

return 0;
}
