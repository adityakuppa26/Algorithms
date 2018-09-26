/* Given, N Mice and N holes are placed in a straight line. Each hole can accommodate only 1 mouse. A mouse can stay at his position, move one step right from x to x + 1, or move one step left from x to x -1. Any of these moves consumes 1 minute. Write a program to assign mice to holes so that the time when the last mouse gets inside a hole is minimized.*/

int main() {
    int t, n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        vector<int> mice(n);
        vector<int> position(n);
        for(int i = 0;i < n;i++)
            scanf("%d",&mice[i]);

        for(int i = 0;i < n;i++)
            scanf("%d",&position[i]);
        
        sort(mice.begin(),mice.end());
        sort(position.begin(), position.end());
        int maxTime = INT_MIN;
        for(int i = 0;i < n;i++)
            maxTime = max(abs(mice[i] - position[i]),maxTime);
        printf("%d\n",maxTime);
    }
}
