#include<bits/stdc++.h>
using namespace std;
bool isSort(vector<long long> A){
    for(int i =1;i<A.size();i++){
        if(A[i-1]>A[i]){
            return false;
        }
    }
    return true;
}
int Possibility (int N, int M, vector<long long> A) {
    if(M==0) return isSort(A);
    
   
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        int N;
        cin >> N;
        int M;
        cin >> M;
        vector<long long> A(N);
        for(int i_A = 0; i_A < N; i_A++)
        {
        	cin >> A[i_A];
        }

        int out_;
        out_ = Possibility(N, M, A);
        cout << out_;
        cout << "\n";
    }
}
