

int linearSearch(int arr[], int n, int val){
    for(int i1=0;i1<n;i1++){
        bool flag=false;
        if(arr[i1]==val){
            return i1;
            flag=true;
            break;
        }
        else if(!flag){
            return "-1";
        }

    }
}
        