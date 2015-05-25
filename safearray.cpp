#include<iostream>

class SafeArray{
public:
	SafeArray();
	int& operator[](int);
private:
	int array[10];
	int error_tmp;
};

SafeArray::SafeArray(){
	int i = 0;
	for (; i < 10; i++){
		array[i] = -1;
	}
	error_tmp = -1;
}

int& SafeArray::operator[](int index){
	if (index >= 10 || index < 0){
		std::cout << "out of range!\nusing error_tmp!" << std::endl;
		return error_tmp;
	}
	else
		return array[index];
}