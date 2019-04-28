/*804. Unique Morse Code Words

International Morse Code defines a standard encoding where each letter is mapped to a series of dots and dashes, as follows: "a" maps to ".-", "b" maps to "-...", "c" maps to "-.-.", and so on.

For convenience, the full table for the 26 letters of the English alphabet is given below:

[".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
Now, given a list of words, each word can be written as a concatenation of the Morse code of each letter. For example, "cba" can be written as "-.-..--...", (which is the concatenation "-.-." + "-..." + ".-"). We'll call such a concatenation, the transformation of a word.

Return the number of different transformations among all words we have.

Example:
Input: words = ["gin", "zen", "gig", "msg"]
Output: 2
Explanation:
The transformation of each word is:
"gin" -> "--...-."
"zen" -> "--...-."
"gig" -> "--...--."
"msg" -> "--...--."

There are 2 different transformations, "--...-." and "--...--.".
Note:

The length of words will be at most 100.
Each words[i] will have length in range [1, 12].
words[i] will only consist of lowercase letters.
*/
class Solution {
public:
	int uniqueMorseRepresentations(vector<string>& words) {
		unordered_set<string> m;
		unordered_map<char, string> w;
		vector<string> s;
		
		w['a'] = ".-";
		w['b'] = "-...";
		w['c'] = "-.-.";
		w['d'] = "-..";
		w['e'] = ".";
		w['f'] = "..-.";
		w['g'] = "--.";
		w['h'] = "....";
		w['i'] = "..";
		w['j'] = ".---";
		w['k'] = "-.-";
		w['l'] = ".-..";
		w['m'] = "--";
		w['n'] = "-.";
		w['o'] = "---";
		w['p'] = ".--.";
		w['q'] = "--.-";
		w['r'] = ".-.";
		w['s'] = "...";
		w['t'] = "-";
		w['u'] = "..-";
		w['v'] = "...-";
		w['w'] = ".--";
		w['x'] = "-..-";
		w['y'] = "-.--";
		w['z'] = "--..";

		for (int i = 0; i < words.size(); i++)
		{
			string si = "";
			for (int j = 0; j < words[i].length(); j++)
			{
				char ch = words[i][j];
				auto it = w.find(ch);
				if (it != w.end())
				{
					si += (*it).second;
				}
			}
			s.push_back(si);
		}
		for (int i = 0; i < s.size(); i++)
		{
			m.insert
		}
		return m.size();

	}
};



	