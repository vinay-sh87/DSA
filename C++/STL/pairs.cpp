// Standard Template Libraries
#include<bits/stdc++.h>
using namespace std;

void print(string str){
    cout<<str<<endl;
} 
int main(){
    print("Hello World..");
    // Pairs
    pair<int, int> p = {3,4};
    cout<<p.first<<" "<<p.second<<endl;
    pair<string, pair<int, int>> price = {"Apple",{45,76}};
    cout<<price.first<<" "<<price.second.first<<" "<<price.second.second<<endl;
    // array of pairs
    pair<int, int> arr[] = {{2,4}, {56,78},{6,7}};
    for(int i = 0;i<3;i++){
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }


    return 0;
}