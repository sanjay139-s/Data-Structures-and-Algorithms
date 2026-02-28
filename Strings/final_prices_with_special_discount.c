/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* finalPrices(int* prices, int pricesSize, int* returnSize) {
    int i,j,*res,dis;
    res=(int*)malloc(pricesSize*sizeof(int));
    for(i=0;i<pricesSize;i++){
        dis=0;
        for(j=i+1;j<pricesSize;j++){
        if( prices[i]>=prices[j]){
                dis=prices[j];
                break;
            }
        }
        res[i]=prices[i]-dis;
    }
    *returnSize=pricesSize;
    return res;
}