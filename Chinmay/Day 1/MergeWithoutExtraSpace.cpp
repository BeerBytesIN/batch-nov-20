class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    int p1 = n-1, p2 = 0;
	    while(p1 >= 0 && p2 < m)
	    {
	        if(arr1[p1] > arr2[p2])
	        {
	            int temp = arr1[p1];
	            arr1[p1] = arr2[p2];
	            arr2[p2] = temp;
	        }
	        p1--;
	        p2++;
	    }
	    sort(arr1, arr1+n);
	    sort(arr2, arr2+m);
	}
};