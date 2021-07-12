
int gcd(a,b){
 if a=(a ==0 || b==0)
	return 0;
}
while (a!=b){
	if (a>b){
		a%=b;
	}else{
		b% =a
	}
	return a;
}
