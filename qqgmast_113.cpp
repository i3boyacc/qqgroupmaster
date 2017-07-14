#include<iostream>
#include<ctime>


int main()
{
    using namespace std;
    cout << "PC's Place群管理助手 Preview Build 113"<< endl
         << "Copyleft 追求i3的孩纸. " 
         << "\n欲查询用法，请使用“help”命令。" ;
    int fdtime,mem,times;
    string num,ext,ope;
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
    cin >> mem >> times >> num;
    if(num=="11") dtime=3+rand()%(20-3);
    else if(num=="12") dtime=21+rand()%(40-21);
    else if(num=="13") dtime=41+rand()%(60-41);
    else if(num=="21") dtime=3+rand()%(15-3);
    else if(num=="22") dtime=30+rand()%(40-30);
    else if(num=="3") dtime=10+rand()%(20-10);
    else if(num=="4") dtime=30+rand()%(60-30);
    else if(num=="5") dtime=30;
    else {cout << "错误：无法识别的违规操作。";goto Com;}
    fdtime = dtime*mem*times;
    cout << " 建议禁言" << fdtime << " 分钟。";
    goto Com;
    help:
    cout << " 使用说明:" << endl
         << " 命令：exit - 退出程序 " << endl
         << "       help - 获取帮助 " << endl
         << "       forbid - 计算禁言时长 " << endl
         << "       ver - 显示版本信息 " << endl
         << " 计算禁言时长用法：forbid [成员身份代码] [违规情况] [违规操作代码] " << endl
         << " 成员身份代码\n 1 - 群成员   2 - 管理员  " << endl
         << " 违规情况\n 1 - 普通违规   2 - 屡教不改" << endl 
         << " 违规操作代码：" << endl
         << "  11 - 轻度刷屏  12 - 中度刷屏   13 - 重度刷屏" << endl
         << "  21 - 不文明用语   22 - 吵架骂人" << endl 
         << "  3 - 发广告" << endl
         << "  4 - 发违规内容" << endl << "  5 - 外挂抢红包" ;
    goto Com;
    ver:
    cout << "PC's Place群管理助手 Preview Build 113 "<< endl
         << " Copyleft 追求i3的孩纸. " ;
    goto Com;
    quit:
    return 0;
}
