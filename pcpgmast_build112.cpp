#include<iostream>
#include<ctime>


int main()
{
    using namespace std;
    cout << "PC's Place群管理助手 Preview Build 112"<< endl
         << "Copyleft 追求i3的孩纸. " <<  endl 
         << "\n欲查询用法，请使用“help”命令。" ;
    int fdtime;
    string num,ext,ope,nouse1,nouse2;
    unsigned int dtime;
    Com:
    srand((unsigned)time(0));
    cout << "\nPC's Place>";
    cin >> ope;
    if(ope=="exit") goto quit;
    else if(ope=="forbid") goto forbidpart;
    else if(ope=="help") goto help;
    else if(ope=="ver") goto ver;
    else { cout << " 无效的命令。";goto Com;}
    //下面是判断操作的部分
    forbidpart:
    cin >> ext >> num;
    if(num=="11") dtime=3+rand()%(20-3);
    else if(num=="12") dtime=21+rand()%(40-21);
    else if(num=="13") dtime=41+rand()%(60-41);
    else if(num=="21") dtime=3+rand()%(15-3);
    else if(num=="22") dtime=30+rand()%(40-30);
    else if(num=="3") dtime=10+rand()%(20-10);
    else if(num=="4") dtime=30+rand()%(60-30);
    else if(num=="5") dtime=30;
    //下面是判断群成员情况的部分
    if(ext=="0")fdtime=dtime;
    else if(ext=="1")fdtime=dtime*2;
    else if(ext=="2")fdtime=dtime*2;
    else if(ext=="3")fdtime=dtime*4;
    else {cout << " 群成员情况识别失败，将按默认情况处理。\n";fdtime=dtime;}
    cout << " 建议禁言" << fdtime << " 分钟。";
    goto Com;
    help:
    cout << " 使用说明:" << endl
         << " 命令：exit - 退出程序 " << endl
         << "       help - 获取帮助 " << endl
         << "       forbid - 计算禁言时长 " << endl
         << "       ver - 显示版本信息 " << endl
         << " 计算禁言时长用法：forbid [群成员情况代码] [违规操作代码] " << endl
         << " 群成员情况代码 " << endl
         << "  0 - 群成员   1 - 管理员   2 - 群成员（再次）   3 - 管理员（再次）" << endl 
         << " 违规操作代码：" << endl
         << "  11 - 轻度刷屏  12 - 中度刷屏   13 - 重度刷屏" << endl
         << "  21 - 不文明用语   22 - 吵架骂人" << endl 
         << "  3 - 发广告" << endl
         << "  4 - 发违规内容" << endl << "  5 - 外挂抢红包" ;
    goto Com;
    ver:
    cout << "PC's Place群管理助手 Preview Build 112 "<< endl
         << " Copyleft 追求i3的孩纸. " ;
    goto Com;
    quit:
    return 0;
}
