#include<bits/stdc++.h>
using namespace std;
using ll = long long;

//O(n^2)
void selectionSort(int a[], int n){
	for(int i = 0 ; i < n-1; i++){
		//Dung 1 bien de luu chi so cua ptu nho nhat
		int min_pos = i;
		//duyet tat ca cac ptu dung sau ptu hien tai va cap nhat chi so cua ptu nho nhat
		for(int j = i+1 ; j < n ; j++){
			if(a[j] < a[min_pos]){ //a[j] > a[min_pos] thi giam dan
				min_pos = j;
			}
		}
		swap(a[i], a[min_pos]);
	}
}

//O(n^2)
void bubbleSort(int a[], int n){
	for(int i = 0 ; i < n-1 ; i++){
		for(int j = 0 ; j < n-i-1 ; j++){
			if(a[j] > a[j+1]){
				swap(a[j], a[j+1]);
			}
		}
	}
}

//O(n^2)
void insertionSort(int a[], int n){
	for(int i = 1 ; i < n ; i++){
		//Lay ra ptu o chi so i
		int x = a[i], pos = i-1;
		while(pos >= 0 && x < a[pos]){
			a[pos+1] = a[pos];
			--pos;
		}
		a[pos+1] = x;
	}
}

//O(n^2)
int cnt[1000001];

int main(){
	int a[1000],n;
	cin >> n;
	//countingSort
	int m = INT_MIN;
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
		cnt[a[i]]++;
		m = max(m, a[i]);
	}
	for(int i = 0 ; i <= m ; i++){
		if(cnt[i] != 0){
			for(int j = 0 ; j < cnt[i] ; j++){
				cout << i << " ";
			}
		}
	}
	//selectionSort(a,n);
	//bubbleSort(a,n);
	//insertionSort(a,n);
//	for(int i = 0 ; i < n ; i++){
//		cout << a[i] << " ";
//	}
}