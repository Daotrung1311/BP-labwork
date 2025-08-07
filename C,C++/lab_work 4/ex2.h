int gcd(int a, int b, int c, int d){
    if (a == 0 && b ==0 && c ==0){
        return a+b+c+d;
    }
    else if (b == 0 && a ==0 && d ==0){
        return a+b+c+d;
    }
    else if (c == 0 && d ==0 && a ==0){
        return a+b+c+d;
    }
    else if (c == 0 && d ==0 && b ==0){
        return a+b+c+d;
    }
    



    int min;
    if(a<b && a<c && a<d){
        min = a;
    }
    else if (b<a && b<c && b<d)
    {
        min = b;
    }
    else if (c<b && c<a && c<d)
    {
        min = c;
    }
    else{min = d;}
    
    for(int i = min; i >= 1; i--){
        if (a%i == 0 && b%i ==0 && c%i ==0 && d%i ==0){
            return i;
        }
    }
    return 1;
}