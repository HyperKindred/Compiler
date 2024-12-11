int a,b,c;
float m,n;
int fibo(int a){
    if(a == 1 || a == 2) return 1;
    return fibo(a-1) + fibo(a-2);
}
int a;
int main(){
    int m,n,i;
    m=read();
    m = 1;
    n = 30;
    i=1;
    while (i<=m)
    {
        n=fibo(i);
        write(n);
        i=i+1;
    }
    for (i=1;i<=5;i=i+1){
        n=n+1;
    }
    return 1;
}