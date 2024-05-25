#include "lr.h"
#define YES 1
#define NO 0
#define w 60
int lab1()
{
    float V, v1, t, v2;
    scanf ("%f", &V);
    scanf ("%f", &v1);
    scanf ("%f", &t);
    v1 = v1/60;
    v2 = v1 - (V/t);
    printf("%f", v2);
    return 0;
}

int lab2()
{
    int i, N, a = 0, b = 1, c;
    double sum = 0;
    scanf ("%d", &N);
    for (i = 1; i <= N; ++i){
        a = a + 1;
        b = b + 1;
        c = b * b;
        sum += (float)a/c;
    }
    printf ("%lf", sum);
    return 0;
}

int lab3(){
    int flag, buk;
    float cnt,n;
    char c;
    cnt = 0;
    buk=0;
    flag = NO;
    while((c = getchar()) != EOF)//
    {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
            flag=YES;
            cnt++;}

    if (c=='.' || c==',' || c==' '||  c=='\n'){
        if (flag==YES){
            n++;
        }
        flag=NO;
    }
    }
    printf("number of words = %f\n", cnt/n);
    return 0;
}

int lab4() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int i = 0, j = 0;
    while (str[i]) {
        if (str[i] == ' '||str[i] == '\n'||str[i] == '\t') {
            printf("%c",str[i]);
            i++;
        }
        j = i;
        while (str[j] && str[j] != ' ' && str[j] != '\n' && str[j] != '\t') {
            j++;
        }
        if ((j - i)%2 == 0) {
            while (i < j) {
                printf("%c",str[i]);
                i++;
            }
        } else {
            i = j;
        }
    }
    return 0;
}

int lab5() {
     int arr[10];
    int sum_ot=0,sum_pol=0, i;
    for (i=0;i<10;i++){
        scanf("%d", &arr[i]);
        if(arr[i]<0){
            sum_ot+=abs(arr[i]);
        }else{
        sum_pol+=arr[i];
        }
    }
    for (i=0;i<10;i++){
        if(sum_ot<sum_pol){
                if(arr[i]<0){
                    arr[i]='\0';
                }
        }
        printf("%d ",arr[i]);
    }
    return 0;
}

int lab6() {
    int N=3,K=3;
  float arr[N][K];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < N; i++) {
        int prog = 1;
        float b = arr[i][1] / arr[i][0];
        for (int j = 2; j < K; j++) {
            if (arr[i][j] / arr[i][j-1] != b) {
                prog = 0;
                break;
            }
        }
        if (prog) {
            printf("%d YES\n", i+1);
        } else {
            printf("%d NO\n", i+1);
        }
    }
return 0;
}

int lab7(){
 int N;
    int reversed = 0;
    scanf("%d", &N);
    int original = N;
    while (N > 0) {
        reversed = (reversed << 1) | (N & 1);
        N = N >> 1;
    }

    if (original == reversed) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

int dop1(){
 float V, v1, t, v2;
    scanf ("%f", &V);
    scanf ("%f", &v1);
    scanf ("%f", &t);
    v1 = v1/w;
    v2 = v1 - (V/t);
    printf("%f", v2);
    return 0;
}
int dop2() {
    int i, N, a = 0, b = 1, c;
    double sum = 0;
    scanf ("%d", &N);
    for (i = 1; i <= N; ++i){
        a = a + 1;
        b = b + 1;
        c = b * b;
        sum += (float)a/c;
    }
    printf ("%lf", sum);
    return 0;
}

int dop4() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int i = 0, j = 0;
    while (str[i]) {
        if (str[i] == ' ' ||  str[i] == '\n' || str[i] == '\t') {
            printf("%c",str[i]);
            i++;
        }
        j = i;
        while (str[j] && str[j] != ' ' && str[j] != '\n' && str[j] != '\t') {
            j++;
        }
        if ((j - i)%2 == 0) {
            while (i < j) {
                printf("%c",str[i]);
                i++;
            }
        } else {
            int b=i;
            while(b<j){
                if(str[b]>='1' && str[b]<='9'){
                     while (i < j) {
                printf("%c",str[i]);
                i++;
            }
                }
                b++;
            }
            i = j;
        }
    }
    return 0;
}

int dop5() {
 int arr[10],flag=0,cnt=0;
    int sum_ot=0,sum_pol=0, i;
    for (i=0;i<10;i++){
        scanf("%d", &arr[i]);
        if(arr[i]<0){
            sum_ot+=abs(arr[i]);
        }else{
        sum_pol+=arr[i];
        }
    }
    for (i=0;i<10;i++){
        if(arr[i]>arr[i + 1]){
            cnt+=1;
        }
    }
    if(cnt==9){
        for(i=0;i<10;i++){
            printf("%d ", arr[i]);
        }
    }else{
        for(i=0;i<10;i++){
            if(sum_ot < sum_pol){
                if(arr[i]<0){
                    arr[i]=0;
                }
            }
            printf("%d ", arr[i]);
        }
    }
    return 0;
}

int dop6() {
    int n,k;
    scanf("%d %d",&n,&k);
    int total = n * k;
    int arr[n][k];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < total - 1; i++) {
        for (int j = 0; j < total - i - 1; j++) {
            if (arr[j / k][j % k] > arr[(j + 1) / k][(j + 1) % k]) {
                int temp = arr[j / k][j % k];
                arr[j / k][j % k] = arr[(j + 1) /k][(j + 1) % k];
                arr[(j + 1) / k][(j + 1) % k] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
