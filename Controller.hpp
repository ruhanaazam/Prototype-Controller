#include <opencv2/opencv.hpp>
#include <queue>
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;
using namespace cv;
class Controller{


	private:
		ComUnit * cu; // communication unit
		int worker; // ???
		int groupSize; //number of frames 
		queue<Mat[]> *clips;
		
	public:
		Controller(int worker,int groupSize);
		void send_group();
		void read_video(string filename);
		void print_queue(queue<int> seg);

};



