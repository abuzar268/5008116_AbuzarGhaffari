#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string pangrams(string s) {
    
    // as we know set stores unique character 
    // so if we create a set and check if its size is 26 or not 
    // so we convert all letter in small letters using islower()
    
    
    set<char>alphabets;
    for(int i=0;i<s.size();i++){
        
    //for rejecting symbols, space we use isalpha which take small or capital alphabets only
    
        if(isalpha(s[i])){
            
    // converting all letter to lower case 
    
            char ch=tolower(s[i]);
    
    //inserting characters to the set
    
            alphabets.insert(ch);
        }
    }
    int n=alphabets.size();
    // if size of set is 26 it means it contains all letters
    if(n==26){
        return "pangram";
    }
    return "not pangram";   // in other cases no a pangram
    
    

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
