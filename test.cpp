#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <algorithm>
#include <cassert>

void swap(int* p1,int* p2){
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void InsertSort(int* arr,int n){
    assert(arr);
    //将第一位看作有序，每次取后面一位向前遍历插入
    for (int i=1 ; i<n ; i++){
        int key = arr[i];
        int end = i-1;

        while (end >= 0){
            if (arr[end]>key){
                arr[end+1] = arr[end];
                end--;
            }else{
                break;
            }
        }

        arr[end+1] = key;
    }
}

//三数取中
int get_mid_index(int* base,int left,int right){
	int mid = (left+right)/2;
	if(base[mid] > base[left]){
		if(base[mid] < base[right]){
			return mid;
		}else{
			if(base[left]>base[right]){
				return left;
			}else{
				return right;
			}
		}
	}else{	//base[mid] < base[left]
		if(base[mid] > base[right]){
			return mid;
		}else{
			if(base[left] < base[right]){
				return left;
			}else{
				return right;
			}
		}
	}
}

//霍尔划分
int hoare_part_sort(int* base,int begin,int end){
	//三数取中
	int mid = get_mid_index(base,begin,end);
	swap(&base[mid],&base[end]);
	//单次排序
	int keyIndex = end;
	while(begin < end){
		while(begin < end && base[begin] <= base[keyIndex]){
			//找大
			begin++;
		}
		while(begin < end && base[end] >= base[keyIndex]){
			--end;
		}
		swap(&base[begin],&base[end]);
	}
	swap(&base[begin],&base[keyIndex]);
	return begin;
}

//左右指针法
int LR_point_part_sort(int* base,int begin,int end){
	//三数取中
	int mid = get_mid_index(base,begin,end);
	swap(&base[mid],&base[end]);
	int key = base[end];
	while(begin < end){
		while(begin < end && base[begin] <= key){
			//找大
			++begin;
		}
		//填坑
		base[end] = base[begin];
		while(begin < end && base[end] >= key){
			--end;
		}
		base[begin] = base[end];
	}
	base[begin] = key;

	return begin;
}

void quick_sort(int* base,int begin,int end){
	if(begin >= end){
		return;
	}
	//当划分的数组元素大于10个时继续递归使用快排
	if( (end-begin+1) > 10){
		int div = LR_point_part_sort(base,begin,end);
        	quick_sort(base,begin,div-1);
        	quick_sort(base,div+1,end);
	}else{
		//当数组长度在10或10个元素以内，就直接使用插入排序
		InsertSort(base+begin,end-begin+1);
	}
}

int main(){
	// 测试快速排序
	//int arr[] = {5,2,1,5,7,89,6,3,123,6};
	int arr1[10000];
	int arr2[10000];
	for(int i=0; i<10000; i++){
		arr1[i] = rand()%100000;
		arr2[i] = arr1[i];
	}
	int t1 = clock();
	quick_sort(arr1,0,sizeof(arr1)/sizeof(arr1[0]));
	int t2 = clock();
	
	int t3 = clock();
	std::sort(&arr2[0],&arr2[9999]);
	int t4 = clock();

	printf("quickSotr:%d\n",t2-t1);
	printf("c++sort:%d\n",t4-t3);

        return 0;
}       
