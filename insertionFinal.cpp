#include<simplecpp>

void insert_sort(int Array[],int n){
    int j,i,key;

    for(int i=1;i<n;i++){
        key=Array[i];
        j=i-1;
        while(j>=0&&Array[j]>key){
            Array[j+1]=Array[j];
            Array[j]=key;
            j=j-1;
        }
    }
}


void print_array(int Array[],int n){
    for(int i=0;i<n;i++){
        cout<<Array[i]<<" ";
        }
}

main_program{

int n;
cin>>n;

int Array[n];

for(int i=0;i<n;i++){
    cin>>Array[i];
    }
insert_sort(Array,n);
print_array(Array,n);
}
