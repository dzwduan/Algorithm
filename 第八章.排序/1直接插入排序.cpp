#include<iostream>
using namespace std;

void InsertSort(int arr[], int length){
	int i,j;
	int temp;
	for(i=1;i<length;i++){
		 temp = arr[i];
		 j=i-1;
		 
		 while(j>=0&&arr[j]>temp){
		 	arr[j+1] = arr[j];
		 	--j;
		 }
		 arr[j+1]=temp;
	}
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
	InsertSort(iArr, len);
	for (int j=0;j<len;j++){
		cout<<iArr[j]<<" ";
	}
	system("pause");
	return 0;
}
