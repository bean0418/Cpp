#include <iostream>

using namespace std;

void menu();

class Management
{
private:
    string name;
    string sex;
    double height;
    double weight;
    bool Infocheck;
    double muscle;
    
public:
    double getBmi();
    void setInfor();
    string getName(){return name;}
    bool getCheck(){return Infocheck;}
    string getSex(){return sex;}
    double getMuscle();
};

int main() {
    Management obj;
    
    int user = -1;

    while(user != 0){
        user = -1;

        menu();
        cin >> user;

        switch(user){
            case 1:
            if(obj.getCheck() == true){
                cout << "***** 이미 정보가 입력되었습니다. *****" << endl;
                break;
            }
            else{
                obj.setInfor();
            }
            break;

            case 2:
            cout << endl << obj.getName() << "님의 체질량 지수는 " << obj.getBmi() <<
            "입니다." << endl << endl;
            break;

            case 3:
            cout << endl << obj.getName() << "님의 적정 골격근량은 " << obj.getMuscle()
            << "kg 입니다." << endl << "이는 " << obj.getSex() << "기준으로 계산되었습니다."
            << endl << endl;
            break;
        }
    }

    cout << "프로그램이 종료되었습니다." << endl;

    return 0;
}

void menu(){
    cout << "[헬스 프로그램]" << endl;
    cout << "1. 정보 입력하기" << endl;
    cout << "2. 체질량지수 확인하기" << endl;
    cout << "3. 적정 골격근량 확인하기" << endl;
    cout << "4. 하루 섭취 권장 영양량 확인하기" << endl;
    cout << "0. 프로그램 종료" << endl;
    cout << "숫자만 입력해주세요: ";
}

void Management::setInfor(){
    cout << "이름을 입력해주세요: ";
    cin >> name;

    cout << name << "님의 신장을 입력해주세요(단위 생략): ";
    cin >> height;

    cout << name << "님의 몸무게를 입력해주세요(단위 생략): ";
    cin >> weight;

    cout << name << "님의 성별을 입력해주세요(남자 또는 여자): ";
    cin >> sex;

    Infocheck = true;

    cout << "***** 정보가 입력되었습니다. *****" << endl;
    cout << sex << ", 키: " << height << "cm " << "몸무게: " << weight << "kg" << endl;
}

double Management::getBmi(){
    return weight / ((height/100) * (height/100));
}

double Management::getMuscle(){
    if(sex == "남자"){ // 남자일 경우
        return weight * 0.43;
    }
    else{ // 여자일 경우
        return weight * 0.38;
    }

}