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
                int a = stack.top();
                s.pop();

                // phir se top ke element ko nikalna
                int b = stack.top();
                s.pop();

                // add karke wapis push back into stack
                s.push(a + b);
            }

            if (x == "-")
            {
                // sabse top ke element ko nikalna
                int a = stack.top();
                s.pop();

                // phir se top ke element ko nikalna
                int b = stack.top();
                s.pop();

                // add karke wapis push back into stack
                s.push(b - a);
            }

            if (x == "*")
            {
                // sabse top ke element ko nikalna
                int a = stack.top();
                s.pop();

                // phir se top ke element ko nikalna
                int b = stack.top();
                s.pop();

                // add karke wapis push back into stack
                s.push(a * b);
            }

            if (x == "/")
            {
                // sabse top ke element ko nikalna
                int a = stack.top();
                s.pop();

                // phir se top ke element ko nikalna
                int b = stack.top();
                s.pop();

                // add karke wapis push back into stack
                s.push(b / a);
            }

            else
            {
                s.push(stoi(x));
            }
        }
        return s.top();
    }
    
};
