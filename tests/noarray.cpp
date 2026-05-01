#include<iostream>
#include "noarray.hpp"
using namespace std;
int main(){
	noarray<int,6> a;
	for (int i=0;i<6;i++){
		cout << a[i] << " ";
	}
}
