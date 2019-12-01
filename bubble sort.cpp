#include<simplecpp>

void swap_Array(int*a,int*b){
    int temp=*b;
    *b=*a;
    *a=temp;}

void sort_Array(int Array[],int n){

   // bool fully_sorted=false;

    while(t==0){//fully_sorted==false){
        int t=1;
        for(int i=0;i<n-1;i++){
            if(Array[i]>Array[i+1]){
                t=0;
                swap_Array(&Array[i],&Array[i+1]);
            }

        }
        if(t==1){fully_sorted=true;}
    }
}

void print_Array(int Array[],int n){
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
    sort_Array(Array,n);
    print_Array(Array,n);

    }
