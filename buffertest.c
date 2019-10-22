#include <stdio.h>
#include <stdlib.h>
#define SIZE 512
int main(int argc,char *argv[]){
	char buf[SIZE];
	if(setvbuf(stdin,buf,_IONBF,SIZE) != 0){
		perror("jiangbiaozhunshuru stdin deshurushezhiweiwuhuanchongshibai!\n");
		return 1;
	}
	printf("jiangbiaozhunshuru stdin deshurushezhiweiwuhuanchong!\n");
	printf("stdin leixingwei");
	if(stdin -> _flags & _IO_UNBUFFERED){
		printf("wuhuanchong\n");
	}
	else if(stdin -> _flags & _IO_LINE_BUF){
		printf("hanghuanchong\n");
	}
	else{
		printf("quanhuanchong\n");
	}
	printf("huanchongqudaxiaowei %ld\n",stdin -> _IO_buf_end - stdin -> _IO_buf_base);
	printf("wenjianmiaoshufuwei %d\n",fileno(stdin));
	if(setvbuf(stdin,buf,_IOFBF,SIZE) != 0){
		printf("jiangbiaozhunshuru stdin shezhiweiquanhuanchongshibai!\n");
		return 2;
	}
	printf("xiugaibiaozhnshuru stdin deleixingchenggong!\n");
	printf("stdin leixingwei");
	if(stdin -> _flags & _IO_UNBUFFERED){
		printf("wuhuanchong\n");
	}
	else if(stdin -> _flags & _IO_LINE_BUF){
		printf("hanghuanchong\n");
	}
	else{
		printf("quanhuanchong\n");
	}
	printf("huanchongqudedaxiaowei %ld\n",stdin-> _IO_buf_end - stdin -> _IO_buf_base);
	printf("wenjianmiaoshufuwei %d\n",fileno(stdin));
	return 0;
}
