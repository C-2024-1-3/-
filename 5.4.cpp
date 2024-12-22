
#include <iostream>
using namespace std;
class student {

private:	int score;
	int num;   
public:
	student(int Num, int Score) {
		num = Num;
		score = Score;
	}
	void coutmax(student *p) {
		
			for (int j = 0; j < 4 ; j++) {
				if (p[j].score > p[j + 1].score) {
					p[j + 1] = p[j];
				}
			}
			cout << p[4].num <<","<<p[4].score<< endl;
		}
};

			
int main()
{
	student studentscore[5] = { student(1,80),student(2,20),student(3,66), student(4,100), student(5,98) };
	studentscore->coutmax(studentscore);
}

