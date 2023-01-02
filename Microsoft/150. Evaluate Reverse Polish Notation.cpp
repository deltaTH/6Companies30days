class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {
        // pehle ek stack bna lete hai
        stack<int> s;
        for (string x : tokens)
        {
            if (x == "+")
            {
                // sabse top ke element ko nikalna
                int a = s.top();
                s.pop();

                // phir se top ke element ko nikalna
                int b = s.top();
                s.pop();

                // add karke wapis push back into stack
                s.push(a + b);
            }

            else if (x == "-")
            {
                // sabse top ke element ko nikalna
                int a = s.top();
                s.pop();

                // phir se top ke element ko nikalna
                int b = s.top();
                s.pop();

                // add karke wapis push back into stack
                s.push(b - a);
            }

            else if (x == "*")
            {
                // sabse top ke element ko nikalna
                int a = s.top();
                s.pop();

                // phir se top ke element ko nikalna
                int b = s.top();
                s.pop();

                // add karke wapis push back into stack
                s.push(a * b);
            }

            else if (x == "/")
            {
                // sabse top ke element ko nikalna
                int a = s.top();
                s.pop();

                // phir se top ke element ko nikalna
                int b = s.top();
                s.pop();

                // add karke wapis push back into stack
                s.push(b / a);
            }

            else
            {   
                //agar operator ki jagah koi integer aa jaaye toh direct push
                s.push(stoi(x));
            }
        }
        return s.top();
    }
    
};
