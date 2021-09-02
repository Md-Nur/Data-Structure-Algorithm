import numpy as np 
def mineSweeper(bombs,n_rows,n_cols):
    a = np.zeros((n_rows,n_cols)) 
    for b in bombs:
        a[b[0],b[1]] = -1

        r_range = range(b[0]-1,b[0]+2)
        c_range = range(b[1]-1,b[1]+2)
        for i in r_range:
        
            for j in c_range:
                if(0<=i<n_rows and 0<=j<n_cols and a[i][j]!=-1):
                    a[i][j] +=1
    return a

print(mineSweeper([[0,0],[1,2]],3,4))