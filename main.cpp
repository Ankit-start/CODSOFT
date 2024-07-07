#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int no=0,guess;
    srand(time(0));

    guess = rand()% (11-1)+1;
  
  cout<<"NUMBER GUESSING GAME"<<endl;
  cout<<"ENTER NO BETWEEN 1-10"<<endl;
  //cout<<guess;
  cout<<"ENTER NO: ";
  cin>>no;
  
  
  /*if(no<1||no>10) 
  cout<<"!!ENTER NO IN RANGE (1-10)!!"<<endl;*/
  
  int i=0;
  int loop=2;
while(i<loop && no>0&& no<11){
  
  if(no==guess && no>0&& no<11){
    cout<<"CONGRATULATIONS YOU GUESS RIGHT"<<endl;
    break;
  }
  if(no>guess && no>0&& no<11){
    cout<<"ENTER SMALLER NO"<<endl;
    cin>>no;
    i++;
  }
  if(no<guess&&i<loop&&no>0&&no<11 ){
    cout<<"ENTER HIGHER NO"<<endl;
    cin>>no;
    i++;
  }
  
  
  if(no==guess)
    loop=3;

}
  if(no<1||no>10) 
  cout<<endl<<"GAME OVER"<<endl<<"!! no should be in range (1-10)!!"<<endl;
  
  if(no!=guess&&no>0&&no<11)
    cout<<"BETTER LUCK NEXT TIME";
  
  


  return 0;
  
}