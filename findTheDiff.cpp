class Solution {
public:
    char findTheDifference(string s, string t) {
    
    char val;
	vector<char> v_s(s.begin(), s.end());
	vector<char> v_t(t.begin(), t.end());

	for(int i = 0; i<v_s.size();i++ ){
        auto it = find(v_t.begin(), v_t.end(), v_s[i]); 
  
        // If element was found 
        if (it != v_t.end()) { 
        // calculating the index 
        // of K 
            int index = distance(v_t.begin(), it); 
            v_t.erase(v_t.begin()+index); 
        }
    }
        
    val = v_t[0];
	return val;
        
    }
};
