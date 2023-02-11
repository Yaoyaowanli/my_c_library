#include "test_signal.h"

void test_signal(){
        signal(SIGINT,sighandler);      //signal 接收到信号时跳出循环，执行sighandler函数。
        while (1){
                printf("中间代码逻辑,等待接收信号～\n");
                sleep(1);
        }
}

void done(){
        printf("执行资源释放~\n");
        sleep(5);
        printf("完成！\n");
}

void sighandler(int sig){
        printf("捕获到信号%d\t退出！",sig);
        if (atexit(done) ){                             //注册退出前的资源释放函数
                printf("注册结束函数失败！\n");
                exit(EXIT_FAILURE);
        }
        exit(EXIT_SUCCESS);
}

// int raise(int sig) 发送一个信号给当前进程
