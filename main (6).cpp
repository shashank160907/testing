
#include <iostream>
using namespace std;
int main() {
  int followers, following;
  int num , t;
  t=num;
  cout<<"Enter the value of T"<<endl;
  cin>>t;
  for (int i=0;i<t;i++){
  cout << "Enter the number of followers: ";
  cin >> followers;
  cout << "Enter the number of accounts you are following: ";
  cin >> following;

  if (following > 10 * followers) {
    cout << "This account is likely to be spam." << endl;
  } else {
    cout << "This account is not likely to be spam." << endl;
  }
}
  return 0;
}