class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int count = 0, min = 1000;
        string str;
        
        for(int i = 0; i< strs.size(); i++){
            int l = strs[i].size();
            if(l<min){
                min = l;
                str = strs[i];
            }
        }
        
        for( int i = 0; i< min; i++){
            for(int j = 0; j< strs.size();j++){
                if(strs[j][i] != str[i]){
                    return str.substr(0,count);
                }
            }
            count++;
        }
        return str.substr(0,count);
    }      
};