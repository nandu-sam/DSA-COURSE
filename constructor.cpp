#include<iostream>
using namespace std;
class Wall{
	private:
		double length;
		public:
			Wall() {
				length=5.5;
				cout<<"Creating a wall:"<<endl;
				cout<<"Length = "<<length<<endl;
			}			
			
	};
	int main() {
		Wall Wall;
		return 0;
	}
