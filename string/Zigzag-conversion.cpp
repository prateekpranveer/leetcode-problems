class Solution {
public:
    string convert(string s, int numRows) {
        if (s.size()==1 || s.size()==2 || numRows==1) return s;
        int rowIndex = numRows-1;
        int interval = rowIndex*2;
        string ans = "";
        for (int x = 0; x<numRows; x++) {
             if (x==0 || x==numRows-1) {
                int i = 0;
                while((x+(interval*i))<s.size()) {    
                ans.push_back(s[x+(interval*i)]);
                i++;
                }
            }
            else {
                int i = 0;
                while(x+(interval*i)<s.size()) {  
                    ans.push_back(s[x+(interval*i)]);
                    if ((x+(interval*i)+((rowIndex-x)*2))<s.size()) {
                        int targetId = x+(interval*i)+(rowIndex-x)*2;
                        ans.push_back(s[targetId]);
                    }
                    i++;
                }
            }
           
        }
        return ans;
    }
}
;