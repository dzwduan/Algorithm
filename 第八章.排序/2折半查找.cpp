#include<iostream>
using namespace std;

//�۰��������
//  low�����ղ����λ�ã� low>high���˳� 

void HalfSort(int arr[], int length){
	int low;
	int high;
	int mid;
	int temp;
	for (int i=1;i<length;i++){
		low = 0;
		high = i-1;
		temp = arr[i]; //����Ҫ���������	
		
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

// �����ǲ���ר������ 

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
