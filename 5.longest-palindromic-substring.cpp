/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
 */
class Solution {
     public:
        string longestPalindrome(string s)
        {
            if (s.empty()) return "";
            int len = s.size();
            if (len == 1)return s;
            int longest = 1;
            int start=0;
            vector<vector<int> > dp(len,vector<int>(len));
            for (int i = 0; i < len; i++)
            {
                dp[i][i] = 1;
                if(i<len-1)
                {
                    if (s[i] == s[i + 1])
                    {
                        dp[i][i + 1] = 1;
                        start=i;
                        longest=2;
                    }
                }
            }
            for (int l = 3; l <= len; l++)//子串长度
            {
                for (int i = 0; i+l-1 < len; i++)//枚举子串的起始点
                {
                    int j=l+i-1;//终点
                    if (s[i] == s[j] && dp[i+1][j-1]==1)
                    {
                        dp[i][j] = 1;
                        start=i;
                        longest = l;
                    }
                }
            }
            return s.substr(start,longest);
        }
};








// class Solution {
// public:
//     string longestPalindrome(string s) {
//         if(s.empty()){
//            return ""; 
//         }
//         int size = s.size();
//         if(size == 1){
//             return s;
//         }
//         string subs;
//         // vector<vector<string>> dp;"kyyrjtdplseovzwjkykrjwhxquwxsfsorjiumvxjhjmgeueafubtonhlerrgsgohfosqssmizcuqryqomsipovhhodpfyudtusjhonlqabhxfahfcjqxyckycstcqwxvicwkjeuboerkmjshfgiglceycmycadpnvoeaurqatesivajoqdilynbcihnidbizwkuaoegmytopzdmvvoewvhebqzskseeubnretjgnmyjwwgcooytfojeuzcuyhsznbcaiqpwcyusyyywqmmvqzvvceylnuwcbxybhqpvjumzomnabrjgcfaabqmiotlfojnyuolostmtacbwmwlqdfkbfikusuqtupdwdrjwqmuudbcvtpieiwteqbeyfyqejglmxofdjksqmzeugwvuniaxdrunyunnqpbnfbgqemvamaxuhjbyzqmhalrprhnindrkbopwbwsjeqrmyqipnqvjqzpjalqyfvaavyhytetllzupxjwozdfpmjhjlrnitnjgapzrakcqahaqetwllaaiadalmxgvpawqpgecojxfvcgxsbrldktufdrogkogbltcezflyctklpqrjymqzyzmtlssnavzcquytcskcnjzzrytsvawkavzboncxlhqfiofuohehaygxidxsofhmhzygklliovnwqbwwiiyarxtoihvjkdrzqsnmhdtdlpckuayhtfyirnhkrhbrwkdymjrjklonyggqnxhfvtkqxoicakzsxmgczpwhpkzcntkcwhkdkxvfnjbvjjoumczjyvdgkfukfuldolqnauvoyhoheoqvpwoisniv"
//         // dp.resize(size+1,vector<string> (size));
//         vector<string> dp;
//         for(int i = 2;i<=size;i++){
//             for(int j = 0;j<=size-i;j++){
//                 subs = s.substr(j, i);
//                 int k = floor(i/2);
//                 int count = 0;
//                 for(int m =0; m<k;m++){
//                     if(subs[m] == subs[i-m-1]){
//                         count++;
//                     }
//               {     if(count == k){
//               {         dp.push_back(subs);
//               {     }

//               { }
//             }
            
//         }
//         if(dp.{mpty()){
//             ch{r first = s[0];
//             ch{r tmp[1]; 
//             tm{[0] = first; 
//             st{ing result(tmp,1);
//             dp{push_back(result);
//         }
        
//        return dp.back();

        
//     }
// };

