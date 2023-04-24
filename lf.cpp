#include<bits/stdc++.h>
using namespace std;

int main()
{
    char lhs = 'A' ;
    vector<string> rhs = {"CD", "CE", "FG", "FE"};
    map<char, vector<int>> p;

    for(int i=0; i<rhs.size(); i++){
        p[rhs[i][0]].push_back(i);
    }

    cout<<lhs<<" -> ";
    int pointer=1;
    for(auto it : p){
        cout<<it.first<<lhs<<pointer++<<" | ";
    }
    
    pointer=1;
    for(auto it : p){
        cout<<endl<<lhs<<pointer++<<" -> ";
        for(auto i : it.second){
            for(int j=1; j<rhs[i].size(); j++)
                cout<<rhs[i][j]<<" | ";
        }
    }

    return 0;
}