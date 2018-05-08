#include <iostream>
#include <fstream>
#include <algorithm>
//read the file of 10 ints on different lines.  Bubble sort objects
void SortAscending(int data[], int count){
//s to b
	while (!(std::is_sorted(data[0],data[count-1]))){
		for(int i=0; i<count-2;i++){
			if(data[i]>data[i+1]){
				int tempInt=data[i];
				data[i+1]=data[i];
				data[i]=tempInt;
			}
		}

	}
	std::cout<<"sorted"<<std::endl;
}

void SortDescending(int data[], int count){
//b to s

}

void printArray(int mydata[], int count){
	if(mydata!=NULL){
		for (int i = 0; i < count-1; ++i){
 			std::cout << mydata[i] << std::endl;
 		}
 	}

}





int main(){
 int data[10];
 int count = 0;
 std::ifstream file("data.txt");
 if (file.is_open()){
 	while (!file.eof() || file.peek() != EOF){
 		file >> std::ws;
 		if (file.eof() || file.peek() == EOF){
 			break;
 		}
 		file >> data[count];
 		++count;
 	}
 	
 }
 else{
 	std::cout << "Unable to open file!" << std::endl;
 }
 file.close();//end of boiler plate




}//end of main
//Section II, Section III, Section IV, and Part I of Section V.