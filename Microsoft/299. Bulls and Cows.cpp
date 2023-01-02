class Solution
{
public:
    string getHint(string secret, string guess)
    {
        //make counters
        int bullCount = 0, cowCount=0;

        //an array to store frequency of digits
        int numbers[10] = {0};

        //iterate
        for (int i=0;i<secret.length();i++)
        {
            if (secret[i] == guess[i])
            {
                bullCount++;
            }
            else
            {
                //cow counter
                if (numbers[secret[i] - '0']++ < 0)
                {
                    cowCount++;
                }
                if (numbers[guess[i] - '0']-- > 0)
                {
                    cowCount++;
                }
            }
        }
        return to_string(bullCount) + "A" + to_string(cowCount) + "B";
    }
};