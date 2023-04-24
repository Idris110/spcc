#include<bits/stdc++.h>
using namespace std;

string lex(string tok){
    vector<string> keywords = {"int","float","void","for","while","cout","endl","string","return"};
    vector<string> opers = {"+","-","/","*","=","?","<",">","<<",">>"};
    vector<string> nums = { "0","1","2","3","4","5","6","7","8","9"};

    if(find(keywords.begin(), keywords.end(), tok) != keywords.end())
        return "Keyword";
    else if(find(opers.begin(), opers.end(), tok) != opers.end())
        return "Operator";
    else if(find(nums.begin(), nums.end(), tok) != nums.end())
        return "Number";
    else 
        return "Identifier"; 
}

int main()
{
    cout<<"Enter the program :"<<endl;
    string s = "";
    while(s[s.size()-2] != '~'){
        string w;
        getline (cin, w);
        s.append(w);
        s.append("\n");
    }

    string word = "";
    cout<<"\n------- All the tokens are :\n";
    int i=0;
    while(i<s.size()-1){
        if(s[i] == ' ' || s[i] == '\n' || s[i] == '~'){
            cout<<"'"<<word<<"' is an "<<lex(word)<<endl;
            word.clear();
        }
        else if(s[i] == ';')
            cout<<"';' is a delimiter"<<endl;
        else
            word.push_back(s[i]);
        i++;
    }

    return 0;
}
