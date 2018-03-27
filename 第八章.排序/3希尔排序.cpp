#include<iostream>
using namespace std;

//ϣ������ 

void ShellSort(int arr[], int length){
	int step = length/2;
	while(step){
		for (int i=0;i<step;i++){
			for (int j=i+step;j<length;j++){
				int temp = arr[j];  //Ҫʹ�ü��step�ļ��������� ,ֱ�Ӳ�������˼�� 
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

// �����ǲ���ר������ 

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
