#include <iostream> 

int main(void) {
	/*
		cout은 출력을 담당하는 객체로써,
		스트림 삽입 연산자(stream insertion operator) 인
		<<를 이용해서" " 안에 있는 문자열을 출력한다.
	*/
	printf("Hellow World~"); //c언어 + c++ 할 수 있지만...

	std::cout << "hellow world" << std::endl; // c++ 보통
	//std::cin>> "입력받을 때"; 

		return 0; // 0 = 오류 없이 종료
}