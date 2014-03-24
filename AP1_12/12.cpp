#include <iostream>

using namespace std;

int main(void) 
{
	int total=0; // 총 비용
	int using_text; // 문자사용량
	int using_voice; // 통화사용량
	 
	int text_fee; // 문자사용가격
	int voice_fee; // 통화사용 가격
	char input;

	while(1) // 정확한 입력을 받기위한 while문
	{
		cout << "Select Type of Phone plan(A: 10000, B: 15000, C: 20000) : ";
		cin >> input;

		if(input=='A' || input=='B' || input=='C' || input=='a' || input=='b' || input=='c') // 입력이 a, b, c의 대소문자이면
			break; // break
		else
			cout << "Error! insert again" << endl; // 그 이외의 경우이면 에러처리
	}

	cout << "Insert monthly usage of text and voice : ";
	cin >> using_text >> using_voice;
	cout << "---------------------------------------" << endl;


	if(input=='A' || input=='a') // 입력이 A 또는 a 이면
	{ 
		if(using_text >= 100) // 문자 사용량이 100건 이상일때는
		{
			text_fee=(using_text-100)*20; // 사용량에서 무료 사용량(100)을 뺀후 요금을 곱함
		}
		else
			text_fee=0; // 아닐 경우 문자사용가격을 0원

		if(using_voice>=60) // 통화사용량이 60분 이상이면
		{
			voice_fee=(using_voice-60)*180; // 사용량에서 무료사용량(60)을 빼고 요금을 곱함
		}
		else
			voice_fee=0; // 아닐 경우 사용요금은 0원

	total=10000+text_fee+voice_fee; // 총 요금은 기본요금 + 문자 사용가격 + 통화사용가격
	total=(total+5)/10*10; // 10의 자리에서 반올림해주기 위해

	cout << input << "'s SMS Charge : " << text_fee << endl;
	cout << input << "'s Voice Call charge : " << voice_fee << endl;
	cout << input << "'s total fee : " << total << endl;
	}

	/* 밑의 b타입과 c타입 모두 위의 a타입과 똑같은 패턴으로 진행*/

	if(input=='B' || input=='b') 
	{ 
		if(using_text >= 150)
		{
			text_fee=(using_text-150)*15;
		}
		else
			text_fee=0;

		if(using_voice>=90)
		{
			voice_fee=(using_voice-90)*150;
		}
		else
			voice_fee=0;
		
	total=15000+text_fee+voice_fee;
	total=(total+5)/10*10;
	cout << input << "'s SMS Charge : " << text_fee << endl;
	cout << input << "'s Voice Call charge : " << voice_fee << endl;
	cout << input << "'s total fee : " << total << endl;
	}


	if(input=='C' || input=='c')
	{ 
		if(using_text >= 200)
		{
			text_fee=(using_text-200)*10;
		}
		else
			text_fee=0;

		if(using_voice>=120)
		{
			voice_fee=(using_voice-120)*60;
		}
		else
			voice_fee=0;
		
	total=20000+text_fee+voice_fee;
	total=(total+5)/10*10;
	cout << input << "'s SMS Charge : " << text_fee << endl;
	cout << input << "'s Voice Call charge : " << voice_fee << endl;
	cout << input << "'s total fee : " << total << endl;
	
	}

	return 0;
}