#include <iostream>
#include <string>
using namespace std;
//string a2[3]={7,8,9};

int sum_max(string *stunames,int avg,int sum,int max=0)//if max is nnot passed the deafult value is 0
{
  for (int i=0;i<3;i++){
    stunames[i] = to_string((i+1)*10);
  }

  for (int i=0;i<3;i++){
    sum = sum + stoi(stunames[i]);
  }
  avg=sum/3;

  for (int i=0;i<3;i++)
    if (max < stoi(stunames[i])) max=stoi(stunames[i]);

    for (int i=0;i<5;i++){
      //std::cout << arr[i]<< '\n';
    }
  //std::cout << avg <<max<< '\n';
  return avg;
}


int main()
{
string stunames[3];
int arr[5]={1,2,3,4,5};
int avg=0,sum=0,max=0;
max=sum_max(stunames,avg,sum);//max parameter is not passed
std::cout << max << '\n';
  return 0;
}
