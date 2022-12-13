#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
    string a, b, c, d, e;
    cout << "Input text: ";
    cin >> a;
    b = func1(a);
	c = func2(a);
	d = func2(b);
    cout << "Reversed text: " << b << "\n";
    if(c == d){
        e = "Yes";
    }else{
        e = "No";
    }
    cout << "Palindrome: " << e;
    return 0;
}