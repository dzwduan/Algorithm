#include<iostream>
using namespace std;

//折半插入排序
//  low是最终插入的位置， low>high则退出 

void HalfSort(int arr[], int length){
	int low;
	int high;
	int mid;
	int temp;
	for (int i=1;i<length;i++){
		low = 0;
		high = i-1;
		temp = arr[i]; //缓存要插入的数据	
		
		while(low<=high){
			mid = (high+low)/2;
			if(arr[mid]>temp){
				high=mid-1;
			}
			else{
				low=mid+1;
			}
		} 
		
		for(int j=i;j>low;--j){
			arr[j] = arr[j-1];
		}
		arr[low] = temp;
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
	HalfSort(iArr, len);
	for (int j=0;j<len;j++){
		cout<<iArr[j]<<" ";
	}
	system("pause");
	return 0;
}
