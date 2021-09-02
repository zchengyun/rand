#include <iostream>
#include <cstdlib>
int main()
{
    srand(0); // 以当前时间为随机生成器的种子,0为38？1对应41？2对应45？
    int rand_variable = rand();//返回0-RAND_MAX间的随机整数值，最大值0x7fff
    std::cout << rand_variable << std::endl;
    std::cout << RAND_MAX << std::endl;

    srand(time(NULL));
    std::cout << time(NULL) << std::endl;// 返回从1970年元旦午夜0点到现在的秒数。
    std::cout << rand() << std::endl;

}

