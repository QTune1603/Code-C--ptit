#include<bits/stdc++.h>
using namespace std;
#define ll long long

/*
	-cho n qua tao
	-chia n qua tao thanh 2 phan sao cho tong 2 phan chia dc chenh lech
	nho nhat
	
	-ung dung thuat toan sinh
		-gom cac qua tao o vi tri 0 vao 1 nhom
		-cac qua tao o vi tri 1 vao 1 nhom
		-va tinh tong
	-duy tri bien min qua cac cau hinh
	-sinh ra cau hinh tiep theo
*/
int n, a[100], ok;
void ktao(){
	for(int i = 1 ; i <= n ; i++){
		a[i] = 0;
	}
}

void sinh(){
	int i = n;
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		--i;
	}
	if(i == 0){
		ok = 0;
	}
	else {
		a[i] = 1;
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n;
	int w[n+1];
	for(int i = 1 ; i <= n ; i++) cin >> w[i];
	ok = 1;
	ktao();
	ll ans = 1e12;
	while(ok){
		ll sum1 = 0, sum2 = 0;
		for(int i = 1 ; i <= n ; i++){
			if(a[i] == 0){
				sum1 += w[i];
			}
			else {
				sum2 += w[i];
			}
		}
		ans = min(ans, abs(sum1-sum2));
		sinh();
	}
	cout << ans;
}