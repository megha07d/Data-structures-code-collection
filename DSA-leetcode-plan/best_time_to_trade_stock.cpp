class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        //Greedy approach
            //minimize buy prize 
            //or maximize sell prize 
            //or do both
        
        //initialize
        int buy = prices[0];
        int max_profit = 0;
        
        for(int i=1;i<prices.size();i++)
        {
            if(buy > prices[i])
            {
                buy = prices[i];
                //get the min possible
            }
            //its established that prices[i] is greater than buy , but is it that big that it can be our max_profit?check
            else if(prices[i]-buy > max_profit)
            {
                max_profit=prices[i]-buy;
            }
        }
        
        return max_profit;
    }
};