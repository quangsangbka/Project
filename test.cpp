#include<iostream>
#include<string.h>
using namespace std;
char *chuyendoi(int x);
int main() {
    char *result=new char;
    int x;
    cin >> x;
    result = chuyendoi(x);
    cout <<strrev(result);
}
char *chuyendoi(int x) {
    char *result = new char;
    if(x < 0) {
        x = -x;
        int count=0;	
while(x>0) {
        int a = x % 2;
        if(a == 0) {
            *(result+count)='0';
        } else {
            *(result+count)='1';
        }
        x = (x - a) / 2;
        count++;
    }
    int q=0;
    int w=count;
    if(count>4&&count%4!=0){
   while(1){
    *(result+count+q)='0';
q++;
	w++;
if(w%4==0) break;
	}
}
            int *arr=new int[count+q];
    for(int i=0;i<count+q;i++){
    	*(arr+i)=*(result+i)-48;
	if(*(arr+i)==0){
		*(arr+i)=1;
	}
	else{
		*(arr+i)=0;
	}
	}
	for(int i=0;i<count+q;i++){
		if(*(arr+i)==0){
			*(arr+i)=1;
			break;
		}
		else {
			*(arr+i)=0;
		}
	}
	
	for(int i=count+q-1;i>=0;i--)
	{
		cout<<*(arr+i);
	}
}
    else{
    int c=0;	
	while(x > 0) {
        int a = x % 2;
        if(a == 0) {
            *(result+c)='0';
        } else {
            *(result+c)='1';
        }
        x = (x - a) / 2;
        c++;
    }
    return result;
}
}
