#include<iostream>
using namespace std;

//希尔排序 

void ShellSort(int arr[], int length){
		
} 

// 下面是测试专用数据 

int main(){
	int iArr[]={7,8,9,5,2,0,5,12};
	int len = sizeof(iArr)/sizeof(iArr[0]);
	cout<<"before sort:";
	for (int i=0;i<len;i++){
		cout<<iArr[i]<<" ";
	}
	
	cout<<"\nafter sort:";
	ShellSort(iArr, len);
	for (int j=0;j<len;j++){
		cout<<iArr[j]<<" ";
	}
	system("pause");
	return 0;
}
