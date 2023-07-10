
#define SORT_ALGO_SWAP(a, b) (((a) ^= (b)), ((b) ^= (a)), ((a) ^= (b)))

void bubble_sort_inplace(int * A,  unsigned int len){
    unsigned int n;
    unsigned int i;
    for (n=len; n>1; --n){
        for (i=0; i<n-1; ++i){
            if (A[i] > A[i+1]){
                SORT_ALGO_SWAP(A[i],A[i+1]);
            } 
        } 
    }
}

// NOT IMPLEMENTED YET
void insertion_sort(int * arr,  unsigned int len){

}
// NOT IMPLEMENTED YET
void selection_sort(int * arr,  unsigned int len){

}
// NOT IMPLEMENTED YET
void quick_sort(int * arr, unsigned int len){

}
// NOT IMPLEMENTED YET
void merge_sort(int * arr, unsigned int len){

}