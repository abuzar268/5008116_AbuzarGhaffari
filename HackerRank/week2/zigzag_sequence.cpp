#include <bits/stdc++.h>
using namespace std;

void findZigZagSequence(vector < int > a, int n){
    sort(a.begin(), a.end());
    int mid = (n - 1)/2; // since zero based indexing so the middle element will be this 
    swap(a[mid], a[n-1]); // it will swap the middle element and last element

    int st = mid + 1;
    // since the last element gets into its correct position so we need to swap the elemnts before it 

    int ed = n - 2;
    while(st <= ed){
        swap(a[st], a[ed]);
        st = st + 1; // incrementing the start pointer 
        ed = ed - 1; // decrementing the end pointer 
    }
    for(int i = 0; i < n; i++){
        if(i > 0) cout << " ";
        cout << a[i];
    }
    cout << endl;
}

int main() {
    int n, x;
    int test_cases;
    cin >> test_cases;

    for(int cs = 1; cs <= test_cases; cs++){
        cin >> n;
        vector < int > a;
        for(int i = 0; i < n; i++){
            cin >> x;
            a.push_back(x);
        }
        findZigZagSequence(a, n);
    }
}



