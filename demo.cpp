// #include<iostream>
// using namespace std;


// int x(string a,string b){
//     int sum =0;
//     for(char c:a){
//         for(char d:b){
//             sum+=(c-'0')*(d-'0');
//         }
//     }
//     return sum;
// }

// int main(){
//     string a,b;
//     cin>>a>>b;
//     cout<<x(a,b)<<endl;
//     return 0;
// }

#include<bits/stdc++.h>

#include<bits/stdc++.h>
using namespace std;

void swap(string a,int i, int j){
    char tmp='0';
    tmp=a[i];
    a[i]=a[j];
    a[j]=tmp;
}

bool ischar(char c){
    if(c>='A'&& c<='z')
        return true;
    return false;
}

int main(){
    string line;
    getline(cin,line);
    int n= line.size();

    for(int i=0;i<n;i++){
        int j=i;
        int tag=0;
        while(ischar(line[j])&&j<n){
            j++;
        }
        tag=j;
        j--;
        while(i<j){
            swap(line,i,j);
            i++,j--;
        }
        while(!ischar(line[tag])){
            tag++;
        }
        i=tag;
    }

    cout<<line<<endl;
    return 0;
}