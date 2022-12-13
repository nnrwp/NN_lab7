#include<iostream>

using namespace std;

int adiff(int A, int B){
  int C;
  if(A > B){
    C = A-B;
  }else{
    C = B-A;
  }
  if(C%360 > 180){
    return 360 - C%360;
  }else{
    return C%360;
  }
}

int main(){
  cout << adiff(180,270) << endl;
  cout << adiff(210,45) << endl;
  cout << adiff(0,360) << endl;
  cout << adiff(10,350) << endl;
  cout << adiff(95,260) << endl;
  cout << adiff(90,-90) << endl;
  cout << adiff(1000,280) << endl;
  cout << adiff(60,244) << endl;

  return 0;
}
