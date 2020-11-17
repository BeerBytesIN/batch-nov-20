  Void spiral_matrix(int arr[10][10],int r,int c)
{
    int st_row=0,end_row=r-1,st_col=0,end_col=c-1;
    
     while(st_row<=end_row && st_col<=end_col)
         {
                for(int i=st_col;i<=end_col;i++)
                   {
                         cout<<arr[st_row][i]<<” “;
                   }
               St_row++;

                  for(int i=st_row;i<=end_row;i++)
                   {
                         cout<<arr[i][end_col]<<” “;
                   }
               end_col--;
             
              if(end_row>st_row){
                   for(int i=end_col;i>=st_col;i--)
                   {
                         cout<<arr[end_row][i]<<” “;
                   }
               end_row--;;
                 }
            
                if(st_col<end_col){
                  for(int i=end_row;i>=st_row;i--)
                   {
                         cout<<arr[i][st_col]<<” “;
                   }
               St_col++;
                }
         }
 } 
