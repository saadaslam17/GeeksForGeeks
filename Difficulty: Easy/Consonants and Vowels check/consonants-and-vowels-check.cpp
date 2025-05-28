void checkString(string s) {
    int v = 0;
    int c = 0;

    // Your code here
    string vowels = "aeiou";
    
    for(int i = 0; i < s.size(); i++)
    {
        if(isalnum(s[i]))
        {
        if(vowels.find(s[i]) == string :: npos)
        {
            c++;
        }
        else
        {
            v++;
        }
        }
    }

    if (v > c)
        cout << "Yes";
    else if (c > v)
        cout << "No";
    else
        cout << "Same";

    cout << endl;
}