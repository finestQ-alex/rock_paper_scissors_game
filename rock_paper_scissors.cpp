#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
  int com, user;
  int count = 0;
  int result[3] = {0,};
  srand((unsigned)time(NULL));

  while (1){
    cout << "************ 가위 바위 보 게임 ************" << endl;
    cout << "(1. 가위 2. 바위 3. 보 0. 종료)" << endl;
    cout << "입력해 주세요 -> ";
    cin >> user;

    if (user > 0 && user < 4){
      com = rand() % 3 + 1;

      cout << "컴퓨터 -> " << (com == 1 ? "가위" : com == 2 ? "바위" : "보") << endl;
      cout << "사용자 -> " << (user == 1 ? "가위" : user == 2 ? "바위" : "보") << endl;
      count++;
      if (com == user) {
        cout << "비겼습니다" << endl;
        result[1]++;
      } else if (com == 1 && user == 3 || com == 2 && user == 1 || com == 3 && user == 2) {
        cout << "졌습니다" << endl ;
        result[2]++;
      } else {
        cout << "이겼습니다" << endl;
        result[0]++;
      }
      cout << count << "전 " << result[0] << "승 " << result[1] << "무 " << result[2] << "패" << endl;
    }else if (user == 0){
      cout << "게임을 종료합니다" << endl;
      break;
    }
  }
  

  return 0;
}