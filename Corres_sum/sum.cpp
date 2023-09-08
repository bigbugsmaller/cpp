void correspondingPairSum(int arr[],int n,int output[]){
    for(int i=0,j=n-1;i<j;i++,j--){
        output[i]=arr[i] + arr[j];
    }

}