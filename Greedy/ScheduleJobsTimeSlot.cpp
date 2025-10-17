#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int start[] = {1, 3, 0, 5, 8, 5};
    int end[] = {2, 4, 6, 7, 9, 9};
    
    vector<pair<int, int>>meetings;
    
    for(int i = 0; i < sizeof(start)/sizeof(start[0]); i++){
        meetings.push_back({end[i], start[i]});
    }
    
    sort(meetings.begin(), meetings.end());
    
    int end_time = meetings[0].first;
    int total_meetings = 1;
    
    for(int i = 1; i < meetings.size() ; i++){
        if(meetings[i].second >= end_time){
            end_time = meetings[i].first;
            total_meetings++;
        }
    }
    
    
    cout<< "total meetings are " << total_meetings;
    
    return 0;
}