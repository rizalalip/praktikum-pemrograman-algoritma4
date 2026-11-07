#include<iostream>
using namespace std;
int main()
{
	float pendapatan, jasa, komisi, total;
	cout<<"pendapatan hari ini Rp.";
	cin>>pendapatan;
	if(pendapatan>=0&&pendapatan<=20000){
		jasa=10000;
		komisi=0.1*pendapatan;
	}
	else{
		jasa=30000;
		komisi=0.2*pendapatan;
	}
	/*menghitung total*/
	total = komisi+jasa;
	cout<<"uang jasa Rp. "<<jasa<<endl;
	cout<<"uang komisi Rp."<<komisi<<endl;
	cout<<"============================="<<endl;
	cout<<"hasil total Rp."<<total<<endl;
}
