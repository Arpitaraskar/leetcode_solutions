class Solution{

    public:

   vector<int> firstNegative(vector<int>& nums, int k) {

    queue<int>q;

    vector<int> ans;


    for(int i=0; i<k ; i++){

        // first window

        if(nums[i]<0){
         q.push(i);
        }

    }

    //first negative in first window

    if(!q.empty()){
        ans.push_back(nums[q.front()]);
    }else{
        ans.push_back(0);
    }

    // slide window
    for(int right =k ; right<nums.size(); right++){

        if(nums[right]<0){
            q.push(right);
        }

        //remove neg element the left side

        while(!q.empty() && q.front()<= right-k){
            q.pop();
        }

        // First negative in current window 
        if(!q.empty()) { 
            ans.push_back(nums[q.front()]); 
        } else { 
            ans.push_back(0);
         }
    }

    return ans;
   }

};