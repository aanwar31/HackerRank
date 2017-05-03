#include <bits/stdc++.h>

using namespace std;

vector < int > solve(vector < int > grades){
    // Complete this function
    for(int i=0;i<grades.size();i++){
        int temp=grades[i];
        int result=0;
        int a=temp%5;
        int p=5-a;
        if(p<=2){
           result=grades[i]+p; 
        }
        if(result<40){
            continue;
        }
        else{
            grades[i]=result;
        }
    }
    return grades;
}

int main() {
    int n;
    cin >> n;
    vector<int> grades(n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       cin >> grades[grades_i];
    }
    vector < int > result = solve(grades);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != n - 1 ? " " : "")<<endl;
    }
    cout << endl;
    

    return 0;
}
