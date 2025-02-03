/*
cafeteria problem in meta's career page
*/

//There is a difference in result between using long long and double on math functions eventhough the double datatype has 64 bits

// char      >= 8 bits
// short     >= 16 bits
// int       >= 16 bits
// long      >= 32 bits
// long long >= 64 bits

#include <bits/stdc++.h>
#include <math.h>
using namespace std;


long long getMaxAdditionalDinersCount(long long N, long long K, int M, vector<long long> S){
	long long ans=0;
	sort(S.begin(), S.end());

	long long occupied=S.size();
	double left=1;									//initializing variable as long long gave incorrect results

	for(long long i=0; i<occupied; i++){
		double right = S[i] - (K+1);      
		ans+= 1 + floor((right-left)/(K+1));		//initializing variable as long long gave incorrect results
		left = S[i] + (K+1);
	}

	ans+= 1+ floor((N-left)/(K+1));
	
	return ans;
}

int main(){
	// long long N=15;
	// long long K=2;
	// int M=3;
	// vector<long long>S={11,6,14};

	long long N=10;
	long long K=1;
	int M=2;
	vector<long long>S={2,6}; 

	long long res=getMaxAdditionalDinersCount(N, K, M, S);
	cout << res << endl;
	cout << __SIZEOF_LONG_LONG__ << endl;
	cout << sizeof  (double) << endl;
return res;
}

