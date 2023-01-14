class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        // 2 maps
        map<char, int> map1, map2;

        for (char ch : ransomNote)
        {
            map1[ch]++;
        }
        for (char ch : magazine)
        {
            map2[ch]++;
        }

        // makes ransomnote from amgazine
        // all in ransom note be there in magazine

        for (char ch : ransomNote)
        {
            if (map1[ch] > map2[ch])
            {
                return false;
            }
        }

        return true;
    }

    // can use freq vector - for each alphabet - 0 to 26
    // then comapre freq vectors like maps
};