#include<iostream>
#include<ctime>


int main()
{
    using namespace std;
    cout << "PC's PlaceȺ��������" << endl << endl
         << " Υ����������룺" << endl
         << "  11 - ���ˢ��  12 - �ж�ˢ��   13 - �ض�ˢ��" << endl
         << "  21 - ����������   22 - ��������" << endl 
         << "  3 - �����" << endl
         << "  4 - ��Υ������" << endl << "  5 - ��������" << endl << endl
         << " ��Ա��������� " << endl
         << "  0 - ��ͨ��Ա   1 - ����Ա   2 - �ٷ�   3 - �ٷ��Ĺ���Ա" << endl 
         << " ���뷽ʽ����Ա���+�ո�+Υ�������֧�ִ��뼰��Ȼ���ԣ��� " << endl;
    int fdtime;
    string num,ext;
    unsigned int dtime;
    Com:
    //srand((unsigned)time(0));
    cout << "\n>";
    cin >> ext >> num;
    //�������жϲ����Ĳ���
    if(num=="11") dtime=3+rand()%(20-3);
    else if(num=="12") dtime=21+rand()%(40-21);
    else if(num=="13") dtime=41+rand()%(60-41);
    else if(num=="21") dtime=3+rand()%(15-3);
    else if(num=="22") dtime=30+rand()%(40-30);
    else if(num=="3") dtime=10+rand()%(20-10);
    else if(num=="4") dtime=30+rand()%(60-30);
    else if(num=="5") dtime=30;
    else if(num=="���ˢ��") dtime=3+rand()%(20-3);
    else if(num=="�ж�ˢ��") dtime=21+rand()%(40-21);
    else if(num=="�ض�ˢ��") dtime=41+rand()%(60-41);
    else if(num=="����������") dtime=3+rand()%(15-3);
    else if(num=="��������") dtime=30+rand()%(40-30);
    else if(num=="�����") dtime=10+rand()%(20-10);
    else if(num=="��Υ������") dtime=30+rand()%(60-30);
    else if(num=="��������") dtime=30;
    else {cout << "\n\n �޷�ʶ���ѡ�";goto Com;}
    //�������жϳ�Ա����Ĳ���
    if(ext=="��ͨ��Ա")fdtime=dtime;
    else if(ext=="����Ա")fdtime=dtime*2;
    else if(ext=="�ٷ�")fdtime=dtime*2;
    else if(ext=="�ٷ��Ĺ���Ա")fdtime=dtime*4;
    else if(ext=="0")fdtime=dtime;
    else if(ext=="1")fdtime=dtime*2;
    else if(ext=="2")fdtime=dtime*2;
    else if(ext=="3")fdtime=dtime*4;
    else {cout << "\n\n �������ʶ��ʧ�ܣ�����Ĭ���������";fdtime=dtime;}

    cout << "\n�������" << fdtime << " ���ӡ�\n";
    goto Com;

    return 0;
}