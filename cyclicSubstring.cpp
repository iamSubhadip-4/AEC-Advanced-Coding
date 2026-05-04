#include<stdio.h>
#include<string.h>

int main() {
    char s[100];
    scanf("%s",s);

    int n=strlen(s);

    char t[100];
    strcpy(t,s);
    strcat(t,s);

    int maxSum=0;

    for (int i=0;i<n;i++) {
        int visited[26]={0};
        int sum=0;

        for (int j=i;j<i+n;j++) {
            int index = t[j]-'a';

            if (visited[index]==1)
                break;

            visited[index]=1;
            sum+=(index + 1);
        }

        if (sum>maxSum)
            maxSum=sum;
    }

    printf("%d\n",maxSum);

    return 0;
    
}
