#include            <bits/stdc++.h>
using namespace std;
/*

9
t1 = -c
t2 = a + b
t3 = a + b
t4 = a + b
t5 = d + e
t6 = a + b
t7 = -c
t8 = d + e
t9 = 4 * t4

*/
int main(void)
{
    int n;
    cout << "Enter number of lines:\n";
    cin >> n;
    set<string> st;
    map<string, vector<string>> mp;
    map<string, string> dmp;
    cout << "\nEnter expressions:\n";
    for(int i=0; i<n; i++) {
        string str;
        cin >> str;

        string exp;
        getline(cin, exp);
        
        st.insert(exp);
        mp[exp].push_back(str); //
    }

    cout << "\nTerms are as follows:\n";
    for(auto it : st) {//set content
        cout << it << endl;
    }
    cout << endl;

    // cout << "\n------------------:\n";
    // for(auto it : mp) {//set content 
    //     for(auto fo: it.second)
    //         cout << fo << " : " << " ";
    //     cout<<endl;
    // }
    // cout << endl;
    
    for(auto it: mp) {
        for(int i=1; i<it.second.size(); i++) {
            dmp[it.second[i]] = it.second[0];
            cout<<it.second[i]<<" :"<<it.second[0]<<endl;
        }
    }
    cout << "Optimised code is as follows:\n";
    for(auto it: mp) {
        string lhs = it.second[0];
        string rhs = it.first;
        for(int i=0; i<rhs.length(); i++) {
            if(rhs[i] == 't') {
                string mapped = "t";
                mapped += rhs[i + 1];
                if(dmp[mapped].length() == 2)
                    rhs[i + 1] = dmp[mapped][1];//replace num next to 't' with mapped num
            }
        }
        cout << lhs << rhs << endl;
    }
}