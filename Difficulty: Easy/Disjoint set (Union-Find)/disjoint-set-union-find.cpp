/*Complete the functions below*/
int find(int par[], int x) {
    // add code here
    if(par[x] == x){
        return x;
    }
    
    return find(par, par[x]);
}

void unionSet(int par[], int x, int z) {
    // add code here.
    int x_parent = find(par, x);
    int y_parent = find(par, z);

    if(x_parent != y_parent){
        par[x_parent] = y_parent;
    }
}