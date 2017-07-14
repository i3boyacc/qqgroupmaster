#include<iostream>
#include<ctime>


int main()
{
    using namespace std;
    cout << "PC's Place群管理助手 Build 105" << endl << endl
         << " 违规操作及代码：" << endl
         << "  11 - 轻度刷屏  12 - 中度刷屏   13 - 重度刷屏" << endl
         << "  21 - 不文明用语   22 - 吵架骂人" << endl 
         << "  3 - 发广告" << endl
         << "  4 - 发违规内容" << endl << "  5 - 外挂抢红包" << endl << endl
         << " 成员情况及代码 " << endl
         << "  0 - 普通成员   1 - 管理员   2 - 再犯   3 - 再犯的管理员" << endl 
         << " 输入方式：成员情况+空格+违规操作（支持代码及自然语言）。 " << endl;
    int fdtime;
    string num,ext;
    unsigned int dtime;
    Com:
    //srand((unsigned)time(0));
    cout << "\n>";
    cin >> ext >> num;
    //下面是判断操作的部分
    if(num=="11") dtime=3+rand()%(20-3);
    else if(num=="12") dtime=21+rand()%(40-21);
    else if(num=="13") dtime=41+rand()%(60-41);
    else if(num=="21") dtime=3+rand()%(15-3);
    else if(num=="22") dtime=30+rand()%(40-30);
    else if(num=="3") dtime=10+rand()%(20-10);
    else if(num=="4") dtime=30+rand()%(60-30);
    else if(num=="5") dtime=30;
    else if(num=="轻度刷屏") dtime=3+rand()%(20-3);
    else if(num=="中度刷屏") dtime=21+rand()%(40-21);
    else if(num=="重度刷屏") dtime=41+rand()%(60-41);
    else if(num=="不文明用语") dtime=3+rand()%(15-3);
    else if(num=="吵架骂人") dtime=30+rand()%(40-30);
    else if(num=="发广告") dtime=10+rand()%(20-10);
    else if(num=="发违规内容") dtime=30+rand()%(60-30);
    else if(num=="外挂抢红包") dtime=30;
    else {cout << "\n\n 无法识别的选项。";goto Com;}
    //下面是判断成员情况的部分
    if(ext=="普通成员")fdtime=dtime;
    else if(ext=="管理员")fdtime=dtime*2;
    else if(ext=="再犯")fdtime=dtime*2;
    else if(ext=="再犯的管理员")fdtime=dtime*4;
    else if(ext=="0")fdtime=dtime;
    else if(ext=="1")fdtime=dtime*2;
    else if(ext=="2")fdtime=dtime*2;
    else if(ext=="3")fdtime=dtime*4;
    else {cout << "\n\n 特殊情况识别失败，将按默认情况处理。";fdtime=dtime;}

    cout << "\n建议禁言" << fdtime << " 分钟。\n";
    goto Com;

    return 0;
}
