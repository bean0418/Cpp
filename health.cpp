#include <iostream>

using namespace std;

class Management
{
private:
    double height;
    double weight;
    
public:
    double getBmi();
    void setInfor();
};

int main() {
    Management obj;
    
    return 0;
}

