#include <iostream>

using namespace std;

int main(void) 
{
	int total=0; // �� ���
	int using_text; // ���ڻ�뷮
	int using_voice; // ��ȭ��뷮
	 
	int text_fee; // ���ڻ�밡��
	int voice_fee; // ��ȭ��� ����
	char input;

	while(1) // ��Ȯ�� �Է��� �ޱ����� while��
	{
		cout << "Select Type of Phone plan(A: 10000, B: 15000, C: 20000) : ";
		cin >> input;

		if(input=='A' || input=='B' || input=='C' || input=='a' || input=='b' || input=='c') // �Է��� a, b, c�� ��ҹ����̸�
			break; // break
		else
			cout << "Error! insert again" << endl; // �� �̿��� ����̸� ����ó��
	}

	cout << "Insert monthly usage of text and voice : ";
	cin >> using_text >> using_voice;
	cout << "---------------------------------------" << endl;


	if(input=='A' || input=='a') // �Է��� A �Ǵ� a �̸�
	{ 
		if(using_text >= 100) // ���� ��뷮�� 100�� �̻��϶���
		{
			text_fee=(using_text-100)*20; // ��뷮���� ���� ��뷮(100)�� ���� ����� ����
		}
		else
			text_fee=0; // �ƴ� ��� ���ڻ�밡���� 0��

		if(using_voice>=60) // ��ȭ��뷮�� 60�� �̻��̸�
		{
			voice_fee=(using_voice-60)*180; // ��뷮���� �����뷮(60)�� ���� ����� ����
		}
		else
			voice_fee=0; // �ƴ� ��� ������� 0��

	total=10000+text_fee+voice_fee; // �� ����� �⺻��� + ���� ��밡�� + ��ȭ��밡��
	total=(total+5)/10*10; // 10�� �ڸ����� �ݿø����ֱ� ����

	cout << input << "'s SMS Charge : " << text_fee << endl;
	cout << input << "'s Voice Call charge : " << voice_fee << endl;
	cout << input << "'s total fee : " << total << endl;
	}

	/* ���� bŸ�԰� cŸ�� ��� ���� aŸ�԰� �Ȱ��� �������� ����*/

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