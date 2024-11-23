class Solution {
public:



     void route(vector<string>&res,string s, int left, int right,int n){
        if(left==n&&right==n){
            res.push_back(s);
            return;
        }
        if(left<n){
            route(res,s+'(',left+1,right,n);         
        }
        if(right<left){
            route(res,s+')',left,right+1,n);
        }
    }


    vector<string> generateParenthesis(int n) {
        vector<string> res;
        route(res,"",0,0,n);
        return res;
    }

};
