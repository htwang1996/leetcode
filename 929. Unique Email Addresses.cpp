/*929. Unique Email Addresses
Every email consists of a local name and a domain name, separated by the @ sign.

For example, in alice@leetcode.com, alice is the local name, and leetcode.com is the domain name.

Besides lowercase letters, these emails may contain '.'s or '+'s.

If you add periods ('.') between some characters in the local name part of an email address, mail sent there will be forwarded to the same address without dots in the local name.  For example, "alice.z@leetcode.com" and "alicez@leetcode.com" forward to the same email address.  (Note that this rule does not apply for domain names.)

If you add a plus ('+') in the local name, everything after the first plus sign will be ignored. This allows certain emails to be filtered, for example m.y+name@email.com will be forwarded to my@email.com.  (Again, this rule does not apply for domain names.)

It is possible to use both of these rules at the same time.

Given a list of emails, we send one email to each address in the list.  How many different addresses actually receive mails? 

 

Example 1:

Input: ["test.email+alex@leetcode.com","test.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com"]
Output: 2
Explanation: "testemail@leetcode.com" and "testemail@lee.tcode.com" actually receive mails

 

Note:

    1 <= emails[i].length <= 100
    1 <= emails.length <= 100
    Each emails[i] contains exactly one '@' character.
    All local and domain names are non-empty.
    Local names do not start with a '+' character.
*/
class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        string local,domain,v3;
        unordered_set<string> m;
        int first,last,dst;
        for (string str : emails)
        {
           SplitString(str,local,domain,"@");
           first=local.find('+');   //查找是否有+号
            if(first!=-1)//如果有+号 删除+到@的内容
            {
                last=local.find('@');  //@字符下标
                dst=last-first;    //@到+号之间有几个字符
                local.erase(first,dst);   
            }
            first=local.find('.');
            while(first!=-1)
            {
                local.erase(first,1);
                first=local.find('.');
            }
            v3 = local+domain;
            m.insert(v3);
        }
        return m.size();
    }
    void SplitString(const string& s, string& v1,string& v2, const string& c)
{
    string::size_type pos1, pos2,pos3;
    pos2 = s.find(c);
    pos1 = 0;
    pos3 = s.size()-1;
    if(string::npos != pos2)
    {
        v1 = s.substr(pos1, pos2-pos1+1);
        v2 = s.substr(pos2+1,pos3-pos2)
       
    }
}
};



/*
class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        int m=emails.size();
        int first,last,dst;
        bool flag=false;
        vector<string> res;
        for(int i=0;i<m;i++)
        {
            string temp=emails[i];   //每次取一个emails地址
            first=temp.find('+');   //查找是否有+号
            if(first!=-1)//如果有+号 删除+到@的内容
            {
                last=temp.find('@');  //@字符下标
                dst=last-first;    //@到+号之间有几个字符
                temp.erase(first,dst);   
            }
            first=temp.find('.');
            if(first!=-1)
            {
                temp.erase(first,1);
                first=temp.find('.');
            }
            flag=true;
            for(int j=0;j<res.size();j++)   //检查res中是否有这样的email地址
            {
                if(temp.compare(res[j])==0)
                    flag=false;
            }
            if(flag==true)  //如果res中没有这样的email地址，存入res
                res.push_back(temp);
        }
        return res.size();
    }
};
*/