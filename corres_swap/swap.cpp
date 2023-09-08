void swapAlternate(int arr[], int size){
    for(int i=0,j=i+1;i<n-2;i=i+2){
        int flag=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=flag;
    }
}