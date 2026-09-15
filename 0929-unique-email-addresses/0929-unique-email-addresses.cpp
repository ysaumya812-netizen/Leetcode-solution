class Solution {
public:
    string modify(string s1){
        string s2=" ";
        for(int i=0;i<s1.size();i++){
            if(s1[i]=='.'){
                continue;
            }
            else if(s1[i]=='+'){
                return s2;
            }else{
                s2=s2+s1[i];
            }
        }
        return s2;
    }
    int numUniqueEmails(vector<string>& emails) {
        map<string,string>mapy;
        int i, size=emails.size();
        for(i=0;i<size;i++){
            string loc=emails[i];
            int locc=loc.find('@');
            string local=emails[i].substr(0,locc);
            string domain=emails[i].substr(locc);
            string in_local=modify(local);
            string add=in_local+" "+domain;
        mapy.insert({add,""});
        }
       
        
        return mapy.size();
    }
};