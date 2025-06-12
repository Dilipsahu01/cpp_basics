#include<iostream>
#include<vector>
using namespace std;
int main() {

     vector<int> v(10,0);
     for(int hello : v) {
         cout << hello<< "\n";
     }
 cout<<"\t";
     v={ 5 , 4 ,3 ,2 , 1 };
     v.push_back(20);
     for(int hello : v) {
         cout << hello<< "\n";
     }
     cout<<"\t";
     v.pop_back();
     v.at(3);


  for(int hello : v) {
         cout << hello<< "\n";
     }
 cout<<"\t";
 for(int hello : v) {
         cout << hello<< "\n";
     }
return 0;
}
