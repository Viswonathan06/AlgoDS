#include<bits/stdc++.h>
using namespace std;

void sort( vector<int>& s, vector<int>& f ){

    for( int i=1; i<f.size(); i++){
        int temp = f[i];
        int j = i-1;
        int tempS = s[i];
        while( f[j] > f[i] && j>=0){
            f[j+1] = f[j];
            s[j+1] = s[j];
            j--;
        }
        f[j+1] = temp;
        s[j+1] = tempS;
    }

}


void printArr( vector<int> arr, vector<int> s, vector<int> f){
    for( auto a : arr){
        cout<<s[a]<<" , "<<f[a]<<"\n";
    }
    cout<<"\n";
}
void printMaxActivities(vector<int> s, vector<int> f ){
    
    vector<int> sch;
    sort( s, f);
    sch.push_back(0);
    int current = 0;

    for( int i= 1; i<f.size(); i++){
        if( s[i] >= f[current]){
            sch.push_back(i);
            current = i;
        }
    }
    printArr(sch, s, f);
    
}

int main()
{
    vector<int> s =  {5, 1, 3, 0, 5, 8};
    vector<int> f =  {9, 2, 4, 6, 7, 9};
    printMaxActivities(s, f);
    return 0;
}