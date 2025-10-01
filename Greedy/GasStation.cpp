class Solution {
    public:
        int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
           int totGas = 0;
           int totCos = 0;
           for(int g: gas){
               totGas+=g;
           }
           for(int c: cost){
               totCos+=c;
           }
    
            if(totGas < totCos){
                return - 1;
            }
    
           int start = 0;
           int curr_gas = 0; 
           for(int i =0; i < gas.size(); i++){
               curr_gas = curr_gas + gas[i]-cost[i];
               if(curr_gas<0){
                 start = i +1;
                 curr_gas = 0;
                 continue;
               }
           } 
    
           return start;
        }
    };
    