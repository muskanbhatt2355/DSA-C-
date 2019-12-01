#include<simplecpp>


int min_rem_arr(int arr[],int *j,int n){
   int min_rem_arr=arr[*j];
   for(int i=*j+1;i<n;i++){
    int min_rem_arr=min(min_rem_arr,arr[i]);
    }
   return min_rem_arr;
}
void swap_el(int*xa,int*xb){
    int temp=*xa;
    *xa=*xb;
    *xb=temp;
    return;
    }

void sort_array(int arr[],int*k,int n){
    //swap_minel_Iel(k);
    int*min_el;
    *min_el=min_rem_arr(arr,k,n);
    swap_el(&arr[*k],min_el);
    sort_array(arr,k+1,n);
    return;
    }

void sorted_array(int arr[],int n){//printing sorted array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;}
    }


main_program{

    int n;//no. of elements in array
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
        }
    int k=0;
    sort_array(arr,&k,n);
    sorted_array(arr,n);

}
