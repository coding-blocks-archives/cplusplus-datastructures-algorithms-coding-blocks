#include<iostream>
#include<vector>
using namespace std;
//Max heap
void upheapify(vector<int> &heap,int idx){
	if(idx==0){
		return;
	}
	int parentidx=(idx-1)/2;
	if(heap[parentidx]<heap[idx]){
		swap(heap[parentidx],heap[idx]);
		upheapify(heap,parentidx);
	}
	else{
		return;
		}
}
void downheapify(vector<int> &heap,int idx){
	int leftidx=2*idx+1;
	int rightidx=2*idx+2;
	if(leftidx>=heap.size() && rightidx>=heap.size()){
		return;
	}
	int largestidx=idx;
	if(leftidx<heap.size()&&heap[leftidx]>heap[idx]){
		largestidx=leftidx;
	}
	if(rightidx<heap.size()&&heap[rightidx]>heap[idx]){
		largestidx=rightidx;
	}
	if(largestidx==idx){
		return;
	}
	swap(heap[idx],heap[largestidx]);
	downheapify(heap,largestidx);
	
}
void buildheap(vector<int> &heap){
	for(int i=0;i<heap.size();i++){
		upheapify(heap,i);
	}
}
void buildheapOptimised(vector<int> &heap){
	for(int i=heap.size()-1;i>=0;i--){
		downheapify(heap,i);
	}
}
//delete peak element
void deletepeek(vector<int> &heap){
	swap(heap[0],heap[heap.size()-1]);
	heap.pop_back();
	downheapify(heap,0);
}

void insert(vector<int> &heap,int key){
	heap.push_back(key);
	upheapify(heap,heap.size()-1);
}
void display(vector<int> heap){
	for(int i=0;i<heap.size();i++){
		cout<<heap[i]<<" ";
	}
}

int main(){
	vector<int> heap;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int x; 
		cin>>x;
		heap.push_back(x);
//		insert(heap,x);
	}
	buildheapOptimised(heap);
	display(heap);
//	cout<<endl;
//	deletepeek(heap);
//	display(heap);
	
}
