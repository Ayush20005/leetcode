class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& height) {
        
        unordered_map<int,string> mp;
        
        for(int i=0;i<height.size();i++){
            mp[height[i]]=names[i];
        }
        
        
        sort(height.begin(),height.end());//here the height will be sorted .

vector<string>res;
for(int i=height.size()-1;i>=0;i--){
    res.push_back(mp[height[i]]);
}
return res;
    }
};