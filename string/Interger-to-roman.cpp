class Solution
{
public:
    string romanConverter(int number, int divider)
    {
        string s = "";
        map<int, char, greater<int>> um;
        um.insert({1, 'I'});
        um.insert({5, 'V'});
        um.insert({10, 'X'});
        um.insert({50, 'L'});
        um.insert({100, 'C'});
        um.insert({500, 'D'});
        um.insert({1000, 'M'});
        int te = number / divider;
        if (te != 4 && te != 9)
        {
            for (auto x : um)
            {
                if (number - x.first >= 0)
                {
                    while (number - x.first >= 0)
                    {
                        s.push_back(x.second);
                        number -= x.first;
                    }
                }
            }
        }
        else
        {
            if (divider == 100)
            {
                if (te == 4)
                {
                    s.append("CD");
                }
                else
                {
                    s.append("CM");
                }
            }
            else if (divider == 10)
            {
                if (te == 4)
                {
                    s.append("XL");
                }
                else
                {
                    s.append("XC");
                }
            }
            else if (divider == 1)
            {
                if (te == 4)
                {
                    s.append("IV");
                }
                else
                {
                    s.append("IX");
                }
            }
        }
        return s;
    }
    string intToRoman(int num)
    {
        string s;
        int divider = 1000;
        while (num > 0 && divider > 0)
        {
            int div = num / divider;
            int romanToFind = div * divider;
            s += romanConverter(romanToFind, divider);
            divider = divider / 10;
            num = num - romanToFind;
        }
        return s;
    }
};