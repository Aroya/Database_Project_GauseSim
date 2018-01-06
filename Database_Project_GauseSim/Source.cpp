
#include<iostream>
using namespace std;
#include"lib\GauseSim.h"
int main() {
	printf("This is a example of GauseSim\n");
	
	//set Sigma
	//defaule is 1
	//GauseSimSetting::setSigma1(1);
	//GauseSimSetting::setSigma2(2);
	double P1 = 1;
	double V1 = 1;
	double P2 = 1;
	double V2 = 1;
	cout << "Sim ans:" << GauseSim(P1, V1, P2, V2) << endl;


	system("pause");
	return 0;
}