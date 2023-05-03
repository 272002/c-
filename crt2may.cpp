// WAP to multiply 2 numbers
// #include <iostream>
// using namespace std;
// int ans = 0;
// void multiply(int n1,int n2){
//     if(n2>0){
//         multiply(n1,n2-1);
//         ans = ans + n1;
//     }
// }
// int main() {
// 	int n1,n2;
// 	cin>>n1>>n2;
// 	multiply(n1,n2);
// 	cout<<ans;
// 	return 0;
// }

// WAP to calculate power
// #include <iostream>
// using namespace std;

// int power(int n1,int n2){
//     if(n2!=0){
//         return n1*power(n1,n2-1);
//     }
//     else{
//         return 1;
//     }
// }
// int main() {
// 	int n1,n2;
// 	cin>>n1>>n2;
	
// 	cout<<power(n1,n2);
// 	return 0;
// }


// WARP to print 1,2,3,4 ... n
#include <iostream>
using namespace std;
void number(int n){
    if(n > 0){
    number(n-1);
    cout<<n<<" ";
    }
}

int main() {
	int n1;
	cin>>n1;
	number(n1);
	return 0;
}