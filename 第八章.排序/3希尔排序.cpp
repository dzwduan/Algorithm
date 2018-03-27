#include<iostream>
using namespace std;

//希尔排序 

void ShellSort(int arr[], int length){
	int step = length/2;
	while(step){
		for (int i=0;i<step;i++){
			for (int j=i+step;j<length;j++){
				int temp = arr[j];  //要使得间隔step的几个数有序 ,直接插入排序思想 
				int k=j-step;
				while(k>=0&&temp<arr[k]){
					arr[k+step] = arr[k];
					k-=step;
				} 
				arr[k+step] = temp;
			}
		}
		step/=2;
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
	ShellSort(iArr, len);
	for (int j=0;j<len;j++){
		cout<<iArr[j]<<" ";
	}
	system("pause");
	return 0;
}
