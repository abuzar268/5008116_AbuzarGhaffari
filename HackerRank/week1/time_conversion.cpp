#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
 // as we have to only change the hour so we extract the first two characters of string
//  stoi convert the string into integer

int hr = stoi(s.substr(0, 2));
   
    // we only have to change it if it is PM
    // for PM the 8th character of string is 'P'
    
    if (s[8] == 'P') {
        if (hr != 12) hr += 12;
    } 
    // in case of AM 12 am means 00:00 hrs in 24 hour time
    
    else {  
        if (hr == 12) hr = 0;
    }


//   now we convert the hr into string type
  
     string hr_str=to_string(hr);
     //incase hr is 5:13 , we have to show it as 05:13 to match the output
     
     if(hr<10) hr_str="0"+hr_str;
    //  now we update the first two characters of the string 
    
     s[0]=hr_str[0];
     s[1]=hr_str[1];
     
   //erasing the AM/PM part
    s.erase(8, 2);

    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
