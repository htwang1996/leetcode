/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */
class Solution {
public:
    int romanToInt(string s) {
        map<char,int> r2i;
        int count = 0;
        int value = 0;
        int c2i1,c2i2;
        r2i.insert(map<char, int>::value_type ('I',1));
        r2i.insert(map<char, int>::value_type ('V',5));
        r2i.insert(map<char, int>::value_type ('X',10));
        r2i.insert(map<char, int>::value_type ('L',50));
        r2i.insert(map<char, int>::value_type ('C',100));
        r2i.insert(map<char, int>::value_type ('D',500));
        r2i.insert(map<char, int>::value_type ('M',1000));
        for(int i = 0;i<s.size();i++) //
        {   char c1 = s[i];
            map<char, int>::iterator iter1;
            iter1 = r2i.find(c1); 
            c2i1 = iter1->second;
            if (i < s.size()-1)
            {
            int j = i+1;
            char c2 = s[j];
            map<char, int>::iterator iter2;  
            iter2 = r2i.find(c2); 
            c2i2 = iter2->second;
            if(c1 == 'I' && (c2 == 'V' || c2 == 'X'))
            {
                value = c2i2 - c2i1;
                i++;
            }
            else if(c1 == 'X' && (c2 == 'L' || c2 == 'C'))
            {
                value = c2i2 - c2i1;
                i++;
            }
            else if(c1 == 'C' && (c2 == 'D' || c2 == 'M'))
            {
                value = c2i2 - c2i1;
                i++;
            }
            else
            {
                value = c2i1;
            }
            }
            else 
               value = c2i1;
            count += value;
            
        }
        return count;

        
    }
};

