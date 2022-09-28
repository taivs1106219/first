#include <iostream>

int main(int argc, char **argv)
{

    char name[20], id[20], address[20];
    printf("請輸入姓名：");
    scanf("%s", &name);

    printf("請輸入身份證第一個英文字母：");
    scanf("%s", &id);

    printf("請輸入地址：");
    scanf("%s", &address);

    printf("確認所填資訊：");
    printf("%s，身份證第一碼是%s \n", name, id);
    printf("地址：%s", address);

    return 0;
}