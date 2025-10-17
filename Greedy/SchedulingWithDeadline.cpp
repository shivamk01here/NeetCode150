#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct job{
    char id;
    int deadline;
    int profit;
};

bool compareJobs(job a, job b){
    return a.profit > b.profit;
}

int main(){
    vector<job> jobs ={
        {'a', 2, 100},
        {'b', 1, 19},
        {'c', 2, 27},
        {'d', 1, 25}
    };
    
    
    int n = jobs.size();
    
    sort(jobs.begin(), jobs.end(), compareJobs);
    
    int maxDeadline = 0;
    for(int i = 0 ; i < n; i++){
        if(jobs[i].deadline > maxDeadline){
            maxDeadline = jobs[i].deadline;
        } 
    }

    vector<bool> slot(maxDeadline, false);
    int totalProfit = 0;
    for(int i = 0 ; i < n; i++){
       for(int j = jobs[i].deadline-1 ; j >=0; j--){
           
           if(slot[j]==false){
               slot[j]= true;
               totalProfit += jobs[i].profit;
               break;
           }
        
    }
    }
    
    std::cout << "Maximum profit is: " << totalProfit << std::endl;

    return 0;
    
    
}




